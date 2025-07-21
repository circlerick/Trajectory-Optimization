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
#include "objfun_S_NOG.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "objfun_S_fuel.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void ac_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &hh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &hh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  stride_8_0 = (in11_size[0] != 1);
  stride_9_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((2.1573890074940536 * in11_data[i * stride_1_0] +
                    23.807122198095804 * in12_data[i * stride_2_0]) +
                   0.88627792492165558 * in13_data[i * stride_3_0]) +
                  13.139130397598764 *
                      in11_data[i * stride_4_0 + in11_size[0]]) +
                 -2.6044157092877147 *
                     in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                -5.1938599497838727 *
                    in11_data[i * stride_6_0 + in11_size[0] * 3]) +
               -20.412340711541507 *
                   in11_data[i * stride_7_0 + in11_size[0] * 4]) +
              -12.300856252505723 *
                  in11_data[i * stride_8_0 + in11_size[0] * 5]) +
             1.5215530950085394 * in11_data[i * stride_9_0 + in11_size[0] * 6]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void ad_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &ch_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &ch_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((((-0.026091134357549235 * in11_data[i * stride_1_0] +
                    0.033333333333333333 * in12_data[i * stride_2_0]) +
                   -0.1652504006638105 * in13_data[i * stride_3_0]) +
                  0.034346641183686168 *
                      in11_data[i * stride_4_0 + in11_size[0]]) +
                 0.1595758283215209 *
                     in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                0.21408573218281934 *
                    in11_data[i * stride_6_0 + in11_size[0] * 3]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void bc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
  real_T *b_in9_data;
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
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &gh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &gh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  stride_8_0 = (in11_size[0] != 1);
  stride_9_0 = (in11_size[0] != 1);
  stride_10_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((((((((-1.2116979103438739 * in11_data[i * stride_1_0] +
                        -19.055818715595954 * in12_data[i * stride_2_0]) +
                       1.2630606753898752 * in13_data[i * stride_3_0]) +
                      -6.9139169691784579 *
                          in11_data[i * stride_4_0 + in11_size[0]]) +
                     -0.676462266509498 *
                         in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                    3.3678604450266079 *
                        in11_data[i * stride_6_0 + in11_size[0] * 3]) +
                   18.006751643125909 *
                       in11_data[i * stride_7_0 + in11_size[0] * 4]) +
                  6.83882892679428 *
                      in11_data[i * stride_8_0 + in11_size[0] * 5]) +
                 -1.0315164519219504 *
                     in11_data[i * stride_9_0 + in11_size[0] * 6]) +
                0.41291062321306227 *
                    in11_data[i * stride_10_0 + in11_size[0] * 7]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void bd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
  real_T *b_in9_data;
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
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &bh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &bh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * ((((0.048226773224658105 * in11_data[i * stride_1_0] +
                   0.039485599804954 * in12_data[i * stride_2_0]) +
                  0.10588511619346581 * in13_data[i * stride_3_0]) +
                 -0.021520063204743093 *
                     in11_data[i * stride_4_0 + in11_size[0]]) +
                -0.10453742601833482 *
                    in11_data[i * stride_5_0 + in11_size[0] * 2]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void cc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &fh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &fh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  stride_8_0 = (in11_size[0] != 1);
  stride_9_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * ((((((((0.6130118256955932 * in11_data[i * stride_1_0] +
                       9.0888038916404632 * in12_data[i * stride_2_0]) +
                      -0.40737881562934486 * in13_data[i * stride_3_0]) +
                     1.7907333894903747 *
                         in11_data[i * stride_4_0 + in11_size[0]]) +
                    0.714927166761755 *
                        in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                   -1.438580857841723 *
                       in11_data[i * stride_6_0 + in11_size[0] * 3]) +
                  -8.26332931206474 *
                      in11_data[i * stride_7_0 + in11_size[0] * 4]) +
                 -1.5375705708088652 *
                     in11_data[i * stride_8_0 + in11_size[0] * 5]) +
                0.34538328275648716 *
                    in11_data[i * stride_9_0 + in11_size[0] * 6]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void cd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
  real_T *b_in9_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &ah_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &ah_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((0.07125 * in11_data[i * stride_1_0] +
                  0.32688424515752457 * in12_data[i * stride_2_0]) +
                 0.11561575484247544 * in13_data[i * stride_3_0]) +
                -0.03375 * in11_data[i * stride_4_0 + in11_size[0]]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void dc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &eh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &eh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  stride_8_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((((((-0.50746350564169751 * in11_data[i * stride_1_0] +
                      -6.6313421986572374 * in12_data[i * stride_2_0]) +
                     -0.2527480100908801 * in13_data[i * stride_3_0]) +
                    -0.49526123800360955 *
                        in11_data[i * stride_4_0 + in11_size[0]]) +
                   0.29325255452538868 *
                       in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                  1.440108693768281 *
                      in11_data[i * stride_6_0 + in11_size[0] * 3]) +
                 6.2379344986470562 *
                     in11_data[i * stride_7_0 + in11_size[0] * 4]) +
                0.72701920545269871 *
                    in11_data[i * stride_8_0 + in11_size[0] * 5]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void dd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &yg_emlrtRTEI);
  i = in9->size[0];
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      stride_0_0 = in11_size[0];
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      in9->size[0] = in11_size[0];
    } else {
      in9->size[0] = in12->size[0];
    }
  } else {
    in9->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &yg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      i = in11_size[0];
    } else {
      i = in12->size[0];
    }
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      loop_ub = in11_size[0];
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in13->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * ((0.071111111111111111 * in11_data[i * stride_1_0] +
                             0.32799092876058983 * in12_data[i * stride_2_0]) +
                            0.24089796012829906 * in13_data[i * stride_3_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void ec_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &dh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &dh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((-0.036284233962556589 * in11_data[i * stride_1_0] +
                  -1.0961675974272087 * in12_data[i * stride_2_0]) +
                 0.18260355043213311 * in13_data[i * stride_3_0]) +
                0.070822544441706839 *
                    in11_data[i * stride_4_0 + in11_size[0]]) +
               -0.023136470184824311 *
                   in11_data[i * stride_5_0 + in11_size[0] * 2]) +
              0.27112047263209327 *
                  in11_data[i * stride_6_0 + in11_size[0] * 3]) +
             1.3081337494229808 * in11_data[i * stride_7_0 + in11_size[0] * 4]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void ed_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &xg_emlrtRTEI);
  i = in9->size[0];
  if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in1->size[0];
    }
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in1->size[0];
    }
  } else {
    in9->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &xg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in1->size[0] != 1);
  stride_4_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in1->size[0];
    }
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in1->size[0];
    }
  } else {
    loop_ub = in13->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((0.14247836686832849 * in11_data[i * stride_1_0] +
                  -0.35417994346686843 * in12_data[i * stride_2_0]) +
                 0.075953154502951009 * in1_data[i * stride_3_0]) +
                0.6765157656337123 * in13_data[i * stride_4_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void fb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
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
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &hh_emlrtRTEI);
  i = in10->size[0];
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        stride_0_0 = in12_size[0];
      } else {
        stride_0_0 = in13->size[0];
      }
    } else {
      stride_0_0 = in14->size[0];
    }
  } else {
    stride_0_0 = in12_size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        in10->size[0] = in12_size[0];
      } else {
        in10->size[0] = in13->size[0];
      }
    } else {
      in10->size[0] = in14->size[0];
    }
  } else {
    in10->size[0] = in12_size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &hh_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  stride_4_0 = (in12_size[0] != 1);
  stride_5_0 = (in12_size[0] != 1);
  stride_6_0 = (in12_size[0] != 1);
  stride_7_0 = (in12_size[0] != 1);
  stride_8_0 = (in12_size[0] != 1);
  stride_9_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        i = in12_size[0];
      } else {
        i = in13->size[0];
      }
    } else {
      i = in14->size[0];
    }
  } else {
    i = in12_size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        loop_ub = in12_size[0];
      } else {
        loop_ub = in13->size[0];
      }
    } else {
      loop_ub = in14->size[0];
    }
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 *
            ((((((((2.1573890074940536 * in12_data[i * stride_1_0] +
                    23.807122198095804 * in13_data[i * stride_2_0]) +
                   0.88627792492165558 * in14_data[i * stride_3_0]) +
                  13.139130397598764 *
                      in12_data[i * stride_4_0 + in12_size[0]]) +
                 -2.6044157092877147 *
                     in12_data[i * stride_5_0 + in12_size[0] * 2]) +
                -5.1938599497838727 *
                    in12_data[i * stride_6_0 + in12_size[0] * 3]) +
               -20.412340711541507 *
                   in12_data[i * stride_7_0 + in12_size[0] * 4]) +
              -12.300856252505723 *
                  in12_data[i * stride_8_0 + in12_size[0] * 5]) +
             1.5215530950085394 * in12_data[i * stride_9_0 + in12_size[0] * 6]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void fc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &ch_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &ch_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((((-0.026091134357549235 * in11_data[i * stride_1_0] +
                    0.033333333333333333 * in12_data[i * stride_2_0]) +
                   -0.1652504006638105 * in13_data[i * stride_3_0]) +
                  0.034346641183686168 *
                      in11_data[i * stride_4_0 + in11_size[0]]) +
                 0.1595758283215209 *
                     in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                0.21408573218281934 *
                    in11_data[i * stride_6_0 + in11_size[0] * 3]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void fd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &wg_emlrtRTEI);
  i = in9->size[0];
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      stride_0_0 = in11_size[0];
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      in9->size[0] = in11_size[0];
    } else {
      in9->size[0] = in12->size[0];
    }
  } else {
    in9->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &wg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      i = in11_size[0];
    } else {
      i = in12->size[0];
    }
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      loop_ub = in11_size[0];
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
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void gb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
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
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &gh_emlrtRTEI);
  i = in10->size[0];
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        stride_0_0 = in12_size[0];
      } else {
        stride_0_0 = in13->size[0];
      }
    } else {
      stride_0_0 = in14->size[0];
    }
  } else {
    stride_0_0 = in12_size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        in10->size[0] = in12_size[0];
      } else {
        in10->size[0] = in13->size[0];
      }
    } else {
      in10->size[0] = in14->size[0];
    }
  } else {
    in10->size[0] = in12_size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &gh_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  stride_4_0 = (in12_size[0] != 1);
  stride_5_0 = (in12_size[0] != 1);
  stride_6_0 = (in12_size[0] != 1);
  stride_7_0 = (in12_size[0] != 1);
  stride_8_0 = (in12_size[0] != 1);
  stride_9_0 = (in12_size[0] != 1);
  stride_10_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        i = in12_size[0];
      } else {
        i = in13->size[0];
      }
    } else {
      i = in14->size[0];
    }
  } else {
    i = in12_size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        loop_ub = in12_size[0];
      } else {
        loop_ub = in13->size[0];
      }
    } else {
      loop_ub = in14->size[0];
    }
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 * (((((((((-1.2116979103438739 * in12_data[i * stride_1_0] +
                        -19.055818715595954 * in13_data[i * stride_2_0]) +
                       1.2630606753898752 * in14_data[i * stride_3_0]) +
                      -6.9139169691784579 *
                          in12_data[i * stride_4_0 + in12_size[0]]) +
                     -0.676462266509498 *
                         in12_data[i * stride_5_0 + in12_size[0] * 2]) +
                    3.3678604450266079 *
                        in12_data[i * stride_6_0 + in12_size[0] * 3]) +
                   18.006751643125909 *
                       in12_data[i * stride_7_0 + in12_size[0] * 4]) +
                  6.83882892679428 *
                      in12_data[i * stride_8_0 + in12_size[0] * 5]) +
                 -1.0315164519219504 *
                     in12_data[i * stride_9_0 + in12_size[0] * 6]) +
                0.41291062321306227 *
                    in12_data[i * stride_10_0 + in12_size[0] * 7]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void gc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
  real_T *b_in9_data;
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
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &bh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &bh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * ((((0.048226773224658105 * in11_data[i * stride_1_0] +
                   0.039485599804954 * in12_data[i * stride_2_0]) +
                  0.10588511619346581 * in13_data[i * stride_3_0]) +
                 -0.021520063204743093 *
                     in11_data[i * stride_4_0 + in11_size[0]]) +
                -0.10453742601833482 *
                    in11_data[i * stride_5_0 + in11_size[0] * 2]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void gd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
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
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &vg_emlrtRTEI);
  i = in9->size[0];
  if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      stride_0_0 = in11_size[0];
    } else {
      stride_0_0 = in1->size[0];
    }
  } else {
    stride_0_0 = in12->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      in9->size[0] = in11_size[0];
    } else {
      in9->size[0] = in1->size[0];
    }
  } else {
    in9->size[0] = in12->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &vg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in1->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      i = in11_size[0];
    } else {
      i = in1->size[0];
    }
  } else {
    i = in12->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      loop_ub = in11_size[0];
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
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void hb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
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
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &fh_emlrtRTEI);
  i = in10->size[0];
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        stride_0_0 = in12_size[0];
      } else {
        stride_0_0 = in13->size[0];
      }
    } else {
      stride_0_0 = in14->size[0];
    }
  } else {
    stride_0_0 = in12_size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        in10->size[0] = in12_size[0];
      } else {
        in10->size[0] = in13->size[0];
      }
    } else {
      in10->size[0] = in14->size[0];
    }
  } else {
    in10->size[0] = in12_size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &fh_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  stride_4_0 = (in12_size[0] != 1);
  stride_5_0 = (in12_size[0] != 1);
  stride_6_0 = (in12_size[0] != 1);
  stride_7_0 = (in12_size[0] != 1);
  stride_8_0 = (in12_size[0] != 1);
  stride_9_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        i = in12_size[0];
      } else {
        i = in13->size[0];
      }
    } else {
      i = in14->size[0];
    }
  } else {
    i = in12_size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        loop_ub = in12_size[0];
      } else {
        loop_ub = in13->size[0];
      }
    } else {
      loop_ub = in14->size[0];
    }
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 * ((((((((0.6130118256955932 * in12_data[i * stride_1_0] +
                       9.0888038916404632 * in13_data[i * stride_2_0]) +
                      -0.40737881562934486 * in14_data[i * stride_3_0]) +
                     1.7907333894903747 *
                         in12_data[i * stride_4_0 + in12_size[0]]) +
                    0.714927166761755 *
                        in12_data[i * stride_5_0 + in12_size[0] * 2]) +
                   -1.438580857841723 *
                       in12_data[i * stride_6_0 + in12_size[0] * 3]) +
                  -8.26332931206474 *
                      in12_data[i * stride_7_0 + in12_size[0] * 4]) +
                 -1.5375705708088652 *
                     in12_data[i * stride_8_0 + in12_size[0] * 5]) +
                0.34538328275648716 *
                    in12_data[i * stride_9_0 + in12_size[0] * 6]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void hc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
  real_T *b_in9_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &ah_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &ah_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((0.07125 * in11_data[i * stride_1_0] +
                  0.32688424515752457 * in12_data[i * stride_2_0]) +
                 0.11561575484247544 * in13_data[i * stride_3_0]) +
                -0.03375 * in11_data[i * stride_4_0 + in11_size[0]]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void hd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  real_T *b_in9_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &ug_emlrtRTEI);
  i = in9->size[0];
  if (in12->size[0] == 1) {
    stride_0_0 = in11_size[0];
  } else {
    stride_0_0 = in12->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in12->size[0] == 1) {
    in9->size[0] = in11_size[0];
  } else {
    in9->size[0] = in12->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &ug_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  if (in12->size[0] == 1) {
    i = in11_size[0];
  } else {
    i = in12->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in12->size[0] == 1) {
    loop_ub = in11_size[0];
  } else {
    loop_ub = in12->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * (0.0361827600517026 * in11_data[i * stride_1_0] +
                            0.10854828015510781 * in12_data[i * stride_2_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void ib_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
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
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &eh_emlrtRTEI);
  i = in10->size[0];
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        stride_0_0 = in12_size[0];
      } else {
        stride_0_0 = in13->size[0];
      }
    } else {
      stride_0_0 = in14->size[0];
    }
  } else {
    stride_0_0 = in12_size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        in10->size[0] = in12_size[0];
      } else {
        in10->size[0] = in13->size[0];
      }
    } else {
      in10->size[0] = in14->size[0];
    }
  } else {
    in10->size[0] = in12_size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &eh_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  stride_4_0 = (in12_size[0] != 1);
  stride_5_0 = (in12_size[0] != 1);
  stride_6_0 = (in12_size[0] != 1);
  stride_7_0 = (in12_size[0] != 1);
  stride_8_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        i = in12_size[0];
      } else {
        i = in13->size[0];
      }
    } else {
      i = in14->size[0];
    }
  } else {
    i = in12_size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        loop_ub = in12_size[0];
      } else {
        loop_ub = in13->size[0];
      }
    } else {
      loop_ub = in14->size[0];
    }
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 * (((((((-0.50746350564169751 * in12_data[i * stride_1_0] +
                      -6.6313421986572374 * in13_data[i * stride_2_0]) +
                     -0.2527480100908801 * in14_data[i * stride_3_0]) +
                    -0.49526123800360955 *
                        in12_data[i * stride_4_0 + in12_size[0]]) +
                   0.29325255452538868 *
                       in12_data[i * stride_5_0 + in12_size[0] * 2]) +
                  1.440108693768281 *
                      in12_data[i * stride_6_0 + in12_size[0] * 3]) +
                 6.2379344986470562 *
                     in12_data[i * stride_7_0 + in12_size[0] * 4]) +
                0.72701920545269871 *
                    in12_data[i * stride_8_0 + in12_size[0] * 5]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void ic_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &yg_emlrtRTEI);
  i = in9->size[0];
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      stride_0_0 = in11_size[0];
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      in9->size[0] = in11_size[0];
    } else {
      in9->size[0] = in12->size[0];
    }
  } else {
    in9->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &yg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      i = in11_size[0];
    } else {
      i = in12->size[0];
    }
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      loop_ub = in11_size[0];
    } else {
      loop_ub = in12->size[0];
    }
  } else {
    loop_ub = in13->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * ((0.071111111111111111 * in11_data[i * stride_1_0] +
                             0.32799092876058983 * in12_data[i * stride_2_0]) +
                            0.24089796012829906 * in13_data[i * stride_3_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void id_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T *in9;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &tg_emlrtRTEI);
  i = in9->size[0];
  if (in1->size[0] == 1) {
    stride_0_0 = in11_size[0];
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in1->size[0] == 1) {
    in9->size[0] = in11_size[0];
  } else {
    in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &tg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    i = in11_size[0];
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in1->size[0] == 1) {
    loop_ub = in11_size[0];
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * (-0.01988527319182291 * in11_data[i * stride_1_0] +
                            0.11637263332969652 * in1_data[i * stride_2_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void jb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
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
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &dh_emlrtRTEI);
  i = in10->size[0];
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        stride_0_0 = in12_size[0];
      } else {
        stride_0_0 = in13->size[0];
      }
    } else {
      stride_0_0 = in14->size[0];
    }
  } else {
    stride_0_0 = in12_size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        in10->size[0] = in12_size[0];
      } else {
        in10->size[0] = in13->size[0];
      }
    } else {
      in10->size[0] = in14->size[0];
    }
  } else {
    in10->size[0] = in12_size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &dh_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  stride_4_0 = (in12_size[0] != 1);
  stride_5_0 = (in12_size[0] != 1);
  stride_6_0 = (in12_size[0] != 1);
  stride_7_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        i = in12_size[0];
      } else {
        i = in13->size[0];
      }
    } else {
      i = in14->size[0];
    }
  } else {
    i = in12_size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        loop_ub = in12_size[0];
      } else {
        loop_ub = in13->size[0];
      }
    } else {
      loop_ub = in14->size[0];
    }
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 *
            ((((((-0.036284233962556589 * in12_data[i * stride_1_0] +
                  -1.0961675974272087 * in13_data[i * stride_2_0]) +
                 0.18260355043213311 * in14_data[i * stride_3_0]) +
                0.070822544441706839 *
                    in12_data[i * stride_4_0 + in12_size[0]]) +
               -0.023136470184824311 *
                   in12_data[i * stride_5_0 + in12_size[0] * 2]) +
              0.27112047263209327 *
                  in12_data[i * stride_6_0 + in12_size[0] * 3]) +
             1.3081337494229808 * in12_data[i * stride_7_0 + in12_size[0] * 4]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void jc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &xg_emlrtRTEI);
  i = in9->size[0];
  if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in1->size[0];
    }
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in1->size[0];
    }
  } else {
    in9->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &xg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in1->size[0] != 1);
  stride_4_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in1->size[0];
    }
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in1->size[0];
    }
  } else {
    loop_ub = in13->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((0.14247836686832849 * in11_data[i * stride_1_0] +
                  -0.35417994346686843 * in12_data[i * stride_2_0]) +
                 0.075953154502951009 * in1_data[i * stride_3_0]) +
                0.6765157656337123 * in13_data[i * stride_4_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void jd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[243];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] + in10 * in11_data[i * stride_1_0];
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 243;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void kb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
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
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &ch_emlrtRTEI);
  i = in10->size[0];
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        stride_0_0 = in12_size[0];
      } else {
        stride_0_0 = in13->size[0];
      }
    } else {
      stride_0_0 = in14->size[0];
    }
  } else {
    stride_0_0 = in12_size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        in10->size[0] = in12_size[0];
      } else {
        in10->size[0] = in13->size[0];
      }
    } else {
      in10->size[0] = in14->size[0];
    }
  } else {
    in10->size[0] = in12_size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &ch_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  stride_4_0 = (in12_size[0] != 1);
  stride_5_0 = (in12_size[0] != 1);
  stride_6_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        i = in12_size[0];
      } else {
        i = in13->size[0];
      }
    } else {
      i = in14->size[0];
    }
  } else {
    i = in12_size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        loop_ub = in12_size[0];
      } else {
        loop_ub = in13->size[0];
      }
    } else {
      loop_ub = in14->size[0];
    }
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 * (((((-0.026091134357549235 * in12_data[i * stride_1_0] +
                    0.033333333333333333 * in13_data[i * stride_2_0]) +
                   -0.1652504006638105 * in14_data[i * stride_3_0]) +
                  0.034346641183686168 *
                      in12_data[i * stride_4_0 + in12_size[0]]) +
                 0.1595758283215209 *
                     in12_data[i * stride_5_0 + in12_size[0] * 2]) +
                0.21408573218281934 *
                    in12_data[i * stride_6_0 + in12_size[0] * 3]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void kc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &wg_emlrtRTEI);
  i = in9->size[0];
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      stride_0_0 = in11_size[0];
    } else {
      stride_0_0 = in12->size[0];
    }
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      in9->size[0] = in11_size[0];
    } else {
      in9->size[0] = in12->size[0];
    }
  } else {
    in9->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &wg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      i = in11_size[0];
    } else {
      i = in12->size[0];
    }
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in13->size[0] == 1) {
    if (in12->size[0] == 1) {
      loop_ub = in11_size[0];
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
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void kd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[243];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((((((0.016151472919007624 * in11_data[in9_tmp] +
                        0.080986850032429059 *
                            in11_data[in9_tmp + in11_size[0]]) +
                       0.12769162943069304 *
                           in11_data[in9_tmp + in11_size[0] * 2]) +
                      0.12348143593834805 *
                          in11_data[in9_tmp + in11_size[0] * 3]) +
                     0.233985125914011 *
                         in11_data[in9_tmp + in11_size[0] * 4]) +
                    -0.065959956833573682 *
                        in11_data[in9_tmp + in11_size[0] * 5]) +
                   -0.025652768594064328 *
                       in11_data[in9_tmp + in11_size[0] * 6]) +
                  -0.12589734638192471 *
                      in11_data[in9_tmp + in11_size[0] * 7]) +
                 -0.043076724903648438 *
                     in11_data[in9_tmp + in11_size[0] * 8]) +
                0.04973042479196705 * in11_data[in9_tmp + in11_size[0] * 9]) +
               0.10004735401793927 * in11_data[in9_tmp + in11_size[0] * 10]) +
              0.13786588067636232 * in11_data[in9_tmp + in11_size[0] * 11]) +
             -0.12235337700754625 * in11_data[in9_tmp + in11_size[0] * 12]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 243;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void lb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
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
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &bh_emlrtRTEI);
  i = in10->size[0];
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        stride_0_0 = in12_size[0];
      } else {
        stride_0_0 = in13->size[0];
      }
    } else {
      stride_0_0 = in14->size[0];
    }
  } else {
    stride_0_0 = in12_size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        in10->size[0] = in12_size[0];
      } else {
        in10->size[0] = in13->size[0];
      }
    } else {
      in10->size[0] = in14->size[0];
    }
  } else {
    in10->size[0] = in12_size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &bh_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  stride_4_0 = (in12_size[0] != 1);
  stride_5_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        i = in12_size[0];
      } else {
        i = in13->size[0];
      }
    } else {
      i = in14->size[0];
    }
  } else {
    i = in12_size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        loop_ub = in12_size[0];
      } else {
        loop_ub = in13->size[0];
      }
    } else {
      loop_ub = in14->size[0];
    }
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 * ((((0.048226773224658105 * in12_data[i * stride_1_0] +
                   0.039485599804954 * in13_data[i * stride_2_0]) +
                  0.10588511619346581 * in14_data[i * stride_3_0]) +
                 -0.021520063204743093 *
                     in12_data[i * stride_4_0 + in12_size[0]]) +
                -0.10453742601833482 *
                    in12_data[i * stride_5_0 + in12_size[0] * 2]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void lc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
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
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &vg_emlrtRTEI);
  i = in9->size[0];
  if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      stride_0_0 = in11_size[0];
    } else {
      stride_0_0 = in1->size[0];
    }
  } else {
    stride_0_0 = in12->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      in9->size[0] = in11_size[0];
    } else {
      in9->size[0] = in1->size[0];
    }
  } else {
    in9->size[0] = in12->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &vg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in1->size[0] != 1);
  stride_3_0 = (in12->size[0] != 1);
  if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      i = in11_size[0];
    } else {
      i = in1->size[0];
    }
  } else {
    i = in12->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in12->size[0] == 1) {
    if (in1->size[0] == 1) {
      loop_ub = in11_size[0];
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
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void ld_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[243];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            (((((((((((0.013989212133617684 * in11_data[in9_tmp] +
                       -0.031574065179505 * in11_data[in9_tmp + in11_size[0]]) +
                      0.22718125132721581 *
                          in11_data[in9_tmp + in11_size[0] * 2]) +
                     0.12894864109967866 *
                         in11_data[in9_tmp + in11_size[0] * 3]) +
                    0.2216682589135277 *
                        in11_data[in9_tmp + in11_size[0] * 4]) +
                   0.19483682365424806 *
                       in11_data[in9_tmp + in11_size[0] * 5]) +
                  0.05740088404417653 * in11_data[in9_tmp + in11_size[0] * 6]) +
                 0.090083665426759552 * in11_data[in9_tmp + in11_size[0] * 7]) +
                0.015791532088442122 * in11_data[in9_tmp + in11_size[0] * 8]) +
               -0.018991315059091858 * in11_data[in9_tmp + in11_size[0] * 9]) +
              -0.08830926811918835 * in11_data[in9_tmp + in11_size[0] * 10]) +
             -0.11502562032988092 * in11_data[in9_tmp + in11_size[0] * 11]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 243;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void mb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  st.prev = sp;
  st.tls = sp->tls;
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &ah_emlrtRTEI);
  i = in10->size[0];
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        stride_0_0 = in12_size[0];
      } else {
        stride_0_0 = in13->size[0];
      }
    } else {
      stride_0_0 = in14->size[0];
    }
  } else {
    stride_0_0 = in12_size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        in10->size[0] = in12_size[0];
      } else {
        in10->size[0] = in13->size[0];
      }
    } else {
      in10->size[0] = in14->size[0];
    }
  } else {
    in10->size[0] = in12_size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &ah_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  stride_4_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        i = in12_size[0];
      } else {
        i = in13->size[0];
      }
    } else {
      i = in14->size[0];
    }
  } else {
    i = in12_size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in12_size[0] == 1) {
    if (in14->size[0] == 1) {
      if (in13->size[0] == 1) {
        loop_ub = in12_size[0];
      } else {
        loop_ub = in13->size[0];
      }
    } else {
      loop_ub = in14->size[0];
    }
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 * (((0.07125 * in12_data[i * stride_1_0] +
                  0.32688424515752457 * in13_data[i * stride_2_0]) +
                 0.11561575484247544 * in14_data[i * stride_3_0]) +
                -0.03375 * in12_data[i * stride_4_0 + in12_size[0]]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void mc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  real_T *b_in9_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &ug_emlrtRTEI);
  i = in9->size[0];
  if (in12->size[0] == 1) {
    stride_0_0 = in11_size[0];
  } else {
    stride_0_0 = in12->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in12->size[0] == 1) {
    in9->size[0] = in11_size[0];
  } else {
    in9->size[0] = in12->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &ug_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  if (in12->size[0] == 1) {
    i = in11_size[0];
  } else {
    i = in12->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in12->size[0] == 1) {
    loop_ub = in11_size[0];
  } else {
    loop_ub = in12->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * (0.0361827600517026 * in11_data[i * stride_1_0] +
                            0.10854828015510781 * in12_data[i * stride_2_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void md_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[243];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((((0.013111957218440684 * in11_data[in9_tmp] +
                      -0.14640242659698269 *
                          in11_data[in9_tmp + in11_size[0]]) +
                     0.2471264389666796 *
                         in11_data[in9_tmp + in11_size[0] * 2]) +
                    0.13113752030800324 *
                        in11_data[in9_tmp + in11_size[0] * 3]) +
                   0.21705603469825827 *
                       in11_data[in9_tmp + in11_size[0] * 4]) +
                  0.286753671376032 * in11_data[in9_tmp + in11_size[0] * 5]) +
                 0.023233113391494219 * in11_data[in9_tmp + in11_size[0] * 6]) +
                0.052506772641993958 * in11_data[in9_tmp + in11_size[0] * 7]) +
               0.0028339515860099506 * in11_data[in9_tmp + in11_size[0] * 8]) +
              -0.0085024038519957122 * in11_data[in9_tmp + in11_size[0] * 9]) +
             0.069145370262066491 * in11_data[in9_tmp + in11_size[0] * 10]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 243;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void nb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  st.prev = sp;
  st.tls = sp->tls;
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &yg_emlrtRTEI);
  i = in10->size[0];
  if (in14->size[0] == 1) {
    if (in13->size[0] == 1) {
      stride_0_0 = in12_size[0];
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in14->size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in14->size[0] == 1) {
    if (in13->size[0] == 1) {
      in10->size[0] = in12_size[0];
    } else {
      in10->size[0] = in13->size[0];
    }
  } else {
    in10->size[0] = in14->size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &yg_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  if (in14->size[0] == 1) {
    if (in13->size[0] == 1) {
      i = in12_size[0];
    } else {
      i = in13->size[0];
    }
  } else {
    i = in14->size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in14->size[0] == 1) {
    if (in13->size[0] == 1) {
      loop_ub = in12_size[0];
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in14->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] = in10_data[i * stride_0_0] +
                     in11 * ((0.071111111111111111 * in12_data[i * stride_1_0] +
                              0.32799092876058983 * in13_data[i * stride_2_0]) +
                             0.24089796012829906 * in14_data[i * stride_3_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void nc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T *in9;
  real_T *b_in9_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &tg_emlrtRTEI);
  i = in9->size[0];
  if (in1->size[0] == 1) {
    stride_0_0 = in11_size[0];
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in1->size[0] == 1) {
    in9->size[0] = in11_size[0];
  } else {
    in9->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &tg_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    i = in11_size[0];
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in1->size[0] == 1) {
    loop_ub = in11_size[0];
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] +
                    in10 * (-0.01988527319182291 * in11_data[i * stride_1_0] +
                            0.11637263332969652 * in1_data[i * stride_2_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void nd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[243];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            (((((((((0.015601405261088616 * in11_data[in9_tmp] +
                     0.26811643933275847 * in11_data[in9_tmp + in11_size[0]]) +
                    0.1883053124587791 *
                        in11_data[in9_tmp + in11_size[0] * 2]) +
                   0.12491991374610308 *
                       in11_data[in9_tmp + in11_size[0] * 3]) +
                  0.2302302127814522 * in11_data[in9_tmp + in11_size[0] * 4]) +
                 -0.13603122161327985 * in11_data[in9_tmp + in11_size[0] * 5]) +
                0.074886599713069532 * in11_data[in9_tmp + in11_size[0] * 6]) +
               -0.028128400297956289 * in11_data[in9_tmp + in11_size[0] * 7]) +
              -0.023144557264819496 * in11_data[in9_tmp + in11_size[0] * 8]) +
             0.027345304241113474 * in11_data[in9_tmp + in11_size[0] * 9]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 243;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void ob_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
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
  in14_data = in14->data;
  in13_data = in13->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &xg_emlrtRTEI);
  i = in10->size[0];
  if (in14->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in13->size[0] == 1) {
        stride_0_0 = in12_size[0];
      } else {
        stride_0_0 = in13->size[0];
      }
    } else {
      stride_0_0 = in1->size[0];
    }
  } else {
    stride_0_0 = in14->size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in14->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in13->size[0] == 1) {
        in10->size[0] = in12_size[0];
      } else {
        in10->size[0] = in13->size[0];
      }
    } else {
      in10->size[0] = in1->size[0];
    }
  } else {
    in10->size[0] = in14->size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &xg_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in1->size[0] != 1);
  stride_4_0 = (in14->size[0] != 1);
  if (in14->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in13->size[0] == 1) {
        i = in12_size[0];
      } else {
        i = in13->size[0];
      }
    } else {
      i = in1->size[0];
    }
  } else {
    i = in14->size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in14->size[0] == 1) {
    if (in1->size[0] == 1) {
      if (in13->size[0] == 1) {
        loop_ub = in12_size[0];
      } else {
        loop_ub = in13->size[0];
      }
    } else {
      loop_ub = in1->size[0];
    }
  } else {
    loop_ub = in14->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 * (((0.14247836686832849 * in12_data[i * stride_1_0] +
                  -0.35417994346686843 * in13_data[i * stride_2_0]) +
                 0.075953154502951009 * in1_data[i * stride_3_0]) +
                0.6765157656337123 * in14_data[i * stride_4_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void oc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[121];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] = in9_data[i * stride_0_0] + in10 * in11_data[i * stride_1_0];
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 121;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void od_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[243];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((0.014588852784055396 * in11_data[in9_tmp] +
                    0.0020241978878893325 * in11_data[in9_tmp + in11_size[0]]) +
                   0.21780470845697167 *
                       in11_data[in9_tmp + in11_size[0] * 2]) +
                  0.12748953408543898 * in11_data[in9_tmp + in11_size[0] * 3]) +
                 0.22446177454631319 * in11_data[in9_tmp + in11_size[0] * 4]) +
                0.17872544912599031 * in11_data[in9_tmp + in11_size[0] * 5]) +
               0.075943447580965578 * in11_data[in9_tmp + in11_size[0] * 6]) +
              0.12948458791975614 * in11_data[in9_tmp + in11_size[0] * 7]) +
             0.029477447612619417 * in11_data[in9_tmp + in11_size[0] * 8]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 243;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void pb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  const real_T *in14_data;
  real_T *b_in10_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  st.prev = sp;
  st.tls = sp->tls;
  in14_data = in14->data;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &wg_emlrtRTEI);
  i = in10->size[0];
  if (in14->size[0] == 1) {
    if (in13->size[0] == 1) {
      stride_0_0 = in12_size[0];
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in14->size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in14->size[0] == 1) {
    if (in13->size[0] == 1) {
      in10->size[0] = in12_size[0];
    } else {
      in10->size[0] = in13->size[0];
    }
  } else {
    in10->size[0] = in14->size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &wg_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  stride_3_0 = (in14->size[0] != 1);
  if (in14->size[0] == 1) {
    if (in13->size[0] == 1) {
      i = in12_size[0];
    } else {
      i = in13->size[0];
    }
  } else {
    i = in14->size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in14->size[0] == 1) {
    if (in13->size[0] == 1) {
      loop_ub = in12_size[0];
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in14->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 * ((0.050943855353893744 * in12_data[i * stride_1_0] +
                 0.17558650498090711 * in13_data[i * stride_2_0]) +
                0.00070229612707574678 * in14_data[i * stride_3_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void pc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[121];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((((((0.016151472919007624 * in11_data[in9_tmp] +
                        0.080986850032429059 *
                            in11_data[in9_tmp + in11_size[0]]) +
                       0.12769162943069304 *
                           in11_data[in9_tmp + in11_size[0] * 2]) +
                      0.12348143593834805 *
                          in11_data[in9_tmp + in11_size[0] * 3]) +
                     0.233985125914011 *
                         in11_data[in9_tmp + in11_size[0] * 4]) +
                    -0.065959956833573682 *
                        in11_data[in9_tmp + in11_size[0] * 5]) +
                   -0.025652768594064328 *
                       in11_data[in9_tmp + in11_size[0] * 6]) +
                  -0.12589734638192471 *
                      in11_data[in9_tmp + in11_size[0] * 7]) +
                 -0.043076724903648438 *
                     in11_data[in9_tmp + in11_size[0] * 8]) +
                0.04973042479196705 * in11_data[in9_tmp + in11_size[0] * 9]) +
               0.10004735401793927 * in11_data[in9_tmp + in11_size[0] * 10]) +
              0.13786588067636232 * in11_data[in9_tmp + in11_size[0] * 11]) +
             -0.12235337700754625 * in11_data[in9_tmp + in11_size[0] * 12]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 121;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void qb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  real_T *b_in10_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &vg_emlrtRTEI);
  i = in10->size[0];
  if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      stride_0_0 = in12_size[0];
    } else {
      stride_0_0 = in1->size[0];
    }
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      in10->size[0] = in12_size[0];
    } else {
      in10->size[0] = in1->size[0];
    }
  } else {
    in10->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &vg_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in1->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      i = in12_size[0];
    } else {
      i = in1->size[0];
    }
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in13->size[0] == 1) {
    if (in1->size[0] == 1) {
      loop_ub = in12_size[0];
    } else {
      loop_ub = in1->size[0];
    }
  } else {
    loop_ub = in13->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] = in10_data[i * stride_0_0] +
                     in11 * ((2.2721142642901775 * in12_data[i * stride_1_0] +
                              -8.5268864479763984 * in1_data[i * stride_2_0]) +
                             6.8307721836862214 * in13_data[i * stride_3_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void qc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[121];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            (((((((((((0.013989212133617684 * in11_data[in9_tmp] +
                       -0.031574065179505 * in11_data[in9_tmp + in11_size[0]]) +
                      0.22718125132721581 *
                          in11_data[in9_tmp + in11_size[0] * 2]) +
                     0.12894864109967866 *
                         in11_data[in9_tmp + in11_size[0] * 3]) +
                    0.2216682589135277 *
                        in11_data[in9_tmp + in11_size[0] * 4]) +
                   0.19483682365424806 *
                       in11_data[in9_tmp + in11_size[0] * 5]) +
                  0.05740088404417653 * in11_data[in9_tmp + in11_size[0] * 6]) +
                 0.090083665426759552 * in11_data[in9_tmp + in11_size[0] * 7]) +
                0.015791532088442122 * in11_data[in9_tmp + in11_size[0] * 8]) +
               -0.018991315059091858 * in11_data[in9_tmp + in11_size[0] * 9]) +
              -0.08830926811918835 * in11_data[in9_tmp + in11_size[0] * 10]) +
             -0.11502562032988092 * in11_data[in9_tmp + in11_size[0] * 11]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 121;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void rb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in10;
  const real_T *in13_data;
  real_T *b_in10_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &ug_emlrtRTEI);
  i = in10->size[0];
  if (in13->size[0] == 1) {
    stride_0_0 = in12_size[0];
  } else {
    stride_0_0 = in13->size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in13->size[0] == 1) {
    in10->size[0] = in12_size[0];
  } else {
    in10->size[0] = in13->size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &ug_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  if (in13->size[0] == 1) {
    i = in12_size[0];
  } else {
    i = in13->size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in13->size[0] == 1) {
    loop_ub = in12_size[0];
  } else {
    loop_ub = in13->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] = in10_data[i * stride_0_0] +
                     in11 * (0.0361827600517026 * in12_data[i * stride_1_0] +
                             0.10854828015510781 * in13_data[i * stride_2_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void rc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[121];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((((0.013111957218440684 * in11_data[in9_tmp] +
                      -0.14640242659698269 *
                          in11_data[in9_tmp + in11_size[0]]) +
                     0.2471264389666796 *
                         in11_data[in9_tmp + in11_size[0] * 2]) +
                    0.13113752030800324 *
                        in11_data[in9_tmp + in11_size[0] * 3]) +
                   0.21705603469825827 *
                       in11_data[in9_tmp + in11_size[0] * 4]) +
                  0.286753671376032 * in11_data[in9_tmp + in11_size[0] * 5]) +
                 0.023233113391494219 * in11_data[in9_tmp + in11_size[0] * 6]) +
                0.052506772641993958 * in11_data[in9_tmp + in11_size[0] * 7]) +
               0.0028339515860099506 * in11_data[in9_tmp + in11_size[0] * 8]) +
              -0.0085024038519957122 * in11_data[in9_tmp + in11_size[0] * 9]) +
             0.069145370262066491 * in11_data[in9_tmp + in11_size[0] * 10]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 121;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void sb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2])
{
  emlrtStack st;
  emxArray_real_T *in10;
  real_T *b_in10_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in10, 1, &tg_emlrtRTEI);
  i = in10->size[0];
  if (in1->size[0] == 1) {
    stride_0_0 = in12_size[0];
  } else {
    stride_0_0 = in1->size[0];
  }
  if (stride_0_0 == 1) {
    in10->size[0] = *in10_size;
  } else if (in1->size[0] == 1) {
    in10->size[0] = in12_size[0];
  } else {
    in10->size[0] = in1->size[0];
  }
  emxEnsureCapacity_real_T(sp, in10, i, &tg_emlrtRTEI);
  b_in10_data = in10->data;
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  stride_2_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    i = in12_size[0];
  } else {
    i = in1->size[0];
  }
  if (i == 1) {
    loop_ub = *in10_size;
  } else if (in1->size[0] == 1) {
    loop_ub = in12_size[0];
  } else {
    loop_ub = in1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] = in10_data[i * stride_0_0] +
                     in11 * (-0.01988527319182291 * in12_data[i * stride_1_0] +
                             0.11637263332969652 * in1_data[i * stride_2_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in10, in1);
  emxFree_real_T(sp, &in10);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void sc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[121];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            (((((((((0.015601405261088616 * in11_data[in9_tmp] +
                     0.26811643933275847 * in11_data[in9_tmp + in11_size[0]]) +
                    0.1883053124587791 *
                        in11_data[in9_tmp + in11_size[0] * 2]) +
                   0.12491991374610308 *
                       in11_data[in9_tmp + in11_size[0] * 3]) +
                  0.2302302127814522 * in11_data[in9_tmp + in11_size[0] * 4]) +
                 -0.13603122161327985 * in11_data[in9_tmp + in11_size[0] * 5]) +
                0.074886599713069532 * in11_data[in9_tmp + in11_size[0] * 6]) +
               -0.028128400297956289 * in11_data[in9_tmp + in11_size[0] * 7]) +
              -0.023144557264819496 * in11_data[in9_tmp + in11_size[0] * 8]) +
             0.027345304241113474 * in11_data[in9_tmp + in11_size[0] * 9]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 121;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void tb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in10_data;
  real_T b_in10_data[121];
  int32_T b_in10_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in12_size[0] == 1) {
    b_in10_size = *in10_size;
  } else {
    b_in10_size = in12_size[0];
  }
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    loop_ub = *in10_size;
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in10_data[i] =
        in10_data[i * stride_0_0] + in11 * in12_data[i * stride_1_0];
  }
  c_in10_data.data = &b_in10_data[0];
  c_in10_data.size = &b_in10_size;
  c_in10_data.allocatedSize = 121;
  c_in10_data.numDimensions = 1;
  c_in10_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, &c_in10_data,
                        in1);
}

