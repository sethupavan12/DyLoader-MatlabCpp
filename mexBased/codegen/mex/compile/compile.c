/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, educational organizations only. Not for
 * government, commercial, or other organizational use.
 *
 * compile.c
 *
 * Code generation for function 'compile'
 *
 */

/* Include files */
#include "compile.h"
#include "compile_data.h"
#include "compile_emxutil.h"
#include "compile_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI =
    {
        17,        /* lineNo */
        9,         /* colNo */
        "compile", /* fName */
        "C:"
        "\\Users\\oba7931403\\Documents\\toy\\CoderCompilesDLL\\mexBased\\compi"
        "le.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    13,        /* lineNo */
    7,         /* colNo */
    "sieve",   /* aName */
    "compile", /* fName */
    "C:"
    "\\Users\\oba7931403\\Documents\\toy\\CoderCompilesDLL\\mexBased\\compile."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    14,        /* lineNo */
    7,         /* colNo */
    "sieve",   /* aName */
    "compile", /* fName */
    "C:"
    "\\Users\\oba7931403\\Documents\\toy\\CoderCompilesDLL\\mexBased\\compile."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    12,        /* lineNo */
    16,        /* colNo */
    "compile", /* fName */
    "C:"
    "\\Users\\oba7931403\\Documents\\toy\\CoderCompilesDLL\\mexBased\\compile."
    "m", /* pName */
    1    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    12,        /* lineNo */
    16,        /* colNo */
    "compile", /* fName */
    "C:"
    "\\Users\\oba7931403\\Documents\\toy\\CoderCompilesDLL\\mexBased\\compile."
    "m", /* pName */
    4    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    12,        /* lineNo */
    1,         /* colNo */
    "compile", /* fName */
    "C:"
    "\\Users\\oba7931403\\Documents\\toy\\CoderCompilesDLL\\mexBased\\compile."
    "m", /* pName */
    1    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    18,        /* lineNo */
    8,         /* colNo */
    "sieve",   /* aName */
    "compile", /* fName */
    "C:"
    "\\Users\\oba7931403\\Documents\\toy\\CoderCompilesDLL\\mexBased\\compile."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI =
    {
        12,        /* lineNo */
        1,         /* colNo */
        "compile", /* fName */
        "C:"
        "\\Users\\oba7931403\\Documents\\toy\\CoderCompilesDLL\\mexBased\\compi"
        "le.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI =
    {
        3,         /* lineNo */
        19,        /* colNo */
        "compile", /* fName */
        "C:"
        "\\Users\\oba7931403\\Documents\\toy\\CoderCompilesDLL\\mexBased\\compi"
        "le.m" /* pName */
};

/* Function Definitions */
void compile(const emlrtStack *sp, real_T a, emxArray_real_T *output)
{
  emxArray_int8_T *sieve;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int8_T(sp, &sieve, 2, &b_emlrtRTEI, true);
  /*  Generate C++ code for the this function */
  /* compile - Description */
  /*  */
  /*  Syntax: output = compile(input) */
  /*  */
  /*  Long description */
  /*  find nth prime number using the sieve of Eratosthenes and store in output
   */
  i = sieve->size[0] * sieve->size[1];
  sieve->size[0] = 1;
  emxEnsureCapacity_int8_T(sp, sieve, i, &b_emlrtRTEI);
  if (!(a >= 0.0)) {
    emlrtNonNegativeCheckR2012b(a, &b_emlrtDCI, (emlrtCTX)sp);
  }
  d = (int32_T)muDoubleScalarFloor(a);
  if (a != d) {
    emlrtIntegerCheckR2012b(a, &emlrtDCI, (emlrtCTX)sp);
  }
  i = sieve->size[0] * sieve->size[1];
  loop_ub = (int32_T)a;
  sieve->size[1] = (int32_T)a;
  emxEnsureCapacity_int8_T(sp, sieve, i, &b_emlrtRTEI);
  if (a != d) {
    emlrtIntegerCheckR2012b(a, &c_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < loop_ub; i++) {
    sieve->data[i] = 1;
  }
  if (1 > (int32_T)a) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)a, &emlrtBCI, (emlrtCTX)sp);
  }
  sieve->data[0] = 0;
  if (2 > (int32_T)a) {
    emlrtDynamicBoundsCheckR2012b(2, 1, (int32_T)a, &b_emlrtBCI, (emlrtCTX)sp);
  }
  sieve->data[1] = 0;
  /*  store the primes in output */
  output->size[0] = 1;
  output->size[1] = 0;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, a, mxDOUBLE_CLASS, (int32_T)a,
                                &emlrtRTEI, (emlrtCTX)sp);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > (int32_T)a)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, (int32_T)a,
                                    &c_emlrtBCI, (emlrtCTX)sp);
    }
    if (sieve->data[b_i] == 1) {
      i = output->size[1];
      i1 = output->size[0] * output->size[1];
      output->size[1]++;
      emxEnsureCapacity_real_T(sp, output, i1, &c_emlrtRTEI);
      output->data[i] = (real_T)b_i + 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_int8_T(&sieve);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (compile.c) */
