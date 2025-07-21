/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "mtimes.h"
#include "objfunSTM_S_fuel_data.h"
#include "objfunSTM_S_fuel_emxutil.h"
#include "objfunSTM_S_fuel_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ve_emlrtRTEI = {
    66,                                                           /* lineNo */
    32,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

/* Function Definitions */
void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, const emxArray_real_T *in3,
                        const real_T in4[5], real_T in5, const real_T in6[5])
{
  emxArray_real_T *b_in2;
  real_T b_in4[10];
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *b_in2_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in3_data = in3->data;
  in2_data = in2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 1, &ve_emlrtRTEI);
  i = b_in2->size[0];
  if (in3->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in3->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in2, i, &ve_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] - in3_data[i * stride_1_0];
  }
  for (i = 0; i < 5; i++) {
    b_in4[i] = in4[i] / in5;
    b_in4[i + 5] = in6[i] / in5;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_in2->size[0];
  in1->size[1] = 10;
  emxEnsureCapacity_real_T(sp, in1, i, &ib_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in2->size[0];
  for (i = 0; i < 10; i++) {
    for (stride_0_0 = 0; stride_0_0 < loop_ub; stride_0_0++) {
      in1_data[stride_0_0 + in1->size[0] * i] =
          b_in2_data[stride_0_0] * b_in4[i];
    }
  }
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *b,
                           int32_T innerDimB)
{
  if (innerDimB != 5) {
    if ((b->size[0] == 1) && (b->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &o_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &p_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                      const emlrtRSInfo in2, const emxArray_real_T *in3,
                      const emxArray_real_T *in4, const emxArray_real_T *in5,
                      const real_T in6[2])
{
  emlrtStack st;
  emxArray_real_T b_in5;
  emxArray_real_T *b_in3;
  const real_T *in3_data;
  const real_T *in4_data;
  real_T *b_in3_data;
  int32_T b_in6[2];
  int32_T aux_0_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in4_data = in4->data;
  in3_data = in3->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in3, 2, &jb_emlrtRTEI);
  i = b_in3->size[0] * b_in3->size[1];
  if (in4->size[0] == 1) {
    b_in3->size[0] = in3->size[0];
  } else {
    b_in3->size[0] = in4->size[0];
  }
  b_in3->size[1] = 10;
  emxEnsureCapacity_real_T(sp, b_in3, i, &jb_emlrtRTEI);
  b_in3_data = b_in3->data;
  stride_0_0 = (in3->size[0] != 1);
  stride_0_1 = (in3->size[1] != 1);
  stride_1_0 = (in4->size[0] != 1);
  aux_0_1 = 0;
  if (in4->size[0] == 1) {
    loop_ub = in3->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  for (i = 0; i < 10; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in3_data[i1 + b_in3->size[0] * i] =
          in3_data[i1 * stride_0_0 + in3->size[0] * aux_0_1] +
          in4_data[i1 * stride_1_0 + in4->size[0] * i];
    }
    aux_0_1 += stride_0_1;
  }
  b_in5 = *in5;
  b_in6[0] = (int32_T)in6[0];
  b_in6[1] = (int32_T)in6[1];
  b_in5.size = &b_in6[0];
  b_in5.numDimensions = 2;
  st.site = (emlrtRSInfo *)&in2;
  b_mtimes(&st, b_in3, &b_in5, in1);
  emxFree_real_T(sp, &b_in3);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

real_T d_binary_expand_op(const struct1_T *in1, const emxArray_real_T *in2,
                          const struct0_T *in3)
{
  const real_T *in2_data;
  real_T out1;
  int32_T i;
  int32_T stride_0_0;
  in2_data = in2->data;
  stride_0_0 = (in2->size[0] != 1);
  out1 = 0.0;
  for (i = 0; i < 5; i++) {
    out1 += in1->Sigma[i] * (in2_data[i * stride_0_0] + in3->g0_x[i]);
  }
  return out1;
}

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *b,
                         int32_T innerDimB)
{
  if (innerDimB != 10) {
    if ((b->size[0] == 1) && (b->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &o_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &p_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

/* End of code generation (eml_mtimes_helper.c) */
