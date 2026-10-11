modelFile = 'D:\VCU\VCU_SL_ZhengZhou\ZT2\Module\MainModel\ZT_VehCtrl_24B.slx';
[~, modelName] = fileparts(modelFile);
load_system(modelFile);
cleanup = onCleanup(@() close_system(modelName, 0));

fprintf('MODEL=%s\n', modelName);
fprintf('TOP_LEVEL_BLOCKS\n');
topBlocks = find_system(modelName, 'SearchDepth', 1, 'Type', 'Block');
for k = 2:numel(topBlocks)
    fprintf('%s | %s\n', topBlocks{k}, get_param(topBlocks{k}, 'BlockType'));
end

vehCtrl = [modelName '/VehCtrl'];
if getSimulinkBlockHandle(vehCtrl) ~= -1
    fprintf('VEHCTRL_LEVEL2_BLOCKS\n');
    blocks = find_system(vehCtrl, 'SearchDepth', 2, 'Type', 'Block');
    for k = 2:numel(blocks)
        fprintf('%s | %s\n', blocks{k}, get_param(blocks{k}, 'BlockType'));
    end
end

fprintf('DRIVE_RELATED_BLOCKS\n');
allBlocks = find_system(modelName, 'LookUnderMasks', 'all', ...
    'FollowLinks', 'on', 'Type', 'Block');
pattern = '(?i)(drive|drv|motor|torque|trq|gear|accpadle|accelerator|pedal)';
for k = 1:numel(allBlocks)
    block = allBlocks{k};
    name = get_param(block, 'Name');
    if ~isempty(regexp(name, pattern, 'once'))
        fprintf('%s | %s\n', block, get_param(block, 'BlockType'));
    end
end

fprintf('DRIVE_RELATED_LINES\n');
lines = find_system(modelName, 'FindAll', 'on', 'Type', 'line');
for k = 1:numel(lines)
    name = get_param(lines(k), 'Name');
    if ischar(name) && ~isempty(regexp(name, pattern, 'once'))
        parent = get_param(lines(k), 'Parent');
        fprintf('%s | %s\n', parent, name);
    end
end

fprintf('STATEFLOW_CHARTS\n');
root = sfroot;
machine = root.find('-isa', 'Stateflow.Machine', 'Name', modelName);
if ~isempty(machine)
    charts = machine.find('-isa', 'Stateflow.Chart');
    for k = 1:numel(charts)
        fprintf('%s\n', charts(k).Path);
    end
end
