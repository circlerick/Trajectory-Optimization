/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfunSTM_S_fuel_api.c
 *
 * Code generation for function '_coder_objfunSTM_S_fuel_api'
 *
 */

/* Include files */
#include "_coder_objfunSTM_S_fuel_api.h"
#include "objfunSTM_S_fuel.h"
#include "objfunSTM_S_fuel_data.h"
#include "objfunSTM_S_fuel_emxutil.h"
#include "objfunSTM_S_fuel_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo td_emlrtRTEI = {
    1,                             /* lineNo */
    1,                             /* colNo */
    "_coder_objfunSTM_S_fuel_api", /* fName */
    ""                             /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const struct0_T *u);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_physical,
                               const char_T *identifier, struct0_T *y);

static const mxArray *c_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T *u_size);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct0_T *y);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2]);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[5]);

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lam0,
                                   const char_T *identifier))[5];

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[5];

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *boundary,
                               const char_T *identifier, struct1_T *y);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct1_T *y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[25]);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[20]);

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[2]);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[5]);

static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[5];

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[25]);

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[20]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const struct0_T *u)
{
  static const int32_T i = 2;
  static const int32_T i1 = 2;
  static const int32_T i2 = 5;
  static const char_T *sv[12] = {"Tmax",   "g",     "mu",    "RE",
                                 "RM",     "c",     "Earth", "Moon",
                                 "NSTATE", "shoot", "g0_x",  "EPS"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 12, (const char_T **)&sv[0]));
  b_y = NULL;
  m = emlrtCreateDoubleScalar(u->Tmax);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "Tmax", b_y, 0);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(u->g);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "g", c_y, 1);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(u->mu);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "mu", d_y, 2);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u->RE);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "RE", e_y, 3);
  f_y = NULL;
  m = emlrtCreateDoubleScalar(u->RM);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "RM", f_y, 4);
  g_y = NULL;
  m = emlrtCreateDoubleScalar(u->c);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "c", g_y, 5);
  h_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->Earth[0];
  pData[1] = u->Earth[1];
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "Earth", h_y, 6);
  i_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i1, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->Moon[0];
  pData[1] = u->Moon[1];
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, "Moon", i_y, 7);
  j_y = NULL;
  m = emlrtCreateDoubleScalar(u->NSTATE);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, "NSTATE", j_y, 8);
  k_y = NULL;
  m = emlrtCreateDoubleScalar(u->shoot);
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, "shoot", k_y, 9);
  l_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i2, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (b_i = 0; b_i < 5; b_i++) {
    pData[b_i] = u->g0_x[b_i];
  }
  emlrtAssign(&l_y, m);
  emlrtSetFieldR2017b(y, 0, "g0_x", l_y, 10);
  m_y = NULL;
  m = emlrtCreateDoubleScalar(u->EPS);
  emlrtAssign(&m_y, m);
  emlrtSetFieldR2017b(y, 0, "EPS", m_y, 11);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_physical,
                               const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(b_physical), &thisId, y);
  emlrtDestroyArray(&b_physical);
}

static const mxArray *c_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T *u_size)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, u_size, 1);
  emlrtAssign(&y, m);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[12] = {"Tmax",   "g",     "mu",    "RE",
                                         "RM",     "c",     "Earth", "Moon",
                                         "NSTATE", "shoot", "g0_x",  "EPS"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 12,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
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
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[5])
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lam0,
                                   const char_T *identifier))[5]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[5];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = i_emlrt_marshallIn(sp, emlrtAlias(lam0), &thisId);
  emlrtDestroyArray(&lam0);
  return y;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[5]
{
  real_T(*y)[5];
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *boundary,
                               const char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  k_emlrt_marshallIn(sp, emlrtAlias(boundary), &thisId, y);
  emlrtDestroyArray(&boundary);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
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
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "A")),
      &thisId, y->A);
  thisId.fIdentifier = "Xf";
  g_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "Xf")),
      &thisId, y->Xf);
  thisId.fIdentifier = "X0";
  g_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "X0")),
      &thisId, y->X0);
  thisId.fIdentifier = "Sigma";
  g_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "Sigma")),
      &thisId, y->Sigma);
  thisId.fIdentifier = "Pigreco";
  m_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "Pigreco")),
      &thisId, y->Pigreco);
  thisId.fIdentifier = "g0_xx";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "g0_xx")),
      &thisId, y->g0_xx);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[25])
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[20])
{
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[5]
{
  static const int32_T dims = 5;
  real_T(*ret)[5];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  ret = (real_T(*)[5])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[25])
{
  static const int32_T dims[2] = {5, 5};
  real_T(*r)[25];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[25])emlrtMxGetData(src);
  for (i = 0; i < 25; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[20])
{
  static const int32_T dims[2] = {5, 4};
  real_T(*r)[20];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[20])emlrtMxGetData(src);
  for (i = 0; i < 20; i++) {
    ret[i] = (*r)[i];
  }
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
    emlrtPutGlobalVariable("physical", b_emlrt_marshallOut(&physical));
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

void objfunSTM_S_fuel_api(const mxArray *const prhs[4], int32_T nlhs,
                          const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *grad;
  struct0_T b_physical;
  struct1_T boundary;
  real_T(*X0)[5];
  real_T(*lam0)[5];
  real_T(*obj_data)[5];
  int32_T obj_size;
  st.tls = emlrtRootTLSGlobal;
  obj_data = (real_T(*)[5])mxMalloc(sizeof(real_T[5]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Marshall function inputs */
  lam0 = h_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "lam0");
  X0 = h_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X0");
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "physical", &b_physical);
  j_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "boundary", &boundary);
  /* Marshall in global variables */
  MEXGlobalSyncInFunction(&st);
  /* Invoke the target function */
  emxInit_real_T(&st, &grad, 2, &td_emlrtRTEI);
  objfunSTM_S_fuel(&st, *lam0, *X0, &b_physical, &boundary, *obj_data,
                   *(int32_T(*)[1]) & obj_size, grad);
  /* Marshall out global variables */
  MEXGlobalSyncOutFunction(true);
  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(*obj_data, &obj_size);
  if (nlhs > 1) {
    grad->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(grad);
  }
  emxFree_real_T(&st, &grad);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_objfunSTM_S_fuel_api.c) */
