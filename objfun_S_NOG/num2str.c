/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * num2str.c
 *
 * Code generation for function 'num2str'
 *
 */

/* Include files */
#include "num2str.h"
#include "_coder_objfun_S_NOG_api.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo
    tk_emlrtRSI =
        {
            15,        /* lineNo */
            "num2str", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\num2str.m" /* pathName */
};

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[23]);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[23]);

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[23]);

/* Function Definitions */
static void c_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[23])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[23])
{
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[23])
{
  static const int32_T dims[2] = {1, 23};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 23);
  emlrtDestroyArray(&src);
}

void num2str(const emlrtStack *sp, real_T x, char_T str[23])
{
  static const int32_T iv[2] = {1, 7};
  static const char_T rfmt[7] = {'%', '2', '3', '.', '1', '5', 'e'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  m1 = NULL;
  y = NULL;
  m2 = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&st, 7, m2, &rfmt[0]);
  emlrtAssign(&y, m2);
  emlrtAssign(&m, y);
  emlrtAssign(&m1, b_emlrt_marshallOut(x));
  emlrt_synchGlobalsToML(&st);
  b_st.site = &wn_emlrtRSI;
  c_emlrt_marshallIn(
      &b_st, b_sprintf(&b_st, emlrtAlias(m), emlrtAlias(m1), &d_emlrtMCI),
      "<output of sprintf>", str);
  emlrt_synchGlobalsFromML(&st);
  emlrtDestroyArray(&m);
  emlrtDestroyArray(&m1);
}

/* End of code generation (num2str.c) */
