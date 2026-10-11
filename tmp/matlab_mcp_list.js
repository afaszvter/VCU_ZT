const { spawn } = require('child_process');
const readline = require('readline');

const server = 'C:\\Users\\22654\\tools\\matlab-mcp\\matlab-mcp-server-windows-x64-v0.13.1.exe';
const args = [
  '--matlab-root=D:\\Matlab24b',
  '--initial-working-folder=D:\\VCU\\VCU_SL_ZhengZhou\\ZT2',
  '--matlab-display-mode=nodesktop',
  '--disable-telemetry=true'
];

const child = spawn(server, args, { stdio: ['pipe', 'pipe', 'pipe'] });
const pending = new Map();
let nextId = 1;

function send(message) {
  child.stdin.write(`${JSON.stringify(message)}\n`);
}

function call(method, params, timeoutMs = 30000) {
  const id = nextId++;
  send({ jsonrpc: '2.0', id, method, params });
  return new Promise((resolve, reject) => {
    pending.set(id, { resolve, reject });
    setTimeout(() => {
      if (pending.has(id)) {
        pending.delete(id);
        reject(new Error(`Timeout waiting for ${method}`));
      }
    }, timeoutMs);
  });
}

readline.createInterface({ input: child.stdout }).on('line', line => {
  const trimmed = line.trim();
  if (!trimmed) return;
  try {
    const msg = JSON.parse(trimmed);
    if (msg.id && pending.has(msg.id)) {
      const item = pending.get(msg.id);
      pending.delete(msg.id);
      if (msg.error) item.reject(new Error(JSON.stringify(msg.error)));
      else item.resolve(msg.result);
    }
  } catch {
    process.stderr.write(`NON_JSON_STDOUT: ${line}\n`);
  }
});

child.stderr.on('data', data => process.stderr.write(data));

(async () => {
  try {
    const init = await call('initialize', {
      protocolVersion: '2024-11-05',
      capabilities: {},
      clientInfo: { name: 'codex-direct', version: '1.0.0' }
    });
    send({ jsonrpc: '2.0', method: 'notifications/initialized', params: {} });
    const mode = process.argv[2] || 'list';
    if (mode === 'run') {
      const scriptPath = process.argv[3];
      if (!scriptPath) throw new Error('Missing MATLAB script path');
      const result = await call('tools/call', {
        name: 'run_matlab_file',
        arguments: { script_path: scriptPath }
      }, 180000);
      process.stdout.write(`${JSON.stringify({ init, result }, null, 2)}\n`);
    } else {
      const tools = await call('tools/list', {});
      process.stdout.write(`${JSON.stringify({ init, tools }, null, 2)}\n`);
    }
  } catch (error) {
    process.stderr.write(`${error.stack}\n`);
    process.exitCode = 1;
  } finally {
    child.kill();
  }
})();
