function [output1] = H_toe_joint_right(var1)
    if coder.target('MATLAB')
        [output1] = H_toe_joint_right_mex(var1);
    else
        coder.cinclude('H_toe_joint_right_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_toe_joint_right_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
