function trace_icu_tags
modelFile = 'D:/VCU/VCU_SL_ZhengZhou/ZT2/Module/MainModel/ZT_VehCtrl_24B_2.slx';
[modelDir, modelName] = fileparts(modelFile);
addpath(modelDir);
load_system(modelFile);
cleanupObj = onCleanup(@() close_system(modelName, 0)); %#ok<NASGU>

dst = [modelName '/VehCtrl/Subsystem'];
ph = get_param(dst, 'PortHandles');
for k = 1:numel(ph.Inport)
    lh = get_param(ph.Inport(k), 'Line');
    src = get_param(lh, 'SrcBlockHandle');
    srcPath = getfullname(src);
    fprintf('INPORT %d <- %s', k, strrep(srcPath, newline, '\\n'));
    try
        tag = get_param(srcPath, 'GotoTag');
        fprintf(' TAG=%s', tag);
        gotos = find_system(modelName, 'FollowLinks', 'on', 'LookUnderMasks', 'all', ...
            'BlockType', 'Goto', 'GotoTag', tag);
        for g = 1:numel(gotos)
            gph = get_param(gotos{g}, 'PortHandles');
            glh = get_param(gph.Inport, 'Line');
            if glh ~= -1
                gsrc = get_param(glh, 'SrcBlockHandle');
                fprintf(' GOTO_SRC=%s', strrep(getfullname(gsrc), newline, '\\n'));
            end
        end
    catch
    end
    fprintf('\n');
end
end