void tc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in9_data;
  real_T b_in9_data[121];
  int32_T b_in9_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in11_size[0] == 1) {
    b_in9_size = *in9_size;
  } else {
    b_in9_size = in11_size[0];
  }
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    loop_ub = *in9_size;
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in9_tmp;
    in9_tmp = i * stride_1_0;
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((0.014588852784055396 * in11_data[in9_tmp] +
                    0.0020241978878893325 * in11_data[in9_tmp + in11_size[0]]) +
                   0.21780470845697167 *
                       in11_data[in9_tmp + in11_size[0] * 2]) +
                  0.12748953408543898 * in11_data[in9_tmp + in11_size[0] * 3]) +
                 0.22446177454631319 * in11_data[in9_tmp + in11_size[0] * 4]) +
                0.17872544912599031 * in11_data[in9_tmp + in11_size[0] * 5]) +
               0.075943447580965578 * in11_data[in9_tmp + in11_size[0] * 6]) +
              0.12948458791975614 * in11_data[in9_tmp + in11_size[0] * 7]) +
             0.029477447612619417 * in11_data[in9_tmp + in11_size[0] * 8]);
  }
  c_in9_data.data = &b_in9_data[0];
  c_in9_data.size = &b_in9_size;
  c_in9_data.allocatedSize = 121;
  c_in9_data.numDimensions = 1;
  c_in9_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn4(&st, in3, in4, in5, in6, in7, in8, &c_in9_data, in1);
}

