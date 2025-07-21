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
#include "objfun_S_NOG_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_computeCEStages89(const emlrtStack *sp,
                         real_T c_df_workspace_ODEFunction_work,
                         real_T d_df_workspace_ODEFunction_work,
                         real_T e_df_workspace_ODEFunction_work,
                         real_T f_df_workspace_ODEFunction_work,
                         real_T g_df_workspace_ODEFunction_work,
                         real_T h_df_workspace_ODEFunction_work,
                         const real_T y_data[], int32_T y_size, real_T h,
                         real_T f_data[], const int32_T f_size[2],
                         int32_T *nfevals);

void b_computeMainStages89(const emlrtStack *sp,
                           real_T c_df_workspace_ODEFunction_work,
                           real_T d_df_workspace_ODEFunction_work,
                           real_T e_df_workspace_ODEFunction_work,
                           real_T f_df_workspace_ODEFunction_work,
                           real_T g_df_workspace_ODEFunction_work,
                           real_T h_df_workspace_ODEFunction_work,
                           const real_T y_data[], int32_T y_size, real_T h,
                           real_T f_data[], const int32_T f_size[2],
                           int32_T *nfevals, real_T fC_data[], int32_T *fC_size,
                           emxArray_real_T *fE);

void b_explicitRungeKutta_anonFcn1(const emlrtStack *sp,
                                   real_T c_ODEFunction_workspace_physica,
                                   real_T d_ODEFunction_workspace_physica,
                                   real_T e_ODEFunction_workspace_physica,
                                   real_T f_ODEFunction_workspace_physica,
                                   real_T g_ODEFunction_workspace_physica,
                                   real_T ODEFunction_workspace_SIGN_nom,
                                   const emxArray_real_T *y,
                                   emxArray_real_T *varargout_1);

real_T b_maxScaledError(const emlrtStack *sp, const emxArray_real_T *fE,
                        const real_T y_data[]);

void c_computeCEStages89(const emlrtStack *sp,
                         real_T c_df_workspace_ODEFunction_work,
                         real_T d_df_workspace_ODEFunction_work,
                         real_T e_df_workspace_ODEFunction_work,
                         real_T f_df_workspace_ODEFunction_work,
                         real_T g_df_workspace_ODEFunction_work,
                         real_T h_df_workspace_ODEFunction_work,
                         const real_T y_data[], int32_T y_size, real_T h,
                         real_T f_data[], const int32_T f_size[2],
                         int32_T *nfevals);

void c_computeMainStages89(const emlrtStack *sp,
                           real_T c_df_workspace_ODEFunction_work,
                           real_T d_df_workspace_ODEFunction_work,
                           real_T e_df_workspace_ODEFunction_work,
                           real_T f_df_workspace_ODEFunction_work,
                           real_T g_df_workspace_ODEFunction_work,
                           real_T h_df_workspace_ODEFunction_work,
                           const real_T y_data[], int32_T y_size, real_T h,
                           real_T f_data[], const int32_T f_size[2],
                           int32_T *nfevals, real_T fC_data[], int32_T *fC_size,
                           emxArray_real_T *fE);

void c_explicitRungeKutta_anonFcn1(const emlrtStack *sp,
                                   real_T c_ODEFunction_workspace_physica,
                                   real_T d_ODEFunction_workspace_physica,
                                   real_T e_ODEFunction_workspace_physica,
                                   real_T f_ODEFunction_workspace_physica,
                                   real_T g_ODEFunction_workspace_physica,
                                   real_T ODEFunction_workspace_SIGN,
                                   const emxArray_real_T *y,
                                   emxArray_real_T *varargout_1);

void computeCEStages89(const emlrtStack *sp,
                       real_T c_df_workspace_ODEFunction_work,
                       real_T d_df_workspace_ODEFunction_work,
                       real_T e_df_workspace_ODEFunction_work,
                       real_T f_df_workspace_ODEFunction_work,
                       real_T g_df_workspace_ODEFunction_work,
                       real_T h_df_workspace_ODEFunction_work,
                       const real_T i_df_workspace_ODEFunction_work[20],
                       const real_T y_data[], int32_T y_size, real_T h,
                       real_T f_data[], const int32_T f_size[2],
                       int32_T *nfevals);

void computeMainStages89(const emlrtStack *sp,
                         real_T c_df_workspace_ODEFunction_work,
                         real_T d_df_workspace_ODEFunction_work,
                         real_T e_df_workspace_ODEFunction_work,
                         real_T f_df_workspace_ODEFunction_work,
                         real_T g_df_workspace_ODEFunction_work,
                         real_T h_df_workspace_ODEFunction_work,
                         const real_T i_df_workspace_ODEFunction_work[20],
                         const real_T y_data[], int32_T y_size, real_T h,
                         real_T f_data[], const int32_T f_size[2],
                         int32_T *nfevals, real_T fC_data[], int32_T *fC_size,
                         emxArray_real_T *fE);

void db_binary_expand_op(real_T in1_data[], int32_T *in1_size,
                         const real_T in2_data[], const int32_T *in2_size,
                         real_T in3);

void explicitRungeKutta_anonFcn1(const emlrtStack *sp,
                                 real_T c_ODEFunction_workspace_physica,
                                 real_T d_ODEFunction_workspace_physica,
                                 real_T e_ODEFunction_workspace_physica,
                                 real_T f_ODEFunction_workspace_physica,
                                 real_T g_ODEFunction_workspace_physica,
                                 real_T ODEFunction_workspace_SIGN_nom,
                                 const real_T ODEFunction_workspace_Pigreco[20],
                                 const emxArray_real_T *y,
                                 emxArray_real_T *varargout_1);

boolean_T ismonotonic(const real_T x[2]);

real_T maxScaledError(const emlrtStack *sp, const emxArray_real_T *fE,
                      const real_T y_data[], const real_T ynew_data[]);

void o_binary_expand_op(real_T in1_data[], int32_T *in1_size,
                        const real_T in2_data[], const int32_T *in2_size,
                        real_T in3);

real_T p_binary_expand_op(const emlrtStack *sp, const emxArray_real_T *in1,
                          const real_T in2_data[], const int32_T *in2_size);

/* End of code generation (explicitRungeKutta.h) */
