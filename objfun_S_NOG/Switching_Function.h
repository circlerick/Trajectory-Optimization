/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Switching_Function.h
 *
 * Code generation for function 'Switching_Function'
 *
 */

#pragma once

/* Include files */
#include "objfun_S_NOG_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T Switching_Function(const emlrtStack *sp, const real_T x[5],
                          const real_T p[5], real_T physical_Tmax,
                          real_T physical_c);

void b_Switching_Function(const emlrtStack *sp, const emxArray_real_T *x,
                          const emxArray_real_T *p, real_T physical_Tmax,
                          real_T physical_c, real_T physical_NSTATE,
                          real_T physical_shoot, real_T physical_EPS, real_T *S,
                          real_T *Sd);

real_T e_binary_expand_op(const emlrtStack *sp, const emlrtRSInfo in1,
                          const real_T in2_data[], int32_T in3, int32_T in4,
                          const emxArray_real_T *in5, int32_T in6, int32_T in7,
                          const emxArray_real_T *in8, const struct0_T *in9);

real_T t_binary_expand_op(const emlrtStack *sp, const emlrtRSInfo in1,
                          const real_T in2_data[], int32_T in3, int32_T in4,
                          int32_T in5, int32_T in6, const emxArray_real_T *in7,
                          real_T in8, real_T in9);

/* End of code generation (Switching_Function.h) */
