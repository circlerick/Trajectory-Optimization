/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_NOG_mexutil.h
 *
 * Code generation for function 'objfun_S_NOG_mexutil'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
const mxArray *b_emlrt_marshallOut(const real_T u);

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                         const mxArray *m2, emlrtMCInfo *location);

void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

/* End of code generation (objfun_S_NOG_mexutil.h) */
