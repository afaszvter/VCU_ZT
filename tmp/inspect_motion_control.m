modelFile = 'D:\VCU\VCU_SL_ZhengZhou\ZT2\Module\MainModel\ZT_VehCtrl_24B.slx';
[~, modelName] = fileparts(modelFile);
load_system(modelFile);
cleanup = onCleanup(@() close_system(modelName, 0));

sys = [modelName '/VehCtrl/MontionControl'];
fprintf('SYSTEM=%s\n', sys);
fprintf('PORT_COUNTS=%s\n', mat2str(get_param(sys, 'Ports')));

fprintf('BLOCKS\n');
blocks = find_system(sys, 'LookUnderMasks', 'all', 'FollowLinks', 'on', ...
    'Type', 'Block');
for k = 2:numel(blocks)
    block = blocks{k};
    blockType = get_param(block, 'BlockType');
    fprintf('%s | %s', block, blockType);
    switch blockType
        case {'Inport', 'Outport'}
            fprintf(' | Port=%s | DataType=%s', ...
                get_param(block, 'Port'), get_param(block, 'OutDataTypeStr'));
        case 'Constant'
            fprintf(' | Value=%s | DataType=%s', ...
                get_param(block, 'Value'), get_param(block, 'OutDataTypeStr'));
        case 'Switch'
            fprintf(' | Criteria=%s | Threshold=%s', ...
                get_param(block, 'Criteria'), get_param(block, 'Threshold'));
        case 'Logic'
            fprintf(' | Operator=%s | Inputs=%s', ...
                get_param(block, 'Operator'), get_param(block, 'Inputs'));
        case {'Goto', 'From'}
            fprintf(' | Tag=%s', get_param(block, 'GotoTag'));
        case 'Lookup_n-D'
            fprintf(' | Table=%s | Breakpoints1=%s', ...
                get_param(block, 'Table'), get_param(block, 'BreakpointsForDimension1'));
        case 'ManualSwitch'
            fprintf(' | CurrentSetting=%s', get_param(block, 'sw'));
        case 'RelationalOperator'
            fprintf(' | Operator=%s', get_param(block, 'Operator'));
    end
    fprintf('\n');
end

fprintf('LINES\n');
lines = find_system(sys, 'FindAll', 'on', 'SearchDepth', 1, 'Type', 'line');
for k = 1:numel(lines)
    src = get_param(lines(k), 'SrcPortHandle');
    dst = get_param(lines(k), 'DstPortHandle');
    if src == -1
        srcText = '<unconnected>';
    else
        srcParent = get_param(src, 'Parent');
        srcText = sprintf('%s/%s', get_param(srcParent, 'Name'), get_param(src, 'PortNumber'));
    end
    dstText = strings(0);
    for j = 1:numel(dst)
        if dst(j) ~= -1
            dstParent = get_param(dst(j), 'Parent');
            dstText(end+1) = sprintf('%s/%s', get_param(dstParent, 'Name'), get_param(dst(j), 'PortNumber')); %#ok<SAGROW>
        end
    end
    fprintf('%s | %s -> %s\n', get_param(lines(k), 'Name'), srcText, strjoin(dstText, ','));
end

fprintf('PARENT_CONNECTIONS\n');
parentLines = find_system([modelName '/VehCtrl'], 'FindAll', 'on', ...
    'SearchDepth', 1, 'Type', 'line');
for k = 1:numel(parentLines)
    src = get_param(parentLines(k), 'SrcPortHandle');
    dst = get_param(parentLines(k), 'DstPortHandle');
    touched = false;
    names = strings(0);
    if src ~= -1
        p = get_param(src, 'Parent');
        names(end+1) = string(get_param(p, 'Name')); %#ok<SAGROW>
        touched = touched || strcmp(get_param(p, 'Name'), 'MontionControl');
    end
    for j = 1:numel(dst)
        if dst(j) ~= -1
            p = get_param(dst(j), 'Parent');
            names(end+1) = string(get_param(p, 'Name')); %#ok<SAGROW>
            touched = touched || strcmp(get_param(p, 'Name'), 'MontionControl');
        end
    end
    if touched
        fprintf('%s | %s\n', get_param(parentLines(k), 'Name'), strjoin(names, ' -> '));
    end
end

outFile = 'D:\VCU\VCU_SL_ZhengZhou\ZT2\tmp\drive_req_docx\MontionControl.png';
open_system(sys);
print(['-s', sys], '-dpng', '-r160', outFile);
fprintf('SNAPSHOT=%s\n', outFile);
