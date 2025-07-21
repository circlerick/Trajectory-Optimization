/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfun_S_time_api.c
 *
 * Code generation for function '_coder_objfun_S_time_api'
 *
 */

/* Include files */
#include "_coder_objfun_S_time_api.h"
#include "objfun_S_time.h"
#include "objfun_S_time_data.h"
#include "objfun_S_time_emxutil.h"
#include "objfun_S_time_mexutil.h"
#include "objfun_S_time_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo id_emlrtRTEI = {
    1,                          /* lineNo */
    1,                          /* colNo */
    "_coder_objfun_S_time_api", /* fName */
    ""                          /* pName */
};

static const char_T *sv[12] = {"Tmax",   "g",     "mu",    "RE",
                               "RM",     "c",     "Earth", "Moon",
                               "NSTATE", "shoot", "g0_x",  "EPS"};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_char_T *ret);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_physical,
                               const char_T *identifier, struct_T *y);

static const mxArray *c_emlrt_marshallOut(const struct_T *u);

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct_T *y);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2]);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[5]);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lam0,
                               const char_T *identifier, emxArray_real_T *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_physical,
                               const char_T *identifier, struct0_T *y);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct0_T *y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *boundary,
                               const char_T *identifier, struct1_T *y);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct1_T *y);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *par,
                               const char_T *identifier, struct2_T *y);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct2_T *y);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y);

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static real_T u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[2]);

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[5]);

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  real_T *ret_data;
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_char_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  char_T *ret_data;
  const boolean_T bv[2] = {false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_char_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret_data[0], 1, false);
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_physical,
                               const char_T *identifier, struct_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(b_physical), &thisId, y);
  emlrtDestroyArray(&b_physical);
}

