

function Uselib() 
    

    % include the dylib.hpp file
    coder.cinclude('dylib.hpp');


    % include the main.cpp file
    coder.cinclude('main.cpp');

    % We go
    % use a function from main.cpp
    coder.ceval(

end