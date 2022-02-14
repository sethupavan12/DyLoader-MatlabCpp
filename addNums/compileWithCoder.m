% function is a must-have function for code generation.

% % coder file to compile a DLL for the MATLAB Coder.
% % This file is called by the MATLAB Coder.

function entryPoint()
    coder.cinclude('dylib.hpp');
    answer = coder.opaque('double','0');

    answer = adder()

    % print answer
    fprintf('The answer is ', answer);

end

function c = adder()
    % create a variable to hold the result of the addition
    coder.updateBuildInfo('addSourceFiles', 'ThisLib.cpp')
    a = coder.opaque('double','4');
    b = coder.opaque('double','10');
    c = coder.opaque('double','0');

    % call the C++ function
    c = coder.ceval('adder',a,b);
end
