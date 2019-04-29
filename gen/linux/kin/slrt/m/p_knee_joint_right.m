function [output1] = p_knee_joint_right(var1)
    if coder.target('MATLAB')
        [output1] = p_knee_joint_right_mex(var1);
    else
        coder.cinclude('p_knee_joint_right_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_knee_joint_right_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end