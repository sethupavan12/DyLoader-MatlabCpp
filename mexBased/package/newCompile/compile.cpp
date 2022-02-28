//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, educational organizations only. Not for
// government, commercial, or other organizational use.
// File: compile.cpp
//
// MATLAB Coder version            : 5.2
// C/C++ source code generated on  : 25-Feb-2022 15:49:42
//

// Include Files
#include "compile.h"
#include "coder_array.h"

// Function Definitions
//
// compile - Description
//
//  Syntax: output = compile(input)
//
//  Long description
//
// Arguments    : double a
//                coder::array<double, 2U> &output
// Return Type  : void
//
void compile(double a, coder::array<double, 2U> &output)
{
  coder::array<signed char, 2U> sieve;
  int i;
  int loop_ub_tmp;
  //  Generate C++ code for the this function
  //  find nth prime number using the sieve of Eratosthenes and store in output
  loop_ub_tmp = static_cast<int>(a);
  sieve.set_size(1, loop_ub_tmp);
  for (i = 0; i < loop_ub_tmp; i++) {
    sieve[i] = 1;
  }
  sieve[0] = 0;
  sieve[1] = 0;
  //  store the primes in output
  output.set_size(1, 0);
  for (int b_i{0}; b_i < loop_ub_tmp; b_i++) {
    if (sieve[b_i] == 1) {
      i = output.size(1);
      output.set_size(output.size(0), output.size(1) + 1);
      output[i] = static_cast<double>(b_i) + 1.0;
    }
  }
}

//
// File trailer for compile.cpp
//
// [EOF]
//
