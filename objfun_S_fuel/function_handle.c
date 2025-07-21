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
#include "objfun_S_fuel.h"
#include "objfun_S_fuel_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  real_T *in1_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in1_data = in1->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] = in9[i] +
               in10 * ((((((((2.1573890074940536 * in11[i] +
                              23.807122198095804 * in12_data[i * stride_0_0]) +
                             0.88627792492165558 * in1_data[i * stride_1_0]) +
                            13.139130397598764 * in11[i + 11]) +
                           -2.6044157092877147 * in11[i + 22]) +
                          -5.1938599497838727 * in11[i + 33]) +
                         -20.412340711541507 * in11[i + 44]) +
                        -12.300856252505723 * in11[i + 55]) +
                       1.5215530950085394 * in11[i + 66]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void g_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] +
        in10 * (((((((((-1.2116979103438739 * in11[i] +
                        -19.055818715595954 * in12_data[i * stride_0_0]) +
                       1.2630606753898752 * in13_data[i * stride_1_0]) +
                      -6.9139169691784579 * in11[i + 11]) +
                     -0.676462266509498 * in11[i + 22]) +
                    3.3678604450266079 * in11[i + 33]) +
                   18.006751643125909 * in11[i + 44]) +
                  6.83882892679428 * in11[i + 55]) +
                 -1.0315164519219504 * in11[i + 66]) +
                0.41291062321306227 * in11[i + 77]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void h_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] = in9[i] +
               in10 * ((((((((0.6130118256955932 * in11[i] +
                              9.0888038916404632 * in12_data[i * stride_0_0]) +
                             -0.40737881562934486 * in13_data[i * stride_1_0]) +
                            1.7907333894903747 * in11[i + 11]) +
                           0.714927166761755 * in11[i + 22]) +
                          -1.438580857841723 * in11[i + 33]) +
                         -8.26332931206474 * in11[i + 44]) +
                        -1.5375705708088652 * in11[i + 55]) +
                       0.34538328275648716 * in11[i + 66]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] = in9[i] +
               in10 * (((((((-0.50746350564169751 * in11[i] +
                             -6.6313421986572374 * in12_data[i * stride_0_0]) +
                            -0.2527480100908801 * in13_data[i * stride_1_0]) +
                           -0.49526123800360955 * in11[i + 11]) +
                          0.29325255452538868 * in11[i + 22]) +
                         1.440108693768281 * in11[i + 33]) +
                        6.2379344986470562 * in11[i + 44]) +
                       0.72701920545269871 * in11[i + 55]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] + in10 * ((((((-0.036284233962556589 * in11[i] +
                              -1.0961675974272087 * in12_data[i * stride_0_0]) +
                             0.18260355043213311 * in13_data[i * stride_1_0]) +
                            0.070822544441706839 * in11[i + 11]) +
                           -0.023136470184824311 * in11[i + 22]) +
                          0.27112047263209327 * in11[i + 33]) +
                         1.3081337494229808 * in11[i + 44]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] + in10 * (((((-0.026091134357549235 * in11[i] +
                             0.033333333333333333 * in12_data[i * stride_0_0]) +
                            -0.1652504006638105 * in13_data[i * stride_1_0]) +
                           0.034346641183686168 * in11[i + 11]) +
                          0.1595758283215209 * in11[i + 22]) +
                         0.21408573218281934 * in11[i + 33]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] + in10 * ((((0.048226773224658105 * in11[i] +
                            0.039485599804954 * in12_data[i * stride_0_0]) +
                           0.10588511619346581 * in13_data[i * stride_1_0]) +
                          -0.021520063204743093 * in11[i + 11]) +
                         -0.10453742601833482 * in11[i + 22]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] + in10 * (((0.07125 * in11[i] +
                           0.32688424515752457 * in12_data[i * stride_0_0]) +
                          0.11561575484247544 * in13_data[i * stride_1_0]) +
                         -0.03375 * in11[i + 11]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] + in10 * ((0.071111111111111111 * in11[i] +
                          0.32799092876058983 * in12_data[i * stride_0_0]) +
                         0.24089796012829906 * in13_data[i * stride_1_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  real_T *in1_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  in1_data = in1->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_2_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] + in10 * (((0.14247836686832849 * in11[i] +
                           -0.35417994346686843 * in12_data[i * stride_0_0]) +
                          0.075953154502951009 * in1_data[i * stride_1_0]) +
                         0.6765157656337123 * in13_data[i * stride_2_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12,
                        const emxArray_real_T *in13)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  const real_T *in13_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in13_data = in13->data;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  stride_1_0 = (in13->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] + in10 * ((0.050943855353893744 * in11[i] +
                          0.17558650498090711 * in12_data[i * stride_0_0]) +
                         0.00070229612707574678 * in13_data[i * stride_1_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void q_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  real_T *in1_data;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  in1_data = in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in12->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] + in10 * ((2.2721142642901775 * in11[i] +
                          -8.5268864479763984 * in1_data[i * stride_0_0]) +
                         6.8307721836862214 * in12_data[i * stride_1_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void r_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154], const emxArray_real_T *in12)
{
  emlrtStack st;
  real_T b_in9[11];
  const real_T *in12_data;
  int32_T i;
  int32_T stride_0_0;
  st.prev = sp;
  st.tls = sp->tls;
  in12_data = in12->data;
  stride_0_0 = (in12->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] =
        in9[i] + in10 * (0.0361827600517026 * in11[i] +
                         0.10854828015510781 * in12_data[i * stride_0_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

void s_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const real_T in9[11], real_T in10,
                        const real_T in11[154])
{
  emlrtStack st;
  real_T b_in9[11];
  real_T *in1_data;
  int32_T i;
  int32_T stride_0_0;
  st.prev = sp;
  st.tls = sp->tls;
  in1_data = in1->data;
  stride_0_0 = (in1->size[0] != 1);
  for (i = 0; i < 11; i++) {
    b_in9[i] = in9[i] + in10 * (-0.01988527319182291 * in11[i] +
                                0.11637263332969652 * in1_data[i * stride_0_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  objfun_S_fuel_anonFcn2(&st, in3, in4, in5, in6, in7, in8, b_in9, in1);
}

/* End of code generation (function_handle.c) */