void ub_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in10_data;
  real_T b_in10_data[121];
  int32_T b_in10_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in12_size[0] == 1) {
    b_in10_size = *in10_size;
  } else {
    b_in10_size = in12_size[0];
  }
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    loop_ub = *in10_size;
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in10_tmp;
    in10_tmp = i * stride_1_0;
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 *
            ((((((((((((0.016151472919007624 * in12_data[in10_tmp] +
                        0.080986850032429059 *
                            in12_data[in10_tmp + in12_size[0]]) +
                       0.12769162943069304 *
                           in12_data[in10_tmp + in12_size[0] * 2]) +
                      0.12348143593834805 *
                          in12_data[in10_tmp + in12_size[0] * 3]) +
                     0.233985125914011 *
                         in12_data[in10_tmp + in12_size[0] * 4]) +
                    -0.065959956833573682 *
                        in12_data[in10_tmp + in12_size[0] * 5]) +
                   -0.025652768594064328 *
                       in12_data[in10_tmp + in12_size[0] * 6]) +
                  -0.12589734638192471 *
                      in12_data[in10_tmp + in12_size[0] * 7]) +
                 -0.043076724903648438 *
                     in12_data[in10_tmp + in12_size[0] * 8]) +
                0.04973042479196705 * in12_data[in10_tmp + in12_size[0] * 9]) +
               0.10004735401793927 * in12_data[in10_tmp + in12_size[0] * 10]) +
              0.13786588067636232 * in12_data[in10_tmp + in12_size[0] * 11]) +
             -0.12235337700754625 * in12_data[in10_tmp + in12_size[0] * 12]);
  }
  c_in10_data.data = &b_in10_data[0];
  c_in10_data.size = &b_in10_size;
  c_in10_data.allocatedSize = 121;
  c_in10_data.numDimensions = 1;
  c_in10_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, &c_in10_data,
                        in1);
}

