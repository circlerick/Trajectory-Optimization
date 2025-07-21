/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sumMatrixIncludeNaN.c
 *
 * Code generation for function 'sumMatrixIncludeNaN'
 *
 */

/* Include files */
#include "sumMatrixIncludeNaN.h"
#include "eml_int_forloop_overflow_check.h"
#include "objfun_S_NOG_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo rn_emlrtRSI = {
    178,          /* lineNo */
    "sumColumnB", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo sn_emlrtRSI = {
    210,         /* lineNo */
    "sumColumn", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

/* Function Definitions */
real_T b_sumColumnB(const real_T x[5])
{
  return (((x[0] + x[1]) + x[2]) + x[3]) + x[4];
}

real_T sumColumnB(const emlrtStack *sp, const real_T x_data[], int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rn_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = x_data[0];
  b_st.site = &sn_emlrtRSI;
  if (vlen - 1 > 2147483646) {
    c_st.site = &ne_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  i = (uint8_T)(vlen - 1);
  for (k = 0; k < i; k++) {
    y += x_data[k + 1];
  }
  return y;
}

/* End of code generation (sumMatrixIncludeNaN.c) */
