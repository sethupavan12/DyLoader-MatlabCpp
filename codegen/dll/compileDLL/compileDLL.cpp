//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: compileDLL.cpp
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 14-Feb-2022 13:48:03
//

// Include Files
#include "compileDLL.h"
#include "dylib.hpp"
#include "dynamicLib.cpp"

// Function Definitions
//
// Arguments    : void
// Return Type  : void
//
void compileDLL()
{
  //  function is a must-have function for code generation.
  //  % coder file to compile a DLL for the MATLAB Coder.
  //  % This file is called by the MATLAB Coder.
  //  create a variable to hold the result of the addition
  //  call the C++ function
  adder(4, 10);
  //  display the result
}

//
// File trailer for compileDLL.cpp
//
// [EOF]
//
