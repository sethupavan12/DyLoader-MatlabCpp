//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: compileDLL_spec.h
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 14-Feb-2022 13:48:03
//

#ifndef COMPILEDLL_SPEC_H
#define COMPILEDLL_SPEC_H

// Include Files
#ifdef COMPILEDLL_XIL_BUILD
#if defined(_MSC_VER) || defined(__LCC__)
#define COMPILEDLL_DLL_EXPORT __declspec(dllimport)
#else
#define COMPILEDLL_DLL_EXPORT __attribute__((visibility("default")))
#endif
#elif defined(BUILDING_COMPILEDLL)
#if defined(_MSC_VER) || defined(__LCC__)
#define COMPILEDLL_DLL_EXPORT __declspec(dllexport)
#else
#define COMPILEDLL_DLL_EXPORT __attribute__((visibility("default")))
#endif
#else
#define COMPILEDLL_DLL_EXPORT
#endif

#endif
//
// File trailer for compileDLL_spec.h
//
// [EOF]
//
