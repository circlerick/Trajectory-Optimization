/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ntrp89.c
 *
 * Code generation for function 'ntrp89'
 *
 */

/* Include files */
#include "ntrp89.h"
#include "mtimes.h"
#include "objfunSTM_S_time_data.h"
#include "objfunSTM_S_time_emxutil.h"
#include "objfunSTM_S_time_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ji_emlrtRSI = {
    37,       /* lineNo */
    "ntrp89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ntrp89."
    "m" /* pathName */
};

static emlrtRSInfo ki_emlrtRSI = {
    94,            /* lineNo */
    "ypinterpWSS", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ntrp89."
    "m" /* pathName */
};

static emlrtRTEInfo he_emlrtRTEI = {
    28,       /* lineNo */
    1,        /* colNo */
    "ntrp89", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ntrp89."
    "m" /* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = {
    35,       /* lineNo */
    5,        /* colNo */
    "ntrp89", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ntrp89."
    "m" /* pName */
};

static emlrtRTEInfo je_emlrtRTEI = {
    30,       /* lineNo */
    20,       /* colNo */
    "ntrp89", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ntrp89."
    "m" /* pName */
};

/* Function Declarations */
static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               int32_T in2, real_T in3,
                               const emxArray_real_T *in4);

/* Function Definitions */
static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               int32_T in2, real_T in3,
                               const emxArray_real_T *in4)
{
  emxArray_real_T *b_in1;
  const real_T *in4_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in4_data = in4->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 1, &je_emlrtRTEI);
  i = b_in1->size[0];
  if (in4->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in4->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &je_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  if (in4->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0 + in1->size[0] * in2] +
                    in3 * in4_data[i * stride_1_0];
  }
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + in1->size[0] * in2] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void b_ntrp89(const emlrtStack *sp, const real_T tinterp[7], real_T t,
              const emxArray_real_T *y, real_T h, const emxArray_real_T *f,
              emxArray_real_T *yinterp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b;
  const real_T *y_data;
  real_T *b_data;
  real_T *yinterp_data;
  int32_T b_i;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  i = yinterp->size[0] * yinterp->size[1];
  yinterp->size[0] = y->size[0];
  yinterp->size[1] = 7;
  emxEnsureCapacity_real_T(sp, yinterp, i, &he_emlrtRTEI);
  yinterp_data = yinterp->data;
  b_i = y->size[0];
  for (i = 0; i < 7; i++) {
    for (k = 0; k < b_i; k++) {
      yinterp_data[k + yinterp->size[0] * i] = y_data[k];
    }
  }
  emxInit_real_T(sp, &b, 1, &ge_emlrtRTEI);
  for (k = 0; k < 7; k++) {
    real_T b_b[14];
    real_T c_b;
    real_T theta;
    st.site = &ei_emlrtRSI;
    theta = (tinterp[k] - t) / h;
    c_b = theta * theta;
    for (b_i = 0; b_i < 14; b_i++) {
      b_b[b_i] =
          ((((((dv1[b_i] * theta + dv2[b_i]) * theta + dv3[b_i]) * theta +
              dv4[b_i]) *
                 theta +
             dv5[b_i]) *
                theta +
            dv6[b_i]) *
               theta +
           dv7[b_i]) *
          c_b;
    }
    b_b[0] += theta;
    b_st.site = &fi_emlrtRSI;
    c_st.site = &lg_emlrtRSI;
    b_mtimes(&c_st, f, b_b, b);
    b_i = yinterp->size[0];
    if (yinterp->size[0] == b->size[0]) {
      i = b->size[0];
      b->size[0] = yinterp->size[0];
      emxEnsureCapacity_real_T(sp, b, i, &je_emlrtRTEI);
      b_data = b->data;
      for (i = 0; i < b_i; i++) {
        b_data[i] = yinterp_data[i + yinterp->size[0] * k] + h * b_data[i];
      }
      b_i = b->size[0];
      for (i = 0; i < b_i; i++) {
        yinterp_data[i + yinterp->size[0] * k] = b_data[i];
      }
    } else {
      st.site = &ei_emlrtRSI;
      i_binary_expand_op(&st, yinterp, k, h, b);
      yinterp_data = yinterp->data;
    }
  }
  emxFree_real_T(sp, &b);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void h_binary_expand_op(emxArray_real_T *in1, const emxArray_real_T *in2,
                        real_T in3, const emxArray_real_T *in4)
{
  const real_T *in2_data;
  const real_T *in4_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in4_data = in4->data;
  in2_data = in2->data;
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  if (in4->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2_data[i * stride_0_0] + in3 * in4_data[i * stride_1_0];
  }
}

void ntrp89(const emlrtStack *sp, const real_T tinterp[13], real_T t,
            const emxArray_real_T *y, real_T h, const emxArray_real_T *f,
            emxArray_real_T *yinterp, emxArray_real_T *ypinterp)
{
  static const real_T a[14] = {
      -257.17638183303194, -43.164410149300195, -3071.1526645460476,
      576.42492632855624,  -834.18863215760848, -4110.4786433053305,
      -2207.4577702808206, -4316.1918444317971, -1107.6907764769028,
      1550.5095760003185,  8687.3390494024752,  3950.8444152300617,
      -3911.4082561781111, 5093.7914123975379};
  static const real_T b_y[14] = {
      1063.6529741960794,  171.04229723781006,  12141.030064622986,
      -2344.1262780375259, 3233.571024510341,   16293.5378301937,
      8757.9284228164724,  17131.557450606597,  4398.0338486919081,
      -5889.5062630327548, -29151.027202276742, -16922.942192670169,
      10671.031937938378,  -19553.783914797084};
  static const real_T c_y[14] = {
      -1797.0661902099323, -272.34218145442475, -19267.936511319218,
      3865.6831236290818,  -4988.8301361290278, -25955.496895154945,
      -13968.594723514278, -27340.614301075977, -7022.146017831863,
      9034.3407186910481,  37749.874991265358,  28865.207882669885,
      -8823.0050697762053, 29920.925310210492};
  static const real_T d_y[14] = {
      1588.6962200294588,  220.84478046407781,  15548.703203795156,
      -3293.5552675289086, 3854.9686362366883,  21061.97900107746,
      11355.607667776296,  22245.71615813551,   5717.4181872200479,
      -7096.7299577195072, -23533.927777022225, -24869.972917706858,
      264.45260832309197,  -23064.200543080278};
  static const real_T e_y[14] = {
      -779.234644211861,   -94.616687333934209, -6609.9887248515242,
      1519.026743323318,   -1522.0850076533302, -9033.4057358675946,
      -4884.3585492806333, -9581.701012211317,  -2465.2161946422052,
      2964.5522347707165,  7124.6352622405229,  11245.150842910803,
      2866.3867479623218,  9250.8547248447139};
  static const real_T f_y[14] = {
      205.63410341493488,  19.67735835627299,   1355.4840144416237,
      -356.10016348302918, 268.34112341147824,  1882.3208650704457,
      1022.96831393467,    2011.6655269691898,  518.53272582135469,
      -606.67184800216125, -905.65887638547406, -2458.143156379489,
      -1195.4131108398426, -1762.6368763299743};
  static const real_T g_y[14] = {
      -25.506081385647779, -1.4411571205017197, -96.139382142975109,
      32.646915768507064,  -11.77700821854177,  -138.45642201373713,
      -76.093361451703785, -150.43197799220374, -38.931772782341064,
      44.505539292338035,  28.764552776085679,  189.85512594576102,
      127.95514257036626,  115.04988675459404};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b;
  real_T b_b[14];
  const real_T *y_data;
  real_T theta;
  real_T *b_data;
  real_T *yinterp_data;
  int32_T b_i;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  i = yinterp->size[0] * yinterp->size[1];
  yinterp->size[0] = y->size[0];
  yinterp->size[1] = 13;
  emxEnsureCapacity_real_T(sp, yinterp, i, &he_emlrtRTEI);
  yinterp_data = yinterp->data;
  b_i = y->size[0];
  for (i = 0; i < 13; i++) {
    for (k = 0; k < b_i; k++) {
      yinterp_data[k + yinterp->size[0] * i] = y_data[k];
    }
  }
  emxInit_real_T(sp, &b, 1, &ge_emlrtRTEI);
  for (k = 0; k < 13; k++) {
    real_T c_b;
    st.site = &ei_emlrtRSI;
    theta = (tinterp[k] - t) / h;
    c_b = theta * theta;
    for (b_i = 0; b_i < 14; b_i++) {
      b_b[b_i] =
          ((((((dv1[b_i] * theta + dv2[b_i]) * theta + dv3[b_i]) * theta +
              dv4[b_i]) *
                 theta +
             dv5[b_i]) *
                theta +
            dv6[b_i]) *
               theta +
           dv7[b_i]) *
          c_b;
    }
    b_b[0] += theta;
    b_st.site = &fi_emlrtRSI;
    c_st.site = &lg_emlrtRSI;
    b_mtimes(&c_st, f, b_b, b);
    b_i = yinterp->size[0];
    if (yinterp->size[0] == b->size[0]) {
      i = b->size[0];
      b->size[0] = yinterp->size[0];
      emxEnsureCapacity_real_T(sp, b, i, &je_emlrtRTEI);
      b_data = b->data;
      for (i = 0; i < b_i; i++) {
        b_data[i] = yinterp_data[i + yinterp->size[0] * k] + h * b_data[i];
      }
      b_i = b->size[0];
      for (i = 0; i < b_i; i++) {
        yinterp_data[i + yinterp->size[0] * k] = b_data[i];
      }
    } else {
      st.site = &ei_emlrtRSI;
      i_binary_expand_op(&st, yinterp, k, h, b);
      yinterp_data = yinterp->data;
    }
  }
  i = ypinterp->size[0] * ypinterp->size[1];
  ypinterp->size[0] = yinterp->size[0];
  ypinterp->size[1] = 13;
  emxEnsureCapacity_real_T(sp, ypinterp, i, &ie_emlrtRTEI);
  yinterp_data = ypinterp->data;
  b_i = yinterp->size[0] * 13;
  for (i = 0; i < b_i; i++) {
    yinterp_data[i] = 0.0;
  }
  for (k = 0; k < 13; k++) {
    st.site = &ji_emlrtRSI;
    theta = (tinterp[k] - t) / h;
    for (b_i = 0; b_i < 14; b_i++) {
      b_b[b_i] = ((((((a[b_i] * theta + b_y[b_i]) * theta + c_y[b_i]) * theta +
                     d_y[b_i]) *
                        theta +
                    e_y[b_i]) *
                       theta +
                   f_y[b_i]) *
                      theta +
                  g_y[b_i]) *
                 theta;
    }
    b_b[0]++;
    b_st.site = &ki_emlrtRSI;
    c_st.site = &lg_emlrtRSI;
    b_mtimes(&c_st, f, b_b, b);
    b_data = b->data;
    b_i = b->size[0];
    for (i = 0; i < b_i; i++) {
      yinterp_data[i + ypinterp->size[0] * k] = b_data[i];
    }
  }
  emxFree_real_T(sp, &b);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (ntrp89.c) */
