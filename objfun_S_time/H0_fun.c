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
#include "objfun_S_time_data.h"
#include "objfun_S_time_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo gg_emlrtRSI = {
    16,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtRSInfo hg_emlrtRSI = {
    19,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtRSInfo ig_emlrtRSI = {
    20,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtRSInfo jg_emlrtRSI = {
    23,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtRSInfo kg_emlrtRSI = {
    24,                                                 /* lineNo */
    "H0_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m" /* pathName */
};

static emlrtBCInfo pd_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    15,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in1",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    14,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in1",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    13,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in1",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    12,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in1",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    11,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    10,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    9,                                                   /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "H0_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = {
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
    emlrtDynamicBoundsCheckR2012b(1, 1, in2->size[0], &wd_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, in2->size[0], &vd_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, in2->size[0], &ud_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, in2->size[0], &td_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, in1->size[0], &sd_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, in1->size[0], &rd_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, in1->size[0], &qd_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, in1->size[0], &pd_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  st.site = &gg_emlrtRSI;
  t2 = in1_data[1] * in1_data[1];
  st.site = &hg_emlrtRSI;
  st.site = &ig_emlrtRSI;
  t9 = t2 + (in1_data[0] + 0.0121506683) * (in1_data[0] + 0.0121506683);
  t2 += (in1_data[0] - 0.9878493317) * (in1_data[0] - 0.9878493317);
  st.site = &jg_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if (t9 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  t9 = 1.0 / muDoubleScalarPower(t9, 1.5);
  st.site = &kg_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if (t2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
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
