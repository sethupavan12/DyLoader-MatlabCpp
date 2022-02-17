//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: compileWithCoder_spec.h
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 15-Feb-2022 11:57:44
//

#ifndef COMPILEWITHCODER_SPEC_H
#define COMPILEWITHCODER_SPEC_H

// Include Files
#ifdef COMPILEWITHCODER_XIL_BUILD
#if defined(_MSC_VER) || defined(__LCC__)
#define COMPILEWITHCODER_DLL_EXPORT __declspec(dllimport)
#else
#define COMPILEWITHCODER_DLL_EXPORT __attribute__((visibility("default")))
#endif
#elif defined(BUILDING_COMPILEWITHCODER)
#if defined(_MSC_VER) || defined(__LCC__)
#define COMPILEWITHCODER_DLL_EXPORT __declspec(dllexport)
#else
#define COMPILEWITHCODER_DLL_EXPORT __attribute__((visibility("default")))
#endif
#else
#define COMPILEWITHCODER_DLL_EXPORT
#endif

#endif
//
// File trailer for compileWithCoder_spec.h
//
// [EOF]
//
