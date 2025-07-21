/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * flt2str.c
 *
 * Code generation for function 'flt2str'
 *
 */

/* Include files */
#include "flt2str.h"
#include "_coder_objfun_S_NOG_api.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_mexutil.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[14]);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14]);

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[14])
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = {1, 14};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void flt2str(const emlrtStack *sp, real_T x, char_T str[14])
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  m = NULL;
  m1 = NULL;
  y = NULL;
  m2 = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 6, m2, &rfmt[0]);
  emlrtAssign(&y, m2);
  emlrtAssign(&m, y);
  emlrtAssign(&m1, b_emlrt_marshallOut(x));
  emlrt_synchGlobalsToML(sp);
  st.site = &wn_emlrtRSI;
  emlrt_marshallIn(&st,
                   b_sprintf(&st, emlrtAlias(m), emlrtAlias(m1), &d_emlrtMCI),
                   "<output of sprintf>", str);
  emlrt_synchGlobalsFromML(sp);
  emlrtDestroyArray(&m);
  emlrtDestroyArray(&m1);
}

/* End of code generation (flt2str.c) */
