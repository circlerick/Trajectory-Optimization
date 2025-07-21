/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ntrp89.h
 *
 * Code generation for function 'ntrp89'
 *
 */

#pragma once

/* Include files */
#include "objfunSTM_S_time_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_ntrp89(const emlrtStack *sp, const real_T tinterp[7], real_T t,
              const emxArray_real_T *y, real_T h, const emxArray_real_T *f,
              emxArray_real_T *yinterp);

void h_binary_expand_op(emxArray_real_T *in1, const emxArray_real_T *in2,
                        real_T in3, const emxArray_real_T *in4);

void ntrp89(const emlrtStack *sp, const real_T tinterp[13], real_T t,
            const emxArray_real_T *y, real_T h, const emxArray_real_T *f,
            emxArray_real_T *yinterp, emxArray_real_T *ypinterp);

/* End of code generation (ntrp89.h) */
