/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * explicitRungeKutta.h
 *
 * Code generation for function 'explicitRungeKutta'
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
void computeCEStages89(const emlrtStack *sp,
                       real_T c_df_workspace_ODEFunction_work,
                       real_T d_df_workspace_ODEFunction_work,
                       real_T e_df_workspace_ODEFunction_work,
                       real_T f_df_workspace_ODEFunction_work,
                       real_T g_df_workspace_ODEFunction_work,
                       real_T h_df_workspace_ODEFunction_work,
                       const real_T y[111], real_T h, real_T f[1554],
                       int32_T *nfevals);

void computeMainStages89(const emlrtStack *sp,
                         real_T c_df_workspace_ODEFunction_work,
                         real_T d_df_workspace_ODEFunction_work,
                         real_T e_df_workspace_ODEFunction_work,
                         real_T f_df_workspace_ODEFunction_work,
                         real_T g_df_workspace_ODEFunction_work,
                         real_T h_df_workspace_ODEFunction_work,
                         const real_T y[111], real_T h, real_T f[1554],
                         int32_T *nfevals, real_T fC[111], real_T fE[111]);

real_T maxScaledError(const real_T fE[111], const real_T y[111],
                      const real_T ynew[111]);

/* End of code generation (explicitRungeKutta.h) */
