modelFile = 'D:\VCU\VCU_SL_ZhengZhou\ZT2\Module\MainModel\ZT_VehCtrl_24B.slx';
[~, modelName] = fileparts(modelFile);
load_system(modelFile);
cleanup = onCleanup(@() close_system(modelName, 0));

motion = [modelName '/VehCtrl/MontionControl'];
fprintf('MOTION_PORT_CONNECTIVITY\n');
pc = get_param(motion, 'PortConnectivity');
for k = 1:numel(pc)
    src = string(pc(k).SrcBlock);
    dst = string(pc(k).DstBlock);
    fprintf('Port %d Type=%s Src=%s Dst=%s\n', k, pc(k).Type, ...
        strjoin(src, ','), strjoin(dst, ','));
end

fprintf('MOTION_TOP_BLOCK_PARAMETERS\n');
blocks = find_system(motion, 'SearchDepth', 1, 'Type', 'Block');
for k = 2:numel(blocks)
    b = blocks{k};
    bt = get_param(b, 'BlockType');
    fprintf('%s | %s', get_param(b, 'Name'), bt);
    try
        if strcmp(bt, 'BusSelector')
            fprintf(' | OutputSignals=%s', get_param(b, 'OutputSignals'));
        elseif strcmp(bt, 'SubSystem') && strcmp(get_param(b, 'Mask'), 'on')
            fprintf(' | MaskType=%s', get_param(b, 'MaskType'));
        elseif strcmp(bt, 'Logic')
            fprintf(' | Operator=%s | Inputs=%s', get_param(b, 'Operator'), get_param(b, 'Inputs'));
        elseif strcmp(bt, 'RelationalOperator')
            fprintf(' | Operator=%s', get_param(b, 'Operator'));
        elseif strcmp(bt, 'Constant')
            fprintf(' | Value=%s | Type=%s', get_param(b, 'Value'), get_param(b, 'OutDataTypeStr'));
        elseif strcmp(bt, 'ManualSwitch')
            fprintf(' | Setting=%s', get_param(b, 'sw'));
        elseif any(strcmp(bt, {'Goto','From'}))
            fprintf(' | Tag=%s', get_param(b, 'GotoTag'));
        end
    catch ME
        fprintf(' | PARAM_ERROR=%s', ME.identifier);
    end
    fprintf('\n');
end

fprintf('PARENT_DESTINATIONS\n');
ports = get_param(motion, 'PortHandles');
for k = 1:numel(ports.Outport)
    line = get_param(ports.Outport(k), 'Line');
    fprintf('Out%d ', k);
    if line == -1
        fprintf('UNCONNECTED\n');
        continue;
    end
    dstPorts = get_param(line, 'DstPortHandle');
    for j = 1:numel(dstPorts)
        dstBlock = get_param(dstPorts(j), 'Parent');
        fprintf('-> %s', dstBlock);
        if strcmp(get_param(dstBlock, 'BlockType'), 'Goto')
            fprintf('[%s]', get_param(dstBlock, 'GotoTag'));
        end
        fprintf(' ');
    end
    fprintf('\n');
end

fprintf('DRIVE_COMMAND_SIGNALS\n');
lines = find_system(modelName, 'FindAll', 'on', 'Type', 'line');
for k = 1:numel(lines)
    name = get_param(lines(k), 'Name');
    if ischar(name) && ~isempty(regexp(name, 'VCU2DrvMotor|DrvTrqTotal|TmEn', 'once'))
        fprintf('%s | %s\n', get_param(lines(k), 'Parent'), name);
    end
end

fprintf('CALIBRATION_VALUES\n');
names = {'VehTrqMax','VehPwrMax','VehTrqBackwardMax','VehPwrBackwardMax','WhlRadius'};
mw = get_param(modelName, 'ModelWorkspace');
for k = 1:numel(names)
    name = names{k};
    if mw.hasVariable(name)
        value = mw.getVariable(name);
        fprintf('%s=%s [model workspace]\n', name, mat2str(value));
    elseif evalin('base', sprintf("exist('%s','var')", name))
        value = evalin('base', name);
        if isa(value, 'Simulink.Parameter')
            value = value.Value;
        end
        fprintf('%s=%s [base workspace]\n', name, mat2str(value));
    else
        fprintf('%s=<UNRESOLVED>\n', name);
    end
end

systems = { ...
    [motion '/VehTrqForward'], ...
    [motion '/VehTrqBackward'], ...
    [modelName '/SigOut/MCU2']};
files = { ...
    'D:\VCU\VCU_SL_ZhengZhou\ZT2\tmp\drive_req_docx\VehTrqForward.png', ...
    'D:\VCU\VCU_SL_ZhengZhou\ZT2\tmp\drive_req_docx\VehTrqBackward.png', ...
    'D:\VCU\VCU_SL_ZhengZhou\ZT2\tmp\drive_req_docx\MCU2_Output.png'};
for k = 1:numel(systems)
    if getSimulinkBlockHandle(systems{k}) ~= -1
        open_system(systems{k});
        print(['-s', systems{k}], '-dpng', '-r180', files{k});
        fprintf('SNAPSHOT=%s\n', files{k});
    else
        fprintf('MISSING_SYSTEM=%s\n', systems{k});
    end
end
