/*
 * MATLAB Compiler: 8.2 (R2021a)
 * Date: Fri Feb 25 10:34:10 2022
 * Arguments:
 * "-B""macro_default""-W""lib:compileLibCompiler,version=1.0""-T""link:lib""-d"
 * "C:\Users\oba7931403\Documents\toy\CoderCompilesDLL\mexBased\LibCompiler\comp
 * ileLibCompiler\for_testing""-v""C:\Users\oba7931403\Documents\toy\CoderCompil
 * esDLL\mexBased\compile.m"
 */

#ifndef compileLibCompiler_h
#define compileLibCompiler_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#ifdef __cplusplus
extern "C" { // sbcheck:ok:extern_c
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_compileLibCompiler_C_API 
#define LIB_compileLibCompiler_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_compileLibCompiler_C_API 
bool MW_CALL_CONV compileLibCompilerInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_compileLibCompiler_C_API 
bool MW_CALL_CONV compileLibCompilerInitialize(void);

extern LIB_compileLibCompiler_C_API 
void MW_CALL_CONV compileLibCompilerTerminate(void);

extern LIB_compileLibCompiler_C_API 
void MW_CALL_CONV compileLibCompilerPrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_compileLibCompiler_C_API 
bool MW_CALL_CONV mlxCompile(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

/* C INTERFACE -- MLF WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_compileLibCompiler_C_API bool MW_CALL_CONV mlfCompile(int nargout, mxArray** output, mxArray* a);

#ifdef __cplusplus
}
#endif
/* C INTERFACE -- MLF WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#endif
