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
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo r_emlrtRTEI =
    {
        133,                   /* lineNo */
        23,                    /* colNo */
        "dynamic_size_checks", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

static emlrtRTEInfo oh_emlrtRTEI =
    {
        76,                  /* lineNo */
        13,                  /* colNo */
        "eml_mtimes_helper", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

/* Function Definitions */
void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           int32_T innerDimA)
{
  if (innerDimA != 5) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &r_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

real_T bb_binary_expand_op(const real_T in1[5], const real_T in2_data[],
                           const int32_T *in2_size, const real_T in3[5])
{
  real_T out1;
  int32_T i;
  int32_T stride_0_0;
  stride_0_0 = (*in2_size != 1);
  out1 = 0.0;
  for (i = 0; i < 5; i++) {
    out1 += in1[i] * (in2_data[i * stride_0_0] + in3[i]);
  }
  return out1;
}

void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *b,
                           int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((b->size[0] == 1) && (b->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &r_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void d_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &r_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                         const emxArray_real_T *b, int32_T innerDimA,
                         int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) ||
        ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &r_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, real_T in2,
                        const emxArray_real_T *in3, int32_T in4, int32_T in5,
                        int32_T in6, int32_T in7)
{
  emxArray_real_T *b_in2;
  const real_T *in3_data;
  real_T *in1_data;
  real_T *in2_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in3_data = in3->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 1, &oh_emlrtRTEI);
  i = b_in2->size[0];
  if (in7 - in6 == 1) {
    b_in2->size[0] = in5 - in4;
  } else {
    b_in2->size[0] = in7 - in6;
  }
  emxEnsureCapacity_real_T(sp, b_in2, i, &oh_emlrtRTEI);
  in2_data = b_in2->data;
  stride_0_0 = (in5 - in4 != 1);
  stride_1_0 = (in7 - in6 != 1);
  if (in7 - in6 == 1) {
    loop_ub = in5 - in4;
  } else {
    loop_ub = in7 - in6;
  }
  for (i = 0; i < loop_ub; i++) {
    in2_data[i] = -in2 * (in3_data[in4 + i * stride_0_0] -
                          in1_data[in6 + i * stride_1_0]);
  }
  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &oh_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2_data[i];
  }
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, real_T in2,
                        const emxArray_real_T *in3, int32_T in4,
                        const emxArray_real_T *in5, int32_T in6)
{
  const real_T *in3_data;
  const real_T *in5_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in5_data = in5->data;
  in3_data = in3->data;
  i = in1->size[0];
  if (in6 == 1) {
    in1->size[0] = in4;
  } else {
    in1->size[0] = in6;
  }
  emxEnsureCapacity_real_T(sp, in1, i, &db_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in4 != 1);
  stride_1_0 = (in6 != 1);
  if (in6 == 1) {
    loop_ub = in4;
  } else {
    loop_ub = in6;
  }
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2 * (in3_data[i * stride_0_0] - in5_data[i * stride_1_0]);
  }
}

/* End of code generation (eml_mtimes_helper.c) */
