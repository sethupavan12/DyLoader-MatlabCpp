//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: compile_spec.h
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 25-Feb-2022 15:49:42
//

#ifndef COMPILE_SPEC_H
#define COMPILE_SPEC_H

// Include Files
#ifdef COMPILE_XIL_BUILD
#if defined(_MSC_VER) || defined(__LCC__)
#define COMPILE_DLL_EXPORT __declspec(dllimport)
#else
#define COMPILE_DLL_EXPORT __attribute__((visibility("default")))
#endif
#elif defined(BUILDING_COMPILE)
#if defined(_MSC_VER) || defined(__LCC__)
#define COMPILE_DLL_EXPORT __declspec(dllexport)
#else
#define COMPILE_DLL_EXPORT __attribute__((visibility("default")))
#endif
#else
#define COMPILE_DLL_EXPORT
#endif

#endif
//
// File trailer for compile_spec.h
//
// [EOF]
//
