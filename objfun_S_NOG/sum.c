/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "sum.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Function Definitions */
real_T sum(const real_T x[5])
{
  return b_sumColumnB(x);
}

/* End of code generation (sum.c) */
