/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ode89.h
 *
 * Code generation for function 'ode89'
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
void ode89(const emlrtStack *sp, real_T ode_workspace_physical_Tmax,
           real_T ode_workspace_physical_c,
           real_T ode_workspace_physical_NSTATE,
           real_T ode_workspace_physical_shoot,
           real_T ode_workspace_physical_EPS, real_T ode_workspace_SIGN,
           const real_T tspan[2], const real_T b_y0[111],
           emxArray_real_T *varargout_1, emxArray_real_T *varargout_2);

/* End of code generation (ode89.h) */
