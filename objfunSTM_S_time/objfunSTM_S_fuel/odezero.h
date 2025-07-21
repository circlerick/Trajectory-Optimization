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
#include "objfunSTM_S_fuel_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void odezero(const emlrtStack *sp, real_T v, real_T t, const emxArray_real_T *y,
             real_T tnew, const emxArray_real_T *ynew, real_T t0, real_T h,
             const emxArray_real_T *f, int32_T *nout, emxArray_real_T *tout,
             emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
             boolean_T *stop);

/* End of code generation (odezero.h) */