void uc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &hh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &hh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  stride_8_0 = (in11_size[0] != 1);
  stride_9_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((((2.1573890074940536 * in11_data[i * stride_1_0] +
                    23.807122198095804 * in12_data[i * stride_2_0]) +
                   0.88627792492165558 * in13_data[i * stride_3_0]) +
                  13.139130397598764 *
                      in11_data[i * stride_4_0 + in11_size[0]]) +
                 -2.6044157092877147 *
                     in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                -5.1938599497838727 *
                    in11_data[i * stride_6_0 + in11_size[0] * 3]) +
               -20.412340711541507 *
                   in11_data[i * stride_7_0 + in11_size[0] * 4]) +
              -12.300856252505723 *
                  in11_data[i * stride_8_0 + in11_size[0] * 5]) +
             1.5215530950085394 * in11_data[i * stride_9_0 + in11_size[0] * 6]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void vb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in10_data;
  real_T b_in10_data[121];
  int32_T b_in10_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in12_size[0] == 1) {
    b_in10_size = *in10_size;
  } else {
    b_in10_size = in12_size[0];
  }
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    loop_ub = *in10_size;
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in10_tmp;
    in10_tmp = i * stride_1_0;
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 *
            (((((((((((0.013989212133617684 * in12_data[in10_tmp] +
                       -0.031574065179505 *
                           in12_data[in10_tmp + in12_size[0]]) +
                      0.22718125132721581 *
                          in12_data[in10_tmp + in12_size[0] * 2]) +
                     0.12894864109967866 *
                         in12_data[in10_tmp + in12_size[0] * 3]) +
                    0.2216682589135277 *
                        in12_data[in10_tmp + in12_size[0] * 4]) +
                   0.19483682365424806 *
                       in12_data[in10_tmp + in12_size[0] * 5]) +
                  0.05740088404417653 *
                      in12_data[in10_tmp + in12_size[0] * 6]) +
                 0.090083665426759552 *
                     in12_data[in10_tmp + in12_size[0] * 7]) +
                0.015791532088442122 * in12_data[in10_tmp + in12_size[0] * 8]) +
               -0.018991315059091858 * in12_data[in10_tmp + in12_size[0] * 9]) +
              -0.08830926811918835 * in12_data[in10_tmp + in12_size[0] * 10]) +
             -0.11502562032988092 * in12_data[in10_tmp + in12_size[0] * 11]);
  }
  c_in10_data.data = &b_in10_data[0];
  c_in10_data.size = &b_in10_size;
  c_in10_data.allocatedSize = 121;
  c_in10_data.numDimensions = 1;
  c_in10_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, &c_in10_data,
                        in1);
}

