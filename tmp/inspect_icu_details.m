function inspect_icu_details
% Dump detailed parameters for the ICU CAN packing chain.

modelFile = 'D:/VCU/VCU_SL_ZhengZhou/ZT2/Module/MainModel/ZT_VehCtrl_24B_2.slx';
outDir = 'D:/VCU/VCU_SL_ZhengZhou/ZT2/tmp/icu_inspect';
[modelDir, modelName] = fileparts(modelFile);
addpath(modelDir);
load_system(modelFile);
cleanupObj = onCleanup(@() close_system(modelName, 0)); %#ok<NASGU>

fid = fopen(fullfile(outDir, 'details.txt'), 'w', 'n', 'UTF-8');
assert(fid ~= -1);
cleanupFid = onCleanup(@() fclose(fid)); %#ok<NASGU>

packRoots = { ...
    [modelName '/SigOut/ICU1' newline], ...
    [modelName '/SigOut/ICU2']};
for r = 1:numel(packRoots)
    root = packRoots{r};
    blocks = find_system(root, 'SearchDepth', 1, 'Type', 'Block');
    for k = 1:numel(blocks)
        b = blocks{k};
        if strcmp(safe_get(b, 'MaskType'), 'CAN Pack') || ...
                strcmp(safe_get(b, 'BlockType'), 'BusSelector') || ...
                strcmp(safe_get(b, 'BlockType'), 'Constant') || ...
                strcmp(safe_get(b, 'BlockType'), 'DataTypeConversion') || ...
                strcmp(safe_get(b, 'BlockType'), 'DataStoreRead') || ...
                strcmp(safe_get(b, 'BlockType'), 'DataStoreWrite')
            dump_block(fid, b);
        end
    end
end

vehRoot = [modelName '/VehCtrl/Subsystem'];
blocks = find_system(vehRoot, 'SearchDepth', 2, 'Type', 'Block');
for k = 1:numel(blocks)
    b = blocks{k};
    bt = safe_get(b, 'BlockType');
    mt = safe_get(b, 'MaskType');
    if any(strcmp(bt, {'BusSelector','BusCreator','Constant','Gain','MinMax', ...
            'Saturate','Abs','Logic','DataTypeConversion','Inport'})) || ...
            any(strcmp(mt, {'Compare To Constant'})) || ...
            contains(safe_get(b, 'Name'), 'Compare')
        dump_block(fid, b);
    end
end

% Ask Vehicle Network Toolbox to parse the selected DBC as an independent check.
dbcFile = 'D:/VCU/VCU_SL_ZhengZhou/ZT2/Module/CAN_DBC/有效CAN信号/整车CANA_GBK._Valid.dbc';
fprintf(fid, '\n===== DBC DATABASE =====\n');
try
    db = canDatabase(dbcFile);
    msgNames = string(db.MessageInfo.Name);
    wanted = startsWith(msgNames, "VCU2ICUInfor");
    info = db.MessageInfo(wanted, :);
    disp_to_file(fid, info);
    for k = 1:height(info)
        fprintf(fid, '\n--- %s ---\n', info.Name{k});
        sig = signalInfo(db, info.Name{k});
        disp_to_file(fid, sig);
    end
catch err
    fprintf(fid, 'DBC_PARSE_ERROR: %s\n', err.getReport('basic', 'hyperlinks', 'off'));
end

fprintf('WROTE %s\n', fullfile(outDir, 'details.txt'));
end

function dump_block(fid, b)
fprintf(fid, '\n===== BLOCK: %s =====\n', clean(getfullname(b)));
fprintf(fid, 'BlockType = %s\n', clean(safe_get(b, 'BlockType')));
fprintf(fid, 'MaskType = %s\n', clean(safe_get(b, 'MaskType')));
names = safe_get_raw(b, 'MaskNames');
values = safe_get_raw(b, 'MaskValues');
if iscell(names)
    for i = 1:numel(names)
        v = '';
        if iscell(values) && numel(values) >= i
            v = values{i};
        end
        fprintf(fid, 'MASK.%s = %s\n', clean(names{i}), clean(v));
    end
end
dp = safe_get_raw(b, 'DialogParameters');
if isstruct(dp)
    fields = fieldnames(dp);
    for i = 1:numel(fields)
        key = fields{i};
        fprintf(fid, 'PARAM.%s = %s\n', clean(key), clean(safe_get(b, key)));
    end
end
for key = {'OutputSignals','DataStoreName','Inputs','Operator','Function', ...
        'Value','Gain','UpperLimit','LowerLimit','Threshold','Criteria', ...
        'OutDataTypeStr','Port'}
    fprintf(fid, 'EXTRA.%s = %s\n', key{1}, clean(safe_get(b, key{1})));
end
end

function value = safe_get(obj, name)
value = safe_get_raw(obj, name);
if isempty(value)
    value = '';
elseif isnumeric(value) || islogical(value)
    value = mat2str(value);
elseif isstring(value)
    value = char(value);
elseif iscell(value)
    try
        value = strjoin(cellfun(@(x) clean(x), value, 'UniformOutput', false), ' | ');
    catch
        value = '';
    end
elseif ~ischar(value)
    try
        value = char(string(value));
    catch
        value = '';
    end
end
end

function value = safe_get_raw(obj, name)
try
    value = get_param(obj, name);
catch
    value = [];
end
end

function value = clean(value)
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

function disp_to_file(fid, value)
txt = evalc('disp(value)');
fprintf(fid, '%s\n', txt);
end
