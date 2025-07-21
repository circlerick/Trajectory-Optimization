/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * S_xx_fun.h
 *
 * Code generation for function 'S_xx_fun'
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
void S_xx_fun(const emlrtStack *sp, const emxArray_real_T *in1,
              const emxArray_real_T *in2, real_T Tsym, real_T d2S_dxdx[25]);

/* End of code generation (S_xx_fun.h) */
