/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HamiltonianSecondDerivatives.h
 *
 * Code generation for function 'HamiltonianSecondDerivatives'
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
void HamiltonianSecondDerivatives(const emlrtStack *sp, const real_T x_data[],
                                  int32_T x_size, const real_T p_data[],
                                  int32_T p_size, real_T S,
                                  real_T physical_Tmax, real_T physical_c,
                                  real_T physical_shoot, real_T physical_EPS,
                                  real_T H_xx[25], real_T H_xp[25],
                                  real_T H_pp[25]);

/* End of code generation (HamiltonianSecondDerivatives.h) */
