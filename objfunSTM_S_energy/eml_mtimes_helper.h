/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.h
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

#pragma once

/* Include files */
#include "objfunSTM_S_energy_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T b_binary_expand_op(const struct1_T *in1, const emxArray_real_T *in2,
                          const struct0_T *in3);

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *b,
                         int32_T innerDimB);

/* End of code generation (eml_mtimes_helper.h) */
