function inspect_canpack_ports
modelFile = 'D:/VCU/VCU_SL_ZhengZhou/ZT2/Module/MainModel/ZT_VehCtrl_24B_2.slx';
[modelDir, modelName] = fileparts(modelFile);
addpath(modelDir);
load_system(modelFile);
cleanupObj = onCleanup(@() close_system(modelName, 0)); %#ok<NASGU>
roots = {[modelName '/SigOut/ICU1' newline], [modelName '/SigOut/ICU2']};
for r = 1:numel(roots)
    packs = find_system(roots{r}, 'SearchDepth', 1, 'MaskType', 'CAN Pack');
    for k = 1:numel(packs)
        b = packs{k};
        fprintf('\n=== %s ===\n', strrep(getfullname(b), newline, '\\n'));
        fprintf('MaskDisplay:\n%s\n', get_param(b, 'MaskDisplay'));
        try
            ws = get_param(b, 'MaskWSVariables');
            for w = 1:numel(ws)
                if strcmp(ws(w).Name, 'port')
                    pv = ws(w).Value;
                    for q = 1:numel(pv)
                        fprintf('MASKPORT %d id=%d label=%s\n', q, pv(q).id, pv(q).label);
                    end
                end
            end
        catch err
            fprintf('MASKWS_ERROR: %s\n', err.message);
        end
        pc = get_param(b, 'PortConnectivity');
        for p = 1:numel(pc)
            portType = pc(p).Type;
            if isnumeric(portType)
                portType = num2str(portType);
            end
            fprintf('PORT %d Type=%s Position=%s\n', p, portType, mat2str(pc(p).Position));
        end
    end
end
end