void vc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
  real_T *b_in9_data;
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
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &gh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &gh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  stride_8_0 = (in11_size[0] != 1);
  stride_9_0 = (in11_size[0] != 1);
  stride_10_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((((((((-1.2116979103438739 * in11_data[i * stride_1_0] +
                        -19.055818715595954 * in12_data[i * stride_2_0]) +
                       1.2630606753898752 * in13_data[i * stride_3_0]) +
                      -6.9139169691784579 *
                          in11_data[i * stride_4_0 + in11_size[0]]) +
                     -0.676462266509498 *
                         in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                    3.3678604450266079 *
                        in11_data[i * stride_6_0 + in11_size[0] * 3]) +
                   18.006751643125909 *
                       in11_data[i * stride_7_0 + in11_size[0] * 4]) +
                  6.83882892679428 *
                      in11_data[i * stride_8_0 + in11_size[0] * 5]) +
                 -1.0315164519219504 *
                     in11_data[i * stride_9_0 + in11_size[0] * 6]) +
                0.41291062321306227 *
                    in11_data[i * stride_10_0 + in11_size[0] * 7]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void wb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in10_data;
  real_T b_in10_data[121];
  int32_T b_in10_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in12_size[0] == 1) {
    b_in10_size = *in10_size;
  } else {
    b_in10_size = in12_size[0];
  }
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    loop_ub = *in10_size;
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in10_tmp;
    in10_tmp = i * stride_1_0;
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 *
            ((((((((((0.013111957218440684 * in12_data[in10_tmp] +
                      -0.14640242659698269 *
                          in12_data[in10_tmp + in12_size[0]]) +
                     0.2471264389666796 *
                         in12_data[in10_tmp + in12_size[0] * 2]) +
                    0.13113752030800324 *
                        in12_data[in10_tmp + in12_size[0] * 3]) +
                   0.21705603469825827 *
                       in12_data[in10_tmp + in12_size[0] * 4]) +
                  0.286753671376032 * in12_data[in10_tmp + in12_size[0] * 5]) +
                 0.023233113391494219 *
                     in12_data[in10_tmp + in12_size[0] * 6]) +
                0.052506772641993958 * in12_data[in10_tmp + in12_size[0] * 7]) +
               0.0028339515860099506 * in12_data[in10_tmp + in12_size[0] * 8]) +
              -0.0085024038519957122 * in12_data[in10_tmp + in12_size[0] * 9]) +
             0.069145370262066491 * in12_data[in10_tmp + in12_size[0] * 10]);
  }
  c_in10_data.data = &b_in10_data[0];
  c_in10_data.size = &b_in10_size;
  c_in10_data.allocatedSize = 121;
  c_in10_data.numDimensions = 1;
  c_in10_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, &c_in10_data,
                        in1);
}

