/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "objfun_S_fuel_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T b_binary_expand_op(const struct1_T *in1, const real_T in2_data[],
                          const int32_T *in2_size, const struct0_T *in3)
{
  real_T out1;
  int32_T i;
  int32_T stride_0_0;
  stride_0_0 = (*in2_size != 1);
  out1 = 0.0;
  for (i = 0; i < 5; i++) {
    out1 += in1->Sigma[i] * (in2_data[i * stride_0_0] + in3->g0_x[i]);
  }
  return out1;
}

/* End of code generation (eml_mtimes_helper.c) */
