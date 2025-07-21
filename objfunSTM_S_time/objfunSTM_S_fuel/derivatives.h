/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * derivatives.h
 *
 * Code generation for function 'derivatives'
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
void derivatives(const emlrtStack *sp, const emxArray_real_T *inp1,
                 real_T inp2_Tmax, real_T inp2_c, real_T inp2_NSTATE,
                 real_T inp2_shoot, real_T inp2_EPS, real_T inp3,
                 emxArray_real_T *xxd);

/* End of code generation (derivatives.h) */
