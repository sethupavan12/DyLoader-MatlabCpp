//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: _coder_compile_api.h
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 17-Feb-2022 09:37:07
//

#ifndef _CODER_COMPILE_API_H
#define _CODER_COMPILE_API_H

// Include Files
#include "coder_array_mex.h"
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void compile(real_T a, coder::array<real_T, 2U> *output);

void compile_api(const mxArray *prhs, const mxArray **plhs);

void compile_atexit();

void compile_initialize();

void compile_terminate();

void compile_xil_shutdown();

void compile_xil_terminate();

#endif
//
// File trailer for _coder_compile_api.h
//
// [EOF]
//
