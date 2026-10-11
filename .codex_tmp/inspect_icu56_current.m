modelFile = 'D:/VCU/VCU_SL_ZhengZhou/ZT2/Module/MainModel/ZT_VehCtrl_24B_2.slx';
[~, model] = fileparts(modelFile);
load_system(modelFile);
cleanup = onCleanup(@() close_system(model, 0));

blocks = find_system(model, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'Type', 'Block');
for i = 1:numel(blocks)
    block = blocks{i};
    if ~(contains(block, '/SigOut/ICU1') || contains(block, '/SigOut/ICU2'))
        continue;
    end
    maskType = get_param(block, 'MaskType');
    if ~contains(lower(maskType), 'can pack')
        continue;
    end

    vars = get_param(block, 'MaskWSVariables');
    messageName = '';
    signalNames = {};
    for j = 1:numel(vars)
        if strcmp(vars(j).Name, 'MessageInfo') && isstruct(vars(j).Value)
            info = vars(j).Value;
            if isfield(info, 'Name'), messageName = info.Name; end
        elseif strcmp(vars(j).Name, 'SignalInfo')
            info = vars(j).Value;
            if isstruct(info) && isfield(info, 'Name')
                signalNames = {info.Name};
            end
        end
    end
    if ~(contains(messageName, 'VCU2ICUInfor5') || contains(messageName, 'VCU2ICUInfor6') || ...
            contains(block, 'VCU2ICUInfor5') || contains(block, 'VCU2ICUInfor6'))
        continue;
    end

    fprintf('BLOCK|%s|MESSAGE|%s\n', block, messageName);
    ports = get_param(block, 'PortHandles');
    connectivity = get_param(block, 'PortConnectivity');
    for portIdx = 1:numel(ports.Inport)
        expected = '';
        if portIdx <= numel(signalNames), expected = signalNames{portIdx}; end
        if isempty(expected) && portIdx <= numel(connectivity)
            expected = connectivity(portIdx).Type;
        end
        line = get_param(ports.Inport(portIdx), 'Line');
        if line == -1
            fprintf('PORT|%d|DBC|%s|UNCONNECTED\n', portIdx, expected);
            continue;
        end
        lineName = get_param(line, 'Name');
        srcPort = get_param(line, 'SrcPortHandle');
        srcBlock = get_param(srcPort, 'Parent');
        srcName = get_param(srcBlock, 'Name');
        srcPortNo = get_param(srcPort, 'PortNumber');
        fprintf('PORT|%d|DBC|%s|LINE|%s|SRC|%s|SRCNAME|%s|SRCPORT|%d\n', ...
            portIdx, expected, lineName, srcBlock, srcName, srcPortNo);
    end
end
