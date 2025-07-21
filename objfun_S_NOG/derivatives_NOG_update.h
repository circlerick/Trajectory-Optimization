/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * derivatives_NOG_update.h
 *
 * Code generation for function 'derivatives_NOG_update'
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
void c_plus(const emlrtStack *sp, emxArray_real_T *in1,
            const emxArray_real_T *in2);

void minus(const emlrtStack *sp, emxArray_real_T *in1,
           const emxArray_real_T *in2);

void q_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, int32_T in3, int32_T in4);

void r_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, int32_T in3, int32_T in4,
                        const real_T in5[2]);

void s_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, int32_T in3, int32_T in4);

/* End of code generation (derivatives_NOG_update.h) */
