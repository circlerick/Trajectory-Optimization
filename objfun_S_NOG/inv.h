/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * inv.h
 *
 * Code generation for function 'inv'
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
void b_inv(const emlrtStack *sp, const real_T x[16], real_T y[16]);

void inv(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y);

/* End of code generation (inv.h) */
