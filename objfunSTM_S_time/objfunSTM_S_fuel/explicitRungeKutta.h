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
#include "objfunSTM_S_fuel_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T b_maxScaledError(const emlrtStack *sp, const emxArray_real_T *fE,
                        const emxArray_real_T *y);

void computeCEStages89(const emlrtStack *sp,
                       real_T c_df_workspace_ODEFunction_work,
                       real_T d_df_workspace_ODEFunction_work,
                       real_T e_df_workspace_ODEFunction_work,
                       real_T f_df_workspace_ODEFunction_work,
                       real_T g_df_workspace_ODEFunction_work,
                       real_T h_df_workspace_ODEFunction_work,
                       const emxArray_real_T *y, real_T h, emxArray_real_T *f,
                       int32_T *nfevals);

void computeMainStages89(const emlrtStack *sp,
                         real_T c_df_workspace_ODEFunction_work,
                         real_T d_df_workspace_ODEFunction_work,
                         real_T e_df_workspace_ODEFunction_work,
                         real_T f_df_workspace_ODEFunction_work,
                         real_T g_df_workspace_ODEFunction_work,
                         real_T h_df_workspace_ODEFunction_work,
                         const emxArray_real_T *y, real_T h, emxArray_real_T *f,
                         int32_T *nfevals, emxArray_real_T *fC,
                         emxArray_real_T *fE);

void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, real_T in3);

void explicitRungeKutta_anonFcn1(const emlrtStack *sp,
                                 real_T c_ODEFunction_workspace_physica,
                                 real_T d_ODEFunction_workspace_physica,
                                 real_T e_ODEFunction_workspace_physica,
                                 real_T f_ODEFunction_workspace_physica,
                                 real_T g_ODEFunction_workspace_physica,
                                 real_T ODEFunction_workspace_SIGN,
                                 const emxArray_real_T *y,
                                 emxArray_real_T *varargout_1);

real_T f_binary_expand_op(const emlrtStack *sp, const emxArray_real_T *in1,
                          const emxArray_real_T *in2);

boolean_T ismonotonic(const real_T x[2]);

real_T maxScaledError(const emlrtStack *sp, const emxArray_real_T *fE,
                      const emxArray_real_T *y, const emxArray_real_T *ynew);

/* End of code generation (explicitRungeKutta.h) */
