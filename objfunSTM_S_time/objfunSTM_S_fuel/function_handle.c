/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * function_handle.c
 *
 * Code generation for function 'function_handle'
 *
 */

/* Include files */
#include "function_handle.h"
#include "objfunSTM_S_fuel.h"
#include "objfunSTM_S_fuel_data.h"
#include "objfunSTM_S_fuel_emxutil.h"
#include "objfunSTM_S_fuel_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void ab_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  const real_T *in11_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in11_data = in11->data;
  in9_data = in9->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &ud_emlrtRTEI);
  i = b_in9->size[0];
  if (in11->size[0] == 1) {
    b_in9->size[0] = in9->size[0];
  } else {
    b_in9->size[0] = in11->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &ud_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in11->size[0] != 1);
  if (in11->size[0] == 1) {
    loop_ub = in9->size[0];
  } else {
    loop_ub = in11->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] + in10 * in11_data[i * stride_1_0];
  }
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
  emxFree_real_T(sp, &b_in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void bb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &te_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    b_in9->size[0] = in9->size[0];
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &te_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    loop_ub = in9->size[0];
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((((((0.016151472919007624 * in1_data[in9_tmp] +
                        0.080986850032429059 *
                            in1_data[in9_tmp + in1->size[0]]) +
                       0.12769162943069304 *
                           in1_data[in9_tmp + in1->size[0] * 2]) +
                      0.12348143593834805 *
                          in1_data[in9_tmp + in1->size[0] * 3]) +
                     0.233985125914011 * in1_data[in9_tmp + in1->size[0] * 4]) +
                    -0.065959956833573682 *
                        in1_data[in9_tmp + in1->size[0] * 5]) +
                   -0.025652768594064328 *
                       in1_data[in9_tmp + in1->size[0] * 6]) +
                  -0.12589734638192471 * in1_data[in9_tmp + in1->size[0] * 7]) +
                 -0.043076724903648438 * in1_data[in9_tmp + in1->size[0] * 8]) +
                0.04973042479196705 * in1_data[in9_tmp + in1->size[0] * 9]) +
               0.10004735401793927 * in1_data[in9_tmp + in1->size[0] * 10]) +
              0.13786588067636232 * in1_data[in9_tmp + in1->size[0] * 11]) +
             -0.12235337700754625 * in1_data[in9_tmp + in1->size[0] * 12]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 13] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void cb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &se_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    b_in9->size[0] = in9->size[0];
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &se_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    loop_ub = in9->size[0];
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            (((((((((((0.013989212133617684 * in1_data[in9_tmp] +
                       -0.031574065179505 * in1_data[in9_tmp + in1->size[0]]) +
                      0.22718125132721581 *
                          in1_data[in9_tmp + in1->size[0] * 2]) +
                     0.12894864109967866 *
                         in1_data[in9_tmp + in1->size[0] * 3]) +
                    0.2216682589135277 * in1_data[in9_tmp + in1->size[0] * 4]) +
                   0.19483682365424806 * in1_data[in9_tmp + in1->size[0] * 5]) +
                  0.05740088404417653 * in1_data[in9_tmp + in1->size[0] * 6]) +
                 0.090083665426759552 * in1_data[in9_tmp + in1->size[0] * 7]) +
                0.015791532088442122 * in1_data[in9_tmp + in1->size[0] * 8]) +
               -0.018991315059091858 * in1_data[in9_tmp + in1->size[0] * 9]) +
              -0.08830926811918835 * in1_data[in9_tmp + in1->size[0] * 10]) +
             -0.11502562032988092 * in1_data[in9_tmp + in1->size[0] * 11]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 12] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void db_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &re_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    b_in9->size[0] = in9->size[0];
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &re_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    loop_ub = in9->size[0];
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((((0.013111957218440684 * in1_data[in9_tmp] +
                      -0.14640242659698269 * in1_data[in9_tmp + in1->size[0]]) +
                     0.2471264389666796 *
                         in1_data[in9_tmp + in1->size[0] * 2]) +
                    0.13113752030800324 *
                        in1_data[in9_tmp + in1->size[0] * 3]) +
                   0.21705603469825827 * in1_data[in9_tmp + in1->size[0] * 4]) +
                  0.286753671376032 * in1_data[in9_tmp + in1->size[0] * 5]) +
                 0.023233113391494219 * in1_data[in9_tmp + in1->size[0] * 6]) +
                0.052506772641993958 * in1_data[in9_tmp + in1->size[0] * 7]) +
               0.0028339515860099506 * in1_data[in9_tmp + in1->size[0] * 8]) +
              -0.0085024038519957122 * in1_data[in9_tmp + in1->size[0] * 9]) +
             0.069145370262066491 * in1_data[in9_tmp + in1->size[0] * 10]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 11] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void eb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &qe_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    b_in9->size[0] = in9->size[0];
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &qe_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    loop_ub = in9->size[0];
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            (((((((((0.015601405261088616 * in1_data[in9_tmp] +
                     0.26811643933275847 * in1_data[in9_tmp + in1->size[0]]) +
                    0.1883053124587791 * in1_data[in9_tmp + in1->size[0] * 2]) +
                   0.12491991374610308 * in1_data[in9_tmp + in1->size[0] * 3]) +
                  0.2302302127814522 * in1_data[in9_tmp + in1->size[0] * 4]) +
                 -0.13603122161327985 * in1_data[in9_tmp + in1->size[0] * 5]) +
                0.074886599713069532 * in1_data[in9_tmp + in1->size[0] * 6]) +
               -0.028128400297956289 * in1_data[in9_tmp + in1->size[0] * 7]) +
              -0.023144557264819496 * in1_data[in9_tmp + in1->size[0] * 8]) +
             0.027345304241113474 * in1_data[in9_tmp + in1->size[0] * 9]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 10] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void fb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &pe_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    b_in9->size[0] = in9->size[0];
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &pe_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    loop_ub = in9->size[0];
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((0.014588852784055396 * in1_data[in9_tmp] +
                    0.0020241978878893325 * in1_data[in9_tmp + in1->size[0]]) +
                   0.21780470845697167 * in1_data[in9_tmp + in1->size[0] * 2]) +
                  0.12748953408543898 * in1_data[in9_tmp + in1->size[0] * 3]) +
                 0.22446177454631319 * in1_data[in9_tmp + in1->size[0] * 4]) +
                0.17872544912599031 * in1_data[in9_tmp + in1->size[0] * 5]) +
               0.075943447580965578 * in1_data[in9_tmp + in1->size[0] * 6]) +
              0.12948458791975614 * in1_data[in9_tmp + in1->size[0] * 7]) +
             0.029477447612619417 * in1_data[in9_tmp + in1->size[0] * 8]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 9] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in13_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  int32_T stride_5_0;
  int32_T stride_6_0;
  int32_T stride_7_0;
  int32_T stride_8_0;
  int32_T stride_9_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &ke_emlrtRTEI);
  i = b_in9->size[0];
  if (in11->size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11->size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in11->size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        b_in9->size[0] = in11->size[0];
      } else {
        b_in9->size[0] = in12->size[0];
      }
    } else {
      b_in9->size[0] = in13->size[0];
    }
  } else {
    b_in9->size[0] = in11->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &ke_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in11->size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11->size[0] != 1);
  stride_5_0 = (in11->size[0] != 1);
  stride_6_0 = (in11->size[0] != 1);
  stride_7_0 = (in11->size[0] != 1);
  stride_8_0 = (in11->size[0] != 1);
  stride_9_0 = (in11->size[0] != 1);
  if (in11->size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11->size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in11->size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11->size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * ((((((((2.1573890074940536 * in11_data[i * stride_1_0] +
                       23.807122198095804 * in12_data[i * stride_2_0]) +
                      0.88627792492165558 * in13_data[i * stride_3_0]) +
                     13.139130397598764 *
                         in11_data[i * stride_4_0 + in11->size[0]]) +
                    -2.6044157092877147 *
                        in11_data[i * stride_5_0 + in11->size[0] * 2]) +
                   -5.1938599497838727 *
                       in11_data[i * stride_6_0 + in11->size[0] * 3]) +
                  -20.412340711541507 *
                      in11_data[i * stride_7_0 + in11->size[0] * 4]) +
                 -12.300856252505723 *
                     in11_data[i * stride_8_0 + in11->size[0] * 5]) +
                1.5215530950085394 *
                    in11_data[i * stride_9_0 + in11->size[0] * 6]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
  emxFree_real_T(sp, &b_in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_10_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  int32_T stride_5_0;
  int32_T stride_6_0;
  int32_T stride_7_0;
  int32_T stride_8_0;
  int32_T stride_9_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &ie_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        stride_0_0 = in1->size[0];
      } else {
        stride_0_0 = in11->size[0];
      }
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        b_in9->size[0] = in1->size[0];
      } else {
        b_in9->size[0] = in11->size[0];
      }
    } else {
      b_in9->size[0] = in12->size[0];
    }
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &ie_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_2_0 = (in11->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  stride_4_0 = (in1->size[0] != 1);
  stride_5_0 = (in1->size[0] != 1);
  stride_6_0 = (in1->size[0] != 1);
  stride_7_0 = (in1->size[0] != 1);
  stride_8_0 = (in1->size[0] != 1);
  stride_9_0 = (in1->size[0] != 1);
  stride_10_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        i = in1->size[0];
      } else {
        i = in11->size[0];
      }
    } else {
      i = in12->size[0];
    }
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        loop_ub = in1->size[0];
      } else {
        loop_ub = in11->size[0];
      }
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            (((((((((-1.2116979103438739 * in1_data[i * stride_1_0] +
                     -19.055818715595954 * in11_data[i * stride_2_0]) +
                    1.2630606753898752 * in12_data[i * stride_3_0]) +
                   -6.9139169691784579 *
                       in1_data[i * stride_4_0 + in1->size[0]]) +
                  -0.676462266509498 *
                      in1_data[i * stride_5_0 + in1->size[0] * 2]) +
                 3.3678604450266079 *
                     in1_data[i * stride_6_0 + in1->size[0] * 3]) +
                18.006751643125909 *
                    in1_data[i * stride_7_0 + in1->size[0] * 4]) +
               6.83882892679428 * in1_data[i * stride_8_0 + in1->size[0] * 5]) +
              -1.0315164519219504 *
                  in1_data[i * stride_9_0 + in1->size[0] * 6]) +
             0.41291062321306227 *
                 in1_data[i * stride_10_0 + in1->size[0] * 7]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 8] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  int32_T stride_5_0;
  int32_T stride_6_0;
  int32_T stride_7_0;
  int32_T stride_8_0;
  int32_T stride_9_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &he_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        stride_0_0 = in1->size[0];
      } else {
        stride_0_0 = in11->size[0];
      }
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        b_in9->size[0] = in1->size[0];
      } else {
        b_in9->size[0] = in11->size[0];
      }
    } else {
      b_in9->size[0] = in12->size[0];
    }
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &he_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_2_0 = (in11->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  stride_4_0 = (in1->size[0] != 1);
  stride_5_0 = (in1->size[0] != 1);
  stride_6_0 = (in1->size[0] != 1);
  stride_7_0 = (in1->size[0] != 1);
  stride_8_0 = (in1->size[0] != 1);
  stride_9_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        i = in1->size[0];
      } else {
        i = in11->size[0];
      }
    } else {
      i = in12->size[0];
    }
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        loop_ub = in1->size[0];
      } else {
        loop_ub = in11->size[0];
      }
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((0.6130118256955932 * in1_data[i * stride_1_0] +
                    9.0888038916404632 * in11_data[i * stride_2_0]) +
                   -0.40737881562934486 * in12_data[i * stride_3_0]) +
                  1.7907333894903747 *
                      in1_data[i * stride_4_0 + in1->size[0]]) +
                 0.714927166761755 *
                     in1_data[i * stride_5_0 + in1->size[0] * 2]) +
                -1.438580857841723 *
                    in1_data[i * stride_6_0 + in1->size[0] * 3]) +
               -8.26332931206474 *
                   in1_data[i * stride_7_0 + in1->size[0] * 4]) +
              -1.5375705708088652 *
                  in1_data[i * stride_8_0 + in1->size[0] * 5]) +
             0.34538328275648716 * in1_data[i * stride_9_0 + in1->size[0] * 6]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 7] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  int32_T stride_5_0;
  int32_T stride_6_0;
  int32_T stride_7_0;
  int32_T stride_8_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &ge_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        stride_0_0 = in1->size[0];
      } else {
        stride_0_0 = in11->size[0];
      }
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        b_in9->size[0] = in1->size[0];
      } else {
        b_in9->size[0] = in11->size[0];
      }
    } else {
      b_in9->size[0] = in12->size[0];
    }
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &ge_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_2_0 = (in11->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  stride_4_0 = (in1->size[0] != 1);
  stride_5_0 = (in1->size[0] != 1);
  stride_6_0 = (in1->size[0] != 1);
  stride_7_0 = (in1->size[0] != 1);
  stride_8_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        i = in1->size[0];
      } else {
        i = in11->size[0];
      }
    } else {
      i = in12->size[0];
    }
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        loop_ub = in1->size[0];
      } else {
        loop_ub = in11->size[0];
      }
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            (((((((-0.50746350564169751 * in1_data[i * stride_1_0] +
                   -6.6313421986572374 * in11_data[i * stride_2_0]) +
                  -0.2527480100908801 * in12_data[i * stride_3_0]) +
                 -0.49526123800360955 *
                     in1_data[i * stride_4_0 + in1->size[0]]) +
                0.29325255452538868 *
                    in1_data[i * stride_5_0 + in1->size[0] * 2]) +
               1.440108693768281 *
                   in1_data[i * stride_6_0 + in1->size[0] * 3]) +
              6.2379344986470562 *
                  in1_data[i * stride_7_0 + in1->size[0] * 4]) +
             0.72701920545269871 * in1_data[i * stride_8_0 + in1->size[0] * 5]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 6] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  int32_T stride_5_0;
  int32_T stride_6_0;
  int32_T stride_7_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &fe_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        stride_0_0 = in1->size[0];
      } else {
        stride_0_0 = in11->size[0];
      }
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        b_in9->size[0] = in1->size[0];
      } else {
        b_in9->size[0] = in11->size[0];
      }
    } else {
      b_in9->size[0] = in12->size[0];
    }
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &fe_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_2_0 = (in11->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  stride_4_0 = (in1->size[0] != 1);
  stride_5_0 = (in1->size[0] != 1);
  stride_6_0 = (in1->size[0] != 1);
  stride_7_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        i = in1->size[0];
      } else {
        i = in11->size[0];
      }
    } else {
      i = in12->size[0];
    }
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        loop_ub = in1->size[0];
      } else {
        loop_ub = in11->size[0];
      }
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((-0.036284233962556589 * in1_data[i * stride_1_0] +
                  -1.0961675974272087 * in11_data[i * stride_2_0]) +
                 0.18260355043213311 * in12_data[i * stride_3_0]) +
                0.070822544441706839 *
                    in1_data[i * stride_4_0 + in1->size[0]]) +
               -0.023136470184824311 *
                   in1_data[i * stride_5_0 + in1->size[0] * 2]) +
              0.27112047263209327 *
                  in1_data[i * stride_6_0 + in1->size[0] * 3]) +
             1.3081337494229808 * in1_data[i * stride_7_0 + in1->size[0] * 4]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 5] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void q_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  int32_T stride_5_0;
  int32_T stride_6_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &ee_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        stride_0_0 = in1->size[0];
      } else {
        stride_0_0 = in11->size[0];
      }
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        b_in9->size[0] = in1->size[0];
      } else {
        b_in9->size[0] = in11->size[0];
      }
    } else {
      b_in9->size[0] = in12->size[0];
    }
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &ee_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_2_0 = (in11->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  stride_4_0 = (in1->size[0] != 1);
  stride_5_0 = (in1->size[0] != 1);
  stride_6_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        i = in1->size[0];
      } else {
        i = in11->size[0];
      }
    } else {
      i = in12->size[0];
    }
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        loop_ub = in1->size[0];
      } else {
        loop_ub = in11->size[0];
      }
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            (((((-0.026091134357549235 * in1_data[i * stride_1_0] +
                 0.033333333333333333 * in11_data[i * stride_2_0]) +
                -0.1652504006638105 * in12_data[i * stride_3_0]) +
               0.034346641183686168 * in1_data[i * stride_4_0 + in1->size[0]]) +
              0.1595758283215209 *
                  in1_data[i * stride_5_0 + in1->size[0] * 2]) +
             0.21408573218281934 * in1_data[i * stride_6_0 + in1->size[0] * 3]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 4] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void r_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  int32_T stride_5_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &de_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        stride_0_0 = in1->size[0];
      } else {
        stride_0_0 = in11->size[0];
      }
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        b_in9->size[0] = in1->size[0];
      } else {
        b_in9->size[0] = in11->size[0];
      }
    } else {
      b_in9->size[0] = in12->size[0];
    }
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &de_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_2_0 = (in11->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  stride_4_0 = (in1->size[0] != 1);
  stride_5_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        i = in1->size[0];
      } else {
        i = in11->size[0];
      }
    } else {
      i = in12->size[0];
    }
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        loop_ub = in1->size[0];
      } else {
        loop_ub = in11->size[0];
      }
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((0.048226773224658105 * in1_data[i * stride_1_0] +
                0.039485599804954 * in11_data[i * stride_2_0]) +
               0.10588511619346581 * in12_data[i * stride_3_0]) +
              -0.021520063204743093 * in1_data[i * stride_4_0 + in1->size[0]]) +
             -0.10453742601833482 *
                 in1_data[i * stride_5_0 + in1->size[0] * 2]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 3] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void s_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &ce_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        stride_0_0 = in1->size[0];
      } else {
        stride_0_0 = in11->size[0];
      }
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        b_in9->size[0] = in1->size[0];
      } else {
        b_in9->size[0] = in11->size[0];
      }
    } else {
      b_in9->size[0] = in12->size[0];
    }
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &ce_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_2_0 = (in11->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  stride_4_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        i = in1->size[0];
      } else {
        i = in11->size[0];
      }
    } else {
      i = in12->size[0];
    }
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in1->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in11->size[0] == 1) {
        loop_ub = in1->size[0];
      } else {
        loop_ub = in11->size[0];
      }
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * (((0.07125 * in1_data[i * stride_1_0] +
                              0.32688424515752457 * in11_data[i * stride_2_0]) +
                             0.11561575484247544 * in12_data[i * stride_3_0]) +
                            -0.03375 * in1_data[i * stride_4_0 + in1->size[0]]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * 2] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void t_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  emxArray_real_T *r;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &be_emlrtRTEI);
  i = b_in9->size[0];
  if (in12->size[0] == 1) {
    if (in11->size[0] == 1) {
      stride_0_0 = in1->size[0];
    } else {
      stride_0_0 = in11->size[0];
    }
  } else {
    stride_0_0 = in12->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in12->size[0] == 1) {
    if (in11->size[0] == 1) {
      b_in9->size[0] = in1->size[0];
    } else {
      b_in9->size[0] = in11->size[0];
    }
  } else {
    b_in9->size[0] = in12->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &be_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_2_0 = (in11->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  if (in12->size[0] == 1) {
    if (in11->size[0] == 1) {
      i = in1->size[0];
    } else {
      i = in11->size[0];
    }
  } else {
    i = in12->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in12->size[0] == 1) {
    if (in11->size[0] == 1) {
      loop_ub = in1->size[0];
    } else {
      loop_ub = in11->size[0];
    }
  } else {
    loop_ub = in12->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * ((0.071111111111111111 * in1_data[i * stride_1_0] +
                             0.32799092876058983 * in11_data[i * stride_2_0]) +
                            0.24089796012829906 * in12_data[i * stride_3_0]);
  }
  emxInit_real_T(sp, &r, 1, &ue_emlrtRTEI);
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, r);
  b_in9_data = r->data;
  emxFree_real_T(sp, &b_in9);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0]] = b_in9_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void u_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in13_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &ae_emlrtRTEI);
  i = b_in9->size[0];
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in1->size[0] == 1) {
        stride_0_0 = in11->size[0];
      } else {
        stride_0_0 = in1->size[0];
      }
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in1->size[0] == 1) {
        b_in9->size[0] = in11->size[0];
      } else {
        b_in9->size[0] = in1->size[0];
      }
    } else {
      b_in9->size[0] = in12->size[0];
    }
  } else {
    b_in9->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &ae_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in11->size[0] != 1);
  stride_2_0 = (in1->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  stride_4_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in1->size[0] == 1) {
        i = in11->size[0];
      } else {
        i = in1->size[0];
      }
    } else {
      i = in12->size[0];
    }
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      if (in1->size[0] == 1) {
        loop_ub = in11->size[0];
      } else {
        loop_ub = in1->size[0];
      }
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in13->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * (((0.14247836686832849 * in11_data[i * stride_1_0] +
                              -0.35417994346686843 * in1_data[i * stride_2_0]) +
                             0.075953154502951009 * in12_data[i * stride_3_0]) +
                            0.6765157656337123 * in13_data[i * stride_4_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
  emxFree_real_T(sp, &b_in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void v_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in13_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &yd_emlrtRTEI);
  i = b_in9->size[0];
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      stride_0_0 = in11->size[0];
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      b_in9->size[0] = in11->size[0];
    } else {
      b_in9->size[0] = in12->size[0];
    }
  } else {
    b_in9->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &yd_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in11->size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      i = in11->size[0];
    } else {
      i = in12->size[0];
    }
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      loop_ub = in11->size[0];
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in13->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * ((0.050943855353893744 * in11_data[i * stride_1_0] +
                             0.17558650498090711 * in12_data[i * stride_2_0]) +
                            0.00070229612707574678 * in13_data[i * stride_3_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
  emxFree_real_T(sp, &b_in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void w_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &xd_emlrtRTEI);
  i = b_in9->size[0];
  if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      stride_0_0 = in11->size[0];
    } else {
      stride_0_0 = in1->size[0];
    }
  } else {
    stride_0_0 = in12->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      b_in9->size[0] = in11->size[0];
    } else {
      b_in9->size[0] = in1->size[0];
    }
  } else {
    b_in9->size[0] = in12->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &xd_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in11->size[0] != 1);
  stride_2_0 = (in1->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      i = in11->size[0];
    } else {
      i = in1->size[0];
    }
  } else {
    i = in12->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      loop_ub = in11->size[0];
    } else {
      loop_ub = in1->size[0];
    }
  } else {
    loop_ub = in12->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * ((2.2721142642901775 * in11_data[i * stride_1_0] +
                             -8.5268864479763984 * in1_data[i * stride_2_0]) +
                            6.8307721836862214 * in12_data[i * stride_3_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
  emxFree_real_T(sp, &b_in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void x_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  const real_T *in11_data;
  const real_T *in12_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in11_data = in11->data;
  in9_data = in9->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &wd_emlrtRTEI);
  i = b_in9->size[0];
  if (in12->size[0] == 1) {
    stride_0_0 = in11->size[0];
  } else {
    stride_0_0 = in12->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in12->size[0] == 1) {
    b_in9->size[0] = in11->size[0];
  } else {
    b_in9->size[0] = in12->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &wd_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in11->size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  if (in12->size[0] == 1) {
    i = in11->size[0];
  } else {
    i = in12->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in12->size[0] == 1) {
    loop_ub = in11->size[0];
  } else {
    loop_ub = in12->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * (0.0361827600517026 * in11_data[i * stride_1_0] +
                            0.10854828015510781 * in12_data[i * stride_2_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
  emxFree_real_T(sp, &b_in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void y_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11)
{
  emlrtStack st;
  emxArray_real_T *b_in9;
  const real_T *in11_data;
  const real_T *in9_data;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in11_data = in11->data;
  in9_data = in9->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in9, 1, &vd_emlrtRTEI);
  i = b_in9->size[0];
  if (in1->size[0] == 1) {
    stride_0_0 = in11->size[0];
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    b_in9->size[0] = in9->size[0];
  } else if (in1->size[0] == 1) {
    b_in9->size[0] = in11->size[0];
  } else {
    b_in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in9, i, &vd_emlrtRTEI);
  b_in9_data = b_in9->data;
  stride_0_0 = (in9->size[0] != 1);
  stride_1_0 = (in11->size[0] != 1);
  stride_2_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    i = in11->size[0];
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = in9->size[0];
  } else if (in1->size[0] == 1) {
    loop_ub = in11->size[0];
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * (-0.01988527319182291 * in11_data[i * stride_1_0] +
                            0.11637263332969652 * in1_data[i * stride_2_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfunSTM_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
  emxFree_real_T(sp, &b_in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (function_handle.c) */
