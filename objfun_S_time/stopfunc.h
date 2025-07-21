/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * stopfunc.h
 *
 * Code generation for function 'stopfunc'
 *
 */

#pragma once

/* Include files */
#include "objfun_S_time_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void e_binary_expand_op(real_T in1[2], const struct_T *in2,
                        const emxArray_real_T *in3, int32_T in4);

void f_binary_expand_op(real_T in1[2], const struct_T *in2,
                        const emxArray_real_T *in3, int32_T in4);

real_T stopfunc(const emlrtStack *sp, const emxArray_real_T *s);

/* End of code generation (stopfunc.h) */
