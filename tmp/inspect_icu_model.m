function inspect_icu_model
% Inspect the ICU subsystem without modifying the source model.

modelFile = 'D:/VCU/VCU_SL_ZhengZhou/ZT2/Module/MainModel/ZT_VehCtrl_24B_2.slx';
outDir = 'D:/VCU/VCU_SL_ZhengZhou/ZT2/tmp/icu_inspect';
if ~exist(outDir, 'dir')
    mkdir(outDir);
end

[modelDir, modelName] = fileparts(modelFile);
addpath(modelDir);
load_system(modelFile);
cleanupObj = onCleanup(@() close_system(modelName, 0)); %#ok<NASGU>

target = modelName;
icuOutport = [modelName '/VehCtrl/ICU'];
if getSimulinkBlockHandle(icuOutport) == -1
    error('ICU outport not found: %s', icuOutport);
end

blocks = find_system(target, ...
    'FollowLinks', 'on', ...
    'LookUnderMasks', 'all', ...
    'IncludeCommented', 'on', ...
    'Type', 'Block');

blockFile = fullfile(outDir, 'blocks.tsv');
fid = fopen(blockFile, 'w', 'n', 'UTF-8');
assert(fid ~= -1, 'Cannot open %s', blockFile);
fprintf(fid, 'Path\tBlockType\tName\tParent\tPort\tOutDataTypeStr\tValue\tGain\tOperator\tInputs\tThreshold\tCriteria\tReferenceBlock\tMaskType\tAttributesFormatString\n');
for k = 1:numel(blocks)
    b = blocks{k};
    vals = cell(1, 15);
    vals{1} = b;
    vals{2} = safe_param(b, 'BlockType');
    vals{3} = safe_param(b, 'Name');
    vals{4} = safe_param(b, 'Parent');
    vals{5} = safe_param(b, 'Port');
    vals{6} = safe_param(b, 'OutDataTypeStr');
    vals{7} = safe_param(b, 'Value');
    vals{8} = safe_param(b, 'Gain');
    vals{9} = safe_param(b, 'Operator');
    vals{10} = safe_param(b, 'Inputs');
    vals{11} = safe_param(b, 'Threshold');
    vals{12} = safe_param(b, 'Criteria');
    vals{13} = safe_param(b, 'ReferenceBlock');
    vals{14} = safe_param(b, 'MaskType');
    vals{15} = safe_param(b, 'AttributesFormatString');
    vals = cellfun(@sanitize, vals, 'UniformOutput', false);
    fprintf(fid, '%s\n', strjoin(vals, sprintf('\t')));
end
fclose(fid);

lineFile = fullfile(outDir, 'lines.tsv');
fid = fopen(lineFile, 'w', 'n', 'UTF-8');
assert(fid ~= -1, 'Cannot open %s', lineFile);
fprintf(fid, 'System\tSrcBlock\tSrcPort\tDstBlock\tDstPort\tSignalName\n');
systems = find_system(target, ...
    'FollowLinks', 'on', ...
    'LookUnderMasks', 'all', ...
    'IncludeCommented', 'on', ...
    'BlockType', 'SubSystem');
systems = [{target}; systems(:)];
systems = unique(systems, 'stable');
for s = 1:numel(systems)
    sys = systems{s};
    lineHandles = find_system(sys, 'FindAll', 'on', 'SearchDepth', 1, 'Type', 'Line');
    for k = 1:numel(lineHandles)
        lh = lineHandles(k);
        src = get_param(lh, 'SrcBlockHandle');
        srcPort = get_param(lh, 'SrcPortHandle');
        dst = get_param(lh, 'DstBlockHandle');
        dstPort = get_param(lh, 'DstPortHandle');
        sig = safe_param(lh, 'Name');
        if isempty(dst)
            dst = -1;
        end
        if isempty(dstPort)
            dstPort = -1;
        end
        for d = 1:numel(dst)
            srcPath = handle_path(src);
            dstPath = handle_path(dst(d));
            srcNum = port_number(srcPort);
            if numel(dstPort) >= d
                dstNum = port_number(dstPort(d));
            else
                dstNum = '';
            end
            vals = cellfun(@sanitize, {sys, srcPath, srcNum, dstPath, dstNum, sig}, 'UniformOutput', false);
            fprintf(fid, '%s\n', strjoin(vals, sprintf('\t')));
        end
    end
end
fclose(fid);

% Stateflow text, if present.
sfFile = fullfile(outDir, 'stateflow.txt');
fid = fopen(sfFile, 'w', 'n', 'UTF-8');
assert(fid ~= -1, 'Cannot open %s', sfFile);
try
    rt = sfroot;
    charts = rt.find('-isa', 'Stateflow.Chart');
    for k = 1:numel(charts)
        c = charts(k);
        if startsWith(c.Path, target)
            fprintf(fid, '=== CHART: %s ===\n', c.Path);
            objs = c.find;
            for q = 1:numel(objs)
                o = objs(q);
                try
                    fprintf(fid, '[%s] %s\n', class(o), sanitize(o.LabelString));
                catch
                end
                try
                    fprintf(fid, 'Script:\n%s\n', sanitize(o.Script));
                catch
                end
            end
        end
    end
catch err
    fprintf(fid, 'STATEFLOW_EXPORT_ERROR: %s\n', err.message);
end
fclose(fid);

fprintf('WROTE %s\n', blockFile);
fprintf('WROTE %s\n', lineFile);
fprintf('WROTE %s\n', sfFile);
end

function value = safe_param(obj, name)
try
    value = get_param(obj, name);
    if isnumeric(value) || islogical(value)
        value = mat2str(value);
    elseif iscell(value)
        value = strjoin(cellfun(@string, value, 'UniformOutput', false), ',');
    elseif isstring(value)
        value = char(value);
    end
catch
    value = '';
end
end

function value = sanitize(value)
if isempty(value)
    value = '';
elseif isnumeric(value) || islogical(value)
    value = mat2str(value);
elseif isstring(value)
    value = char(value);
elseif ~ischar(value)
    try
        value = char(string(value));
    catch
        value = '';
    end
end
value = strrep(value, sprintf('\t'), ' ');
value = strrep(value, sprintf('\r'), ' ');
value = strrep(value, sprintf('\n'), '\\n');
end

function path = handle_path(h)
if isempty(h) || h == -1
    path = '';
    return;
end
try
    path = getfullname(h);
catch
    path = '';
end
end

function n = port_number(h)
if isempty(h) || h == -1
    n = '';
    return;
end
try
    n = num2str(get_param(h, 'PortNumber'));
catch
    n = '';
end
end
