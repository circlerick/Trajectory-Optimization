/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * reshapeSizeChecks.c
 *
 * Code generation for function 'reshapeSizeChecks'
 *
 */

/* Include files */
#include "reshapeSizeChecks.h"
#include "rt_nonfinite.h"

/* Function Definitions */
int32_T maxsize(const int32_T x_size[2])
{
  int32_T n;
  n = 1;
  if (x_size[1] > 1) {
    n = x_size[1];
  }
  return n;
}

/* End of code generation (reshapeSizeChecks.c) */
