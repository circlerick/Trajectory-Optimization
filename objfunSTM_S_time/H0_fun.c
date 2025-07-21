/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * H0_fun.c
 *
 * Code generation for function 'H0_fun'
 *
 */

/* Include files */
#include "H0_fun.h"
#include "objfunSTM_S_time_data.h"
#include "objfunSTM_S_time_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo oj_emlrtRSI = {
    16,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtRSInfo pj_emlrtRSI = {
    19,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtRSInfo qj_emlrtRSI = {
    20,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtRSInfo rj_emlrtRSI = {
    23,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtRSInfo sj_emlrtRSI = {
    24,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtBCInfo yf_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    15,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in1",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    14,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in1",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    13,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in1",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    12,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in1",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    11,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo eg_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    10,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo fg_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    9,                                                   /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo gg_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    8,                                                   /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

/* Function Definitions */
real_T H0_fun(const emlrtStack *sp, const emxArray_real_T *in1,
              const emxArray_real_T *in2)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *in1_data;
  const real_T *in2_data;
  real_T t2;
  real_T t9;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  in2_data = in2->data;
  in1_data = in1->data;
  /* H0_fun */
  /*     H0 = H0_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
  /*     This function was generated by the Symbolic Math Toolbox version 9.2.
   */
  /*     01-Sep-2024 17:11:52 */
  if (in2->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, in2->size[0], &gg_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, in2->size[0], &fg_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, in2->size[0], &eg_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, in2->size[0], &dg_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, in1->size[0], &cg_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, in1->size[0], &bg_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, in1->size[0], &ag_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, in1->size[0], &yf_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  st.site = &oj_emlrtRSI;
  t2 = in1_data[1] * in1_data[1];
  st.site = &pj_emlrtRSI;
  st.site = &qj_emlrtRSI;
  t9 = t2 + (in1_data[0] + 0.0121506683) * (in1_data[0] + 0.0121506683);
  t2 += (in1_data[0] - 0.9878493317) * (in1_data[0] - 0.9878493317);
  st.site = &rj_emlrtRSI;
  b_st.site = &kb_emlrtRSI;
  if (t9 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  t9 = 1.0 / muDoubleScalarPower(t9, 1.5);
  st.site = &sj_emlrtRSI;
  b_st.site = &kb_emlrtRSI;
  if (t2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  t2 = 1.0 / muDoubleScalarPower(t2, 1.5);
  return (((in2_data[0] * in1_data[2] + in2_data[1] * in1_data[3]) -
           in2_data[3] * (((-in1_data[1] + in1_data[2] * 2.0) +
                           t9 * in1_data[1] * 0.9878493317) +
                          t2 * in1_data[1] * 0.0121506683)) +
          in2_data[2] *
              (((in1_data[0] + in1_data[3] * 2.0) -
                t9 * (in1_data[0] * 0.9878493317 + 0.01200302955986338)) +
               -t2 * (in1_data[0] * 0.0121506683 - 0.01200302955986338))) -
         1.0;
}

/* End of code generation (H0_fun.c) */
