/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * derivatives_NOG_update.c
 *
 * Code generation for function 'derivatives_NOG_update'
 *
 */

/* Include files */
#include "derivatives_NOG_update.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ph_emlrtRTEI = {
    45,                       /* lineNo */
    8,                        /* colNo */
    "derivatives_NOG_update", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m" /* pName
                                                                         */
};

static emlrtRTEInfo qh_emlrtRTEI = {
    44,                       /* lineNo */
    8,                        /* colNo */
    "derivatives_NOG_update", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m" /* pName
                                                                         */
};

static emlrtRTEInfo rh_emlrtRTEI = {
    32,                       /* lineNo */
    9,                        /* colNo */
    "derivatives_NOG_update", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m" /* pName
                                                                         */
};

/* Function Definitions */
void c_plus(const emlrtStack *sp, emxArray_real_T *in1,
            const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &qh_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 5;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &qh_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_1 = (in1->size[1] != 1);
  stride_1_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in2->size[1] == 1) {
    loop_ub = in1->size[1];
  } else {
    loop_ub = in2->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 5; i1++) {
      b_in1_data[i1 + 5 * i] =
          in1_data[i1 + 5 * aux_0_1] + in2_data[i1 + 5 * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = 5;
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &qh_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 5; i1++) {
      stride_0_1 = i1 + 5 * i;
      in1_data[stride_0_1] = b_in1_data[stride_0_1];
    }
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void minus(const emlrtStack *sp, emxArray_real_T *in1,
           const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &ph_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 5;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &ph_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_1 = (in1->size[1] != 1);
  stride_1_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in2->size[1] == 1) {
    loop_ub = in1->size[1];
  } else {
    loop_ub = in2->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 5; i1++) {
      b_in1_data[i1 + 5 * i] =
          in1_data[i1 + 5 * aux_0_1] - in2_data[i1 + 5 * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = 5;
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &ph_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 5; i1++) {
      stride_0_1 = i1 + 5 * i;
      in1_data[stride_0_1] = b_in1_data[stride_0_1];
    }
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void q_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, int32_T in3, int32_T in4)
{
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  real_T *b_in2_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 1, &rh_emlrtRTEI);
  i = b_in2->size[0];
  if (in1->size[0] == 1) {
    b_in2->size[0] = in4 - in3;
  } else {
    b_in2->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in2, i, &rh_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_0 = (in4 - in3 != 1);
  stride_1_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    loop_ub = in4 - in3;
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[in3 + i * stride_0_0] + in1_data[i * stride_1_0];
  }
  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &rh_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in2_data[i];
  }
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void r_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, int32_T in3, int32_T in4,
                        const real_T in5[2])
{
  emxArray_real_T *b_in2;
  emxArray_real_T *c_in2;
  const real_T *in2_data;
  real_T *b_in2_data;
  real_T *c_in2_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T in5_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 1, &gd_emlrtRTEI);
  loop_ub = in4 - in3;
  i = b_in2->size[0];
  b_in2->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in2, i, &gd_emlrtRTEI);
  b_in2_data = b_in2->data;
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[in3 + i];
  }
  in5_idx_0 = (int32_T)in5[0];
  loop_ub = (int32_T)in5[1];
  emxInit_real_T(sp, &c_in2, 2, &jd_emlrtRTEI);
  i = c_in2->size[0] * c_in2->size[1];
  if (in1->size[0] == 1) {
    c_in2->size[0] = in5_idx_0;
  } else {
    c_in2->size[0] = in1->size[0];
  }
  if (in1->size[1] == 1) {
    c_in2->size[1] = loop_ub;
  } else {
    c_in2->size[1] = in1->size[1];
  }
  emxEnsureCapacity_real_T(sp, c_in2, i, &jd_emlrtRTEI);
  c_in2_data = c_in2->data;
  stride_0_0 = (in5_idx_0 != 1);
  stride_0_1 = (loop_ub != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_1_1 = (in1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1->size[1] != 1) {
    loop_ub = in1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    i1 = in1->size[0];
    if (i1 == 1) {
      b_loop_ub = in5_idx_0;
    } else {
      b_loop_ub = i1;
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      c_in2_data[i1 + c_in2->size[0] * i] =
          b_in2_data[i1 * stride_0_0 + in5_idx_0 * aux_0_1] +
          in1_data[i1 * stride_1_0 + in1->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  emxFree_real_T(sp, &b_in2);
  i = in1->size[0] * in1->size[1];
  in1->size[0] = c_in2->size[0];
  in1->size[1] = c_in2->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &jd_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = c_in2->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = c_in2->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = c_in2_data[i1 + c_in2->size[0] * i];
    }
  }
  emxFree_real_T(sp, &c_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void s_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, int32_T in3, int32_T in4)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 1, &id_emlrtRTEI);
  i = b_in1->size[0];
  if (in4 - in3 == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in4 - in3;
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &id_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in4 - in3 != 1);
  if (in4 - in3 == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in4 - in3;
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] + in2_data[in3 + i * stride_1_0];
  }
  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &id_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (derivatives_NOG_update.c) */
