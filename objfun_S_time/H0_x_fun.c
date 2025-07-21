/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * H0_x_fun.c
 *
 * Code generation for function 'H0_x_fun'
 *
 */

/* Include files */
#include "H0_x_fun.h"
#include "objfun_S_time_data.h"
#include "objfun_S_time_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo oc_emlrtRSI = {
    15,                                                   /* lineNo */
    "H0_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    21,                                                   /* lineNo */
    "H0_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    23,                                                   /* lineNo */
    "H0_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    28,                                                   /* lineNo */
    "H0_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m" /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = {
    29,                                                   /* lineNo */
    "H0_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    30,                                                   /* lineNo */
    "H0_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    31,                                                   /* lineNo */
    "H0_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m" /* pathName */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    13,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in1",                                                 /* aName */
    "H0_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    12,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in1",                                                 /* aName */
    "H0_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    11,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "H0_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    10,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "H0_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    9,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "H0_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    8,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "H0_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

/* Function Definitions */
void H0_x_fun(const emlrtStack *sp, const emxArray_real_T *in1,
              const emxArray_real_T *in2, real_T dH0_dx[5])
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *in1_data;
  const real_T *in2_data;
  real_T b_dH0_dx_tmp;
  real_T dH0_dx_tmp;
  real_T t12;
  real_T t13;
  real_T t15;
  real_T t17;
  real_T t2;
  real_T t22;
  real_T t23;
  real_T t3;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  in2_data = in2->data;
  in1_data = in1->data;
  /* H0_x_fun */
  /*     dH0_dx = H0_x_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
  /*     This function was generated by the Symbolic Math Toolbox version 9.2.
   */
  /*     01-Sep-2024 17:11:52 */
  if (in2->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, in2->size[0], &ec_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, in2->size[0], &dc_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, in2->size[0], &cc_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, in2->size[0], &bc_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, in1->size[0], &ac_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, in1->size[0], &yb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  t2 = in1_data[0] * 2.0;
  st.site = &oc_emlrtRSI;
  t3 = in1_data[1] * in1_data[1];
  st.site = &pc_emlrtRSI;
  st.site = &qc_emlrtRSI;
  t22 = in1_data[0] * 0.0121506683 - 0.01200302955986338;
  t23 = in1_data[0] * 0.9878493317 + 0.01200302955986338;
  t12 = t3 + (in1_data[0] + 0.0121506683) * (in1_data[0] + 0.0121506683);
  t13 = t3 + (in1_data[0] - 0.9878493317) * (in1_data[0] - 0.9878493317);
  st.site = &rc_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if (t12 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  st.site = &sc_emlrtRSI;
  t15 = 1.0 / muDoubleScalarPower(t12, 2.5);
  st.site = &tc_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if (t13 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  st.site = &uc_emlrtRSI;
  t17 = 1.0 / muDoubleScalarPower(t13, 2.5);
  dH0_dx_tmp = (t2 + 0.0243013366) * t15;
  b_dH0_dx_tmp = (t2 - 1.9756986634) * t17;
  t2 = -(1.0 / muDoubleScalarPower(t12, 1.5) * 0.9878493317) -
       1.0 / muDoubleScalarPower(t13, 1.5) * 0.0121506683;
  dH0_dx[0] =
      in2_data[2] *
          (((t2 + dH0_dx_tmp * t23 * 1.5) + b_dH0_dx_tmp * t22 * 1.5) + 1.0) +
      in2_data[3] * (dH0_dx_tmp * in1_data[1] * 1.48177399755 +
                     b_dH0_dx_tmp * in1_data[1] * 0.01822600245);
  dH0_dx[1] =
      in2_data[3] *
          (((t2 + t3 * t15 * 2.9635479951) + t3 * t17 * 0.0364520049) + 1.0) +
      in2_data[2] *
          (t15 * t23 * in1_data[1] * 3.0 + t17 * t22 * in1_data[1] * 3.0);
  dH0_dx[2] = in2_data[0] - in2_data[3] * 2.0;
  dH0_dx[3] = in2_data[1] + in2_data[2] * 2.0;
  dH0_dx[4] = 0.0;
}

/* End of code generation (H0_x_fun.c) */
