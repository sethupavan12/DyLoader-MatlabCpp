//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: _coder_compileDLL_api.h
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 14-Feb-2022 13:48:03
//

#ifndef _CODER_COMPILEDLL_API_H
#define _CODER_COMPILEDLL_API_H

// Include Files
#include "compileDLL_spec.h"
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void compileDLL();

void compileDLL_api();

void compileDLL_atexit();

void compileDLL_initialize();

void compileDLL_terminate();

void compileDLL_xil_shutdown();

void compileDLL_xil_terminate();

#endif
//
// File trailer for _coder_compileDLL_api.h
//
// [EOF]
//