static const mxArray *c_emlrt_marshallOut(const struct_T *u)
{
  static const int32_T i = 2;
  static const int32_T i1 = 2;
  static const int32_T i2 = 5;
  static const char_T *b_sv[12] = {"Tmax",   "g",     "mu",    "RE",
                                   "RM",     "c",     "Earth", "Moon",
                                   "NSTATE", "shoot", "g0_x",  "EPS"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 12, (const char_T **)&b_sv[0]));
  emlrtSetFieldR2017b(y, 0, "Tmax", b_emlrt_marshallOut(u->Tmax), 0);
  emlrtSetFieldR2017b(y, 0, "g", b_emlrt_marshallOut(u->g), 1);
  emlrtSetFieldR2017b(y, 0, "mu", b_emlrt_marshallOut(u->mu), 2);
  emlrtSetFieldR2017b(y, 0, "RE", b_emlrt_marshallOut(u->RE), 3);
  emlrtSetFieldR2017b(y, 0, "RM", b_emlrt_marshallOut(u->RM), 4);
  emlrtSetFieldR2017b(y, 0, "c", b_emlrt_marshallOut(u->c), 5);
  b_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->Earth[0];
  pData[1] = u->Earth[1];
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "Earth", b_y, 6);
  c_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i1, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->Moon[0];
  pData[1] = u->Moon[1];
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "Moon", c_y, 7);
  emlrtSetFieldR2017b(y, 0, "NSTATE", b_emlrt_marshallOut(u->NSTATE), 8);
  emlrtSetFieldR2017b(y, 0, "shoot", b_emlrt_marshallOut(u->shoot), 9);
  d_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i2, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (b_i = 0; b_i < 5; b_i++) {
    pData[b_i] = u->g0_x[b_i];
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "g0_x", d_y, 10);
  emlrtSetFieldR2017b(y, 0, "EPS", b_emlrt_marshallOut(u->EPS), 11);
  return y;
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  real_T *ret_data;
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct_T *y)
{
  static const int32_T dims = 0;
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 12,
                         (const char_T **)&sv[0], 0U, (const void *)&dims);
  thisId.fIdentifier = "Tmax";
  y->Tmax = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "Tmax")),
      &thisId);
  thisId.fIdentifier = "g";
  y->g = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "g")),
      &thisId);
  thisId.fIdentifier = "mu";
  y->mu = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "mu")),
      &thisId);
  thisId.fIdentifier = "RE";
  y->RE = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "RE")),
      &thisId);
  thisId.fIdentifier = "RM";
  y->RM = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "RM")),
      &thisId);
  thisId.fIdentifier = "c";
  y->c = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "c")),
      &thisId);
  thisId.fIdentifier = "Earth";
  f_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "Earth")),
      &thisId, y->Earth);
  thisId.fIdentifier = "Moon";
  f_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "Moon")),
      &thisId, y->Moon);
  thisId.fIdentifier = "NSTATE";
  y->NSTATE = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "NSTATE")),
      &thisId);
  thisId.fIdentifier = "shoot";
  y->shoot = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "shoot")),
      &thisId);
  thisId.fIdentifier = "g0_x";
  g_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "g0_x")),
      &thisId, y->g0_x);
  thisId.fIdentifier = "EPS";
  y->EPS = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "EPS")),
      &thisId);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 1);
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[5])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lam0,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  i_emlrt_marshallIn(sp, emlrtAlias(lam0), &thisId, y);
  emlrtDestroyArray(&lam0);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_physical,
                               const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  k_emlrt_marshallIn(sp, emlrtAlias(b_physical), &thisId, y);
  emlrtDestroyArray(&b_physical);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 12,
                         (const char_T **)&sv[0], 0U, (const void *)&dims);
  thisId.fIdentifier = "Tmax";
  y->Tmax = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "Tmax")),
      &thisId);
  thisId.fIdentifier = "g";
  y->g = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "g")),
      &thisId);
  thisId.fIdentifier = "mu";
  y->mu = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "mu")),
      &thisId);
  thisId.fIdentifier = "RE";
  y->RE = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "RE")),
      &thisId);
  thisId.fIdentifier = "RM";
  y->RM = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "RM")),
      &thisId);
  thisId.fIdentifier = "c";
  y->c = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "c")),
      &thisId);
  thisId.fIdentifier = "Earth";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "Earth")),
      &thisId, y->Earth);
  thisId.fIdentifier = "Moon";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "Moon")),
      &thisId, y->Moon);
  thisId.fIdentifier = "NSTATE";
  y->NSTATE = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "NSTATE")),
      &thisId);
  thisId.fIdentifier = "shoot";
  y->shoot = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "shoot")),
      &thisId);
  thisId.fIdentifier = "g0_x";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "g0_x")),
      &thisId, y->g0_x);
  thisId.fIdentifier = "EPS";
  y->EPS = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "EPS")),
      &thisId);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *boundary,
                               const char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(boundary), &thisId, y);
  emlrtDestroyArray(&boundary);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[8] = {"T0", "Tfin",  "A",       "Xf",
                                        "X0", "Sigma", "Pigreco", "g0_xx"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 8,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "T0";
  y->T0 = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "T0")),
      &thisId);
  thisId.fIdentifier = "Tfin";
  y->Tfin = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "Tfin")),
      &thisId);
  thisId.fIdentifier = "A";
  o_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "A")),
      &thisId, y->A);
  thisId.fIdentifier = "Xf";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "Xf")),
      &thisId, y->Xf);
  thisId.fIdentifier = "X0";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "X0")),
      &thisId, y->X0);
  thisId.fIdentifier = "Sigma";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "Sigma")),
      &thisId, y->Sigma);
  thisId.fIdentifier = "Pigreco";
  o_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "Pigreco")),
      &thisId, y->Pigreco);
  thisId.fIdentifier = "g0_xx";
  o_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "g0_xx")),
      &thisId, y->g0_xx);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *par,
                               const char_T *identifier, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  q_emlrt_marshallIn(sp, emlrtAlias(par), &thisId, y);
  emlrtDestroyArray(&par);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct2_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[12] = {"Nint",   "ITERS", "JNET", "problem",
                                         "steps",  "val1",  "val2", "box_lb",
                                         "box_ub", "tU",    "lU",   "vmax"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 12,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "Nint";
  y->Nint = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "Nint")),
      &thisId);
  thisId.fIdentifier = "ITERS";
  y->ITERS = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "ITERS")),
      &thisId);
  thisId.fIdentifier = "JNET";
  y->JNET = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "JNET")),
      &thisId);
  thisId.fIdentifier = "problem";
  r_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "problem")),
      &thisId, y->problem);
  thisId.fIdentifier = "steps";
  s_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "steps")),
      &thisId, y->steps);
  thisId.fIdentifier = "val1";
  y->val1 = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "val1")),
      &thisId);
  thisId.fIdentifier = "val2";
  y->val2 = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "val2")),
      &thisId);
  thisId.fIdentifier = "box_lb";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "box_lb")),
      &thisId, y->box_lb);
  thisId.fIdentifier = "box_ub";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "box_ub")),
      &thisId, y->box_ub);
  thisId.fIdentifier = "tU";
  y->tU = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "tU")),
      &thisId);
  thisId.fIdentifier = "lU";
  y->lU = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "lU")),
      &thisId);
  thisId.fIdentifier = "vmax";
  y->vmax = e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "vmax")),
      &thisId);
  emlrtDestroyArray(&u);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims = 2;
  real_T(*r)[2];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[2])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[5])
{
  static const int32_T dims = 5;
  real_T(*r)[5];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[5])emlrtMxGetData(src);
  for (i = 0; i < 5; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  real_T *ret_data;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

void MEXGlobalSyncInFunction(const emlrtStack *sp)
{
  const mxArray *tmp;
  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("physical");
  if (tmp != NULL) {
    c_emlrt_marshallIn(sp, tmp, "physical", &physical);
    physical_dirty = 0U;
  }
}

void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck)
{
  /* Marshall out global variables */
  if (skipDirtyCheck || (physical_dirty != 0U)) {
    emlrtPutGlobalVariable("physical", c_emlrt_marshallOut(&physical));
  }
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  MEXGlobalSyncInFunction(sp);
  physical_dirty = 0U;
}

