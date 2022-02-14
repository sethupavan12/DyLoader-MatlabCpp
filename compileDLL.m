% function is a must-have function for code generation.

% % coder file to compile a DLL for the MATLAB Coder.
% % This file is called by the MATLAB Coder.

function compileThis()
    coder.cinclude('dylib.hpp');
    coder.cinclude('dynamicLib.cpp');

    adder()

        

        








end

function adder()
    % create a variable to hold the result of the addition
    a = coder.opaque('double','4');
    b = coder.opaque('double','10');
    c = coder.opaque('double','0');

    % call the C++ function
    c = coder.ceval('adder',a,b);

    % display the result
    disp(c)






end