void wc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &fh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &fh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  stride_8_0 = (in11_size[0] != 1);
  stride_9_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * ((((((((0.6130118256955932 * in11_data[i * stride_1_0] +
                       9.0888038916404632 * in12_data[i * stride_2_0]) +
                      -0.40737881562934486 * in13_data[i * stride_3_0]) +
                     1.7907333894903747 *
                         in11_data[i * stride_4_0 + in11_size[0]]) +
                    0.714927166761755 *
                        in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                   -1.438580857841723 *
                       in11_data[i * stride_6_0 + in11_size[0] * 3]) +
                  -8.26332931206474 *
                      in11_data[i * stride_7_0 + in11_size[0] * 4]) +
                 -1.5375705708088652 *
                     in11_data[i * stride_8_0 + in11_size[0] * 5]) +
                0.34538328275648716 *
                    in11_data[i * stride_9_0 + in11_size[0] * 6]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void xb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in10_data;
  real_T b_in10_data[121];
  int32_T b_in10_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in12_size[0] == 1) {
    b_in10_size = *in10_size;
  } else {
    b_in10_size = in12_size[0];
  }
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    loop_ub = *in10_size;
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in10_tmp;
    in10_tmp = i * stride_1_0;
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 *
            (((((((((0.015601405261088616 * in12_data[in10_tmp] +
                     0.26811643933275847 * in12_data[in10_tmp + in12_size[0]]) +
                    0.1883053124587791 *
                        in12_data[in10_tmp + in12_size[0] * 2]) +
                   0.12491991374610308 *
                       in12_data[in10_tmp + in12_size[0] * 3]) +
                  0.2302302127814522 * in12_data[in10_tmp + in12_size[0] * 4]) +
                 -0.13603122161327985 *
                     in12_data[in10_tmp + in12_size[0] * 5]) +
                0.074886599713069532 * in12_data[in10_tmp + in12_size[0] * 6]) +
               -0.028128400297956289 * in12_data[in10_tmp + in12_size[0] * 7]) +
              -0.023144557264819496 * in12_data[in10_tmp + in12_size[0] * 8]) +
             0.027345304241113474 * in12_data[in10_tmp + in12_size[0] * 9]);
  }
  c_in10_data.data = &b_in10_data[0];
  c_in10_data.size = &b_in10_size;
  c_in10_data.allocatedSize = 121;
  c_in10_data.numDimensions = 1;
  c_in10_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, &c_in10_data,
                        in1);
}

