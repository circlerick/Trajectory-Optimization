/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HamiltonianFirstDerivatives.h
 *
 * Code generation for function 'HamiltonianFirstDerivatives'
 *
 */

#pragma once

/* Include files */
#include "objfun_S_energy_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void HamiltonianFirstDerivatives(const emlrtStack *sp, const real_T x_data[],
                                 int32_T x_size, const real_T p_data[],
                                 int32_T p_size, real_T S, real_T physical_Tmax,
                                 real_T physical_c, real_T physical_NSTATE,
                                 real_T physical_shoot, real_T physical_EPS,
                                 emxArray_real_T *H_x, emxArray_real_T *H_p);

/* End of code generation (HamiltonianFirstDerivatives.h) */
