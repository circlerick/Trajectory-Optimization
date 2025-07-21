/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * S_pp_fun.h
 *
 * Code generation for function 'S_pp_fun'
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
void S_pp_fun(const emlrtStack *sp, const real_T in1_data[], int32_T in1_size,
              const real_T in2_data[], int32_T in2_size, real_T Tsym,
              real_T d2S_dpdp[25]);

/* End of code generation (S_pp_fun.h) */