void xc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &eh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &eh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  stride_8_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 * (((((((-0.50746350564169751 * in11_data[i * stride_1_0] +
                      -6.6313421986572374 * in12_data[i * stride_2_0]) +
                     -0.2527480100908801 * in13_data[i * stride_3_0]) +
                    -0.49526123800360955 *
                        in11_data[i * stride_4_0 + in11_size[0]]) +
                   0.29325255452538868 *
                       in11_data[i * stride_5_0 + in11_size[0] * 2]) +
                  1.440108693768281 *
                      in11_data[i * stride_6_0 + in11_size[0] * 3]) +
                 6.2379344986470562 *
                     in11_data[i * stride_7_0 + in11_size[0] * 4]) +
                0.72701920545269871 *
                    in11_data[i * stride_8_0 + in11_size[0] * 5]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void yb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2])
{
  emlrtStack st;
  emxArray_real_T c_in10_data;
  real_T b_in10_data[121];
  int32_T b_in10_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in12_size[0] == 1) {
    b_in10_size = *in10_size;
  } else {
    b_in10_size = in12_size[0];
  }
  stride_0_0 = (*in10_size != 1);
  stride_1_0 = (in12_size[0] != 1);
  if (in12_size[0] == 1) {
    loop_ub = *in10_size;
  } else {
    loop_ub = in12_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T in10_tmp;
    in10_tmp = i * stride_1_0;
    b_in10_data[i] =
        in10_data[i * stride_0_0] +
        in11 *
            ((((((((0.014588852784055396 * in12_data[in10_tmp] +
                    0.0020241978878893325 *
                        in12_data[in10_tmp + in12_size[0]]) +
                   0.21780470845697167 *
                       in12_data[in10_tmp + in12_size[0] * 2]) +
                  0.12748953408543898 *
                      in12_data[in10_tmp + in12_size[0] * 3]) +
                 0.22446177454631319 * in12_data[in10_tmp + in12_size[0] * 4]) +
                0.17872544912599031 * in12_data[in10_tmp + in12_size[0] * 5]) +
               0.075943447580965578 * in12_data[in10_tmp + in12_size[0] * 6]) +
              0.12948458791975614 * in12_data[in10_tmp + in12_size[0] * 7]) +
             0.029477447612619417 * in12_data[in10_tmp + in12_size[0] * 8]);
  }
  c_in10_data.data = &b_in10_data[0];
  c_in10_data.size = &b_in10_size;
  c_in10_data.allocatedSize = 121;
  c_in10_data.numDimensions = 1;
  c_in10_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_NOG_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, &c_in10_data,
                        in1);
}

