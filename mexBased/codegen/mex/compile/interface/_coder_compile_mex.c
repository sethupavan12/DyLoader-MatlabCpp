/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, educational organizations only. Not for
 * government, commercial, or other organizational use.
 *
 * _coder_compile_mex.c
 *
 * Code generation for function '_coder_compile_mex'
 *
 */

/* Include files */
#include "_coder_compile_mex.h"
#include "_coder_compile_api.h"
#include "compile_data.h"
#include "compile_initialize.h"
#include "compile_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void compile_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                         const mxArray *prhs[1])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        7, "compile");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 7,
                        "compile");
  }
  /* Call the function. */
  compile_api(prhs[0], &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&compile_atexit);
  /* Module initialization. */
  compile_initialize();
  /* Dispatch the entry-point. */
  compile_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  compile_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_compile_mex.c) */