void emlrt_synchGlobalsToML(const emlrtStack *sp)
{
  (void)sp;
  MEXGlobalSyncOutFunction(false);
}

void objfun_S_time_api(objfun_S_timeStackData *SD, const mxArray *const prhs[5],
                       int32_T nlhs, const mxArray *plhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X0;
  emxArray_real_T *lam0;
  emxArray_real_T *states;
  emxArray_real_T *times;
  struct0_T b_physical;
  struct1_T boundary;
  struct2_T par;
  real_T obj;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Marshall function inputs */
  emxInit_real_T(&st, &lam0, 1, &id_emlrtRTEI);
  lam0->canFreeData = false;
  h_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "lam0", lam0);
  emxInit_real_T(&st, &X0, 1, &id_emlrtRTEI);
  X0->canFreeData = false;
  h_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X0", X0);
  emxInitStruct_struct0_T(&st, &b_physical, &id_emlrtRTEI);
  j_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "physical", &b_physical);
  emxInitStruct_struct1_T(&st, &boundary, &id_emlrtRTEI);
  m_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "boundary", &boundary);
  emxInitStruct_struct2_T(&st, &par, &id_emlrtRTEI);
  p_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "par", &par);
  /* Marshall in global variables */
  MEXGlobalSyncInFunction(&st);
  /* Invoke the target function */
  emxInit_real_T(&st, &states, 2, &id_emlrtRTEI);
  emxInit_real_T(&st, &times, 1, &id_emlrtRTEI);
  objfun_S_time(SD, &st, lam0, X0, &b_physical, &boundary, &par, &obj, states,
                times);
  emxFreeStruct_struct2_T(&st, &par);
  emxFreeStruct_struct1_T(&st, &boundary);
  emxFreeStruct_struct0_T(&st, &b_physical);
  emxFree_real_T(&st, &X0);
  emxFree_real_T(&st, &lam0);
  /* Marshall out global variables */
  MEXGlobalSyncOutFunction(true);
  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(obj);
  if (nlhs > 1) {
    states->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(states);
  }
  emxFree_real_T(&st, &states);
  if (nlhs > 2) {
    times->canFreeData = false;
    plhs[2] = e_emlrt_marshallOut(times);
  }
  emxFree_real_T(&st, &times);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_objfun_S_time_api.c) */