void yc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *in9;
  const real_T *in12_data;
  const real_T *in13_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &in9, 1, &dh_emlrtRTEI);
  i = in9->size[0];
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        stride_0_0 = in11_size[0];
      } else {
        stride_0_0 = in12->size[0];
      }
    } else {
      stride_0_0 = in13->size[0];
    }
  } else {
    stride_0_0 = in11_size[0];
  }
  if (stride_0_0 == 1) {
    in9->size[0] = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        in9->size[0] = in11_size[0];
      } else {
        in9->size[0] = in12->size[0];
      }
    } else {
      in9->size[0] = in13->size[0];
    }
  } else {
    in9->size[0] = in11_size[0];
  }
  emxEnsureCapacity_real_T(sp, in9, i, &dh_emlrtRTEI);
  b_in9_data = in9->data;
  stride_0_0 = (*in9_size != 1);
  stride_1_0 = (in11_size[0] != 1);
  stride_2_0 = (in12->size[0] != 1);
  stride_3_0 = (in13->size[0] != 1);
  stride_4_0 = (in11_size[0] != 1);
  stride_5_0 = (in11_size[0] != 1);
  stride_6_0 = (in11_size[0] != 1);
  stride_7_0 = (in11_size[0] != 1);
  if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        i = in11_size[0];
      } else {
        i = in12->size[0];
      }
    } else {
      i = in13->size[0];
    }
  } else {
    i = in11_size[0];
  }
  if (i == 1) {
    loop_ub = *in9_size;
  } else if (in11_size[0] == 1) {
    if (in13->size[0] == 1) {
      if (in12->size[0] == 1) {
        loop_ub = in11_size[0];
      } else {
        loop_ub = in12->size[0];
      }
    } else {
      loop_ub = in13->size[0];
    }
  } else {
    loop_ub = in11_size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in9_data[i] =
        in9_data[i * stride_0_0] +
        in10 *
            ((((((-0.036284233962556589 * in11_data[i * stride_1_0] +
                  -1.0961675974272087 * in12_data[i * stride_2_0]) +
                 0.18260355043213311 * in13_data[i * stride_3_0]) +
                0.070822544441706839 *
                    in11_data[i * stride_4_0 + in11_size[0]]) +
               -0.023136470184824311 *
                   in11_data[i * stride_5_0 + in11_size[0] * 2]) +
              0.27112047263209327 *
                  in11_data[i * stride_6_0 + in11_size[0] * 3]) +
             1.3081337494229808 * in11_data[i * stride_7_0 + in11_size[0] * 4]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, in9, in1);
  emxFree_real_T(sp, &in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (function_handle.c) */
