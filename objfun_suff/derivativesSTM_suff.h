/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * derivativesSTM_suff.h
 *
 * Code generation for function 'derivativesSTM_suff'
 *
 */

#pragma once

/* Include files */
#include "objfun_suff_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void minus(const emlrtStack *sp, emxArray_real_T *in1,
           const emxArray_real_T *in2);

void plus(const emlrtStack *sp, emxArray_real_T *in1,
          const emxArray_real_T *in2);

/* End of code generation (derivativesSTM_suff.h) */
