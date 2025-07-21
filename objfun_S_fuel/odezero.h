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
#include "objfun_S_fuel_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void odezero(const emlrtStack *sp, real_T v, real_T t, const real_T y[11],
             real_T tnew, const real_T ynew[11], real_T t0, real_T h,
             const real_T f[154], int32_T *nout, emxArray_real_T *tout,
             emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
             boolean_T *stop);

/* End of code generation (odezero.h) */
