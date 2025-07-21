/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Switching_Function.h
 *
 * Code generation for function 'Switching_Function'
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
real_T Switching_Function(const emlrtStack *sp, const real_T x[5],
                          const real_T p[5], real_T physical_Tmax,
                          real_T physical_c);

void b_Switching_Function(const emlrtStack *sp, const real_T x_data[],
                          int32_T x_size, const real_T p_data[], int32_T p_size,
                          real_T physical_Tmax, real_T physical_c,
                          real_T physical_NSTATE, real_T physical_shoot,
                          real_T physical_EPS, real_T *S, real_T *Sd);

/* End of code generation (Switching_Function.h) */
