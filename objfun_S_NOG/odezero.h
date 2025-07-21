/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * odezero.h
 *
 * Code generation for function 'odezero'
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
void b_odezero(const emlrtStack *sp, real_T v, real_T t, const real_T y_data[],
               int32_T y_size, real_T tnew, const real_T ynew_data[],
               int32_T ynew_size, real_T t0, real_T h, const real_T f_data[],
               const int32_T f_size[2], int32_T *nout, emxArray_real_T *tout,
               emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
               boolean_T *stop);

void c_odezero(const emlrtStack *sp, real_T v, real_T t, const real_T y_data[],
               int32_T y_size, real_T tnew, const real_T ynew_data[],
               int32_T ynew_size, real_T t0, real_T h, const real_T f_data[],
               const int32_T f_size[2], int32_T *nout, emxArray_real_T *tout,
               emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
               boolean_T *stop);

void odezero(const emlrtStack *sp, real_T v, real_T t, const real_T y_data[],
             int32_T y_size, real_T tnew, const real_T ynew_data[],
             int32_T ynew_size, real_T t0, real_T h, const real_T f_data[],
             const int32_T f_size[2], int32_T *nout, emxArray_real_T *tout,
             emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
             boolean_T *stop);

/* End of code generation (odezero.h) */
