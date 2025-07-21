/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * H0_xx_fun.c
 *
 * Code generation for function 'H0_xx_fun'
 *
 */

/* Include files */
#include "H0_xx_fun.h"
#include "objfunSTM_S_energy_data.h"
#include "objfunSTM_S_energy_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo je_emlrtRSI = {
    13,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtRSInfo ke_emlrtRSI = {
    14,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI = {
    20,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI = {
    22,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI = {
    25,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = {
    26,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = {
    29,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = {
    30,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI = {
    31,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI = {
    32,                                                    /* lineNo */
    "H0_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m" /* pathName */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    11,                                                     /* lineNo */
    10,                                                     /* colNo */
    "in1",                                                  /* aName */
    "H0_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    10,                                                     /* lineNo */
    10,                                                     /* colNo */
    "in1",                                                  /* aName */
    "H0_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    9,                                                      /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "H0_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    8,                                                      /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "H0_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\H0_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

/* Function Definitions */
void H0_xx_fun(const emlrtStack *sp, const emxArray_real_T *in1,
               const emxArray_real_T *in2, real_T d2H0_dxdx[25])
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *in1_data;
  const real_T *in2_data;
  real_T b_t41_tmp;
  real_T c_t41_tmp;
  real_T in2_tmp;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t2;
  real_T t20;
  real_T t21_tmp;
  real_T t22_tmp;
  real_T t3;
  real_T t4;
  real_T t41;
  real_T t41_tmp;
  real_T t5;
  real_T t8;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  in2_data = in2->data;
  in1_data = in1->data;
  /* H0_xx_fun */
  /*     d2H0_dxdx = H0_xx_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
  /*     This function was generated by the Symbolic Math Toolbox version 9.2.
   */
  /*     01-Sep-2024 17:26:09 */
  if (in2->size[0] < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, in2->size[0], &ad_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in2->size[0] < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, in2->size[0], &yc_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, in1->size[0], &xc_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (in1->size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, in1->size[0], &wc_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  t2 = in1_data[0] * 2.0;
  st.site = &je_emlrtRSI;
  t3 = in1_data[1] * in1_data[1];
  st.site = &ke_emlrtRSI;
  t4 = muDoubleScalarPower(in1_data[1], 3.0);
  t5 = in1_data[0] * 0.0121506683;
  t8 = in1_data[0] * 0.9878493317;
  st.site = &le_emlrtRSI;
  st.site = &me_emlrtRSI;
  st.site = &ne_emlrtRSI;
  st.site = &oe_emlrtRSI;
  t15 = t3 + (in1_data[0] + 0.0121506683) * (in1_data[0] + 0.0121506683);
  t16 = t3 + (in1_data[0] - 0.9878493317) * (in1_data[0] - 0.9878493317);
  st.site = &pe_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  if (t15 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &n_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  t17 = 1.0 / muDoubleScalarPower(t15, 2.5);
  st.site = &qe_emlrtRSI;
  t18 = 1.0 / muDoubleScalarPower(t15, 3.5);
  st.site = &re_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  if (t16 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &n_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  t15 = 1.0 / muDoubleScalarPower(t16, 2.5);
  st.site = &se_emlrtRSI;
  t20 = 1.0 / muDoubleScalarPower(t16, 3.5);
  t21_tmp = t17 * in1_data[1];
  t22_tmp = t15 * in1_data[1];
  t41_tmp = (t2 + 0.0243013366) * t17;
  b_t41_tmp = (t2 - 1.9756986634) * t15;
  c_t41_tmp = t21_tmp * 2.9635479951 + t22_tmp * 0.0364520049;
  t41 = in2_data[3] * (((t41_tmp * 1.48177399755 + b_t41_tmp * 0.01822600245) -
                        t3 * (t2 + 0.0243013366) * t18 * 7.40886998775) -
                       t3 * (t2 - 1.9756986634) * t20 * 0.09113001225) +
        in2_data[2] *
            ((c_t41_tmp - (t2 + 0.0243013366) * t18 *
                              (t8 + 0.01200302955986338) * in1_data[1] * 7.5) -
             (t2 - 1.9756986634) * t20 * (t5 - 0.01200302955986338) *
                 in1_data[1] * 7.5);
  in2_tmp = (t2 + 0.0243013366) * (t2 + 0.0243013366) * t18;
  t16 = (t2 - 1.9756986634) * (t2 - 1.9756986634) * t20;
  t15 = t17 * (t8 + 0.01200302955986338) * 3.0 +
        t15 * (t5 - 0.01200302955986338) * 3.0;
  d2H0_dxdx[0] =
      in2_data[2] *
          ((((t15 + t41_tmp * 2.9635479951) + b_t41_tmp * 0.0364520049) -
            in2_tmp * (t8 + 0.01200302955986338) * 3.75) -
           t16 * (t5 - 0.01200302955986338) * 3.75) +
      in2_data[3] * ((c_t41_tmp - in2_tmp * in1_data[1] * 3.704434993875) -
                     t16 * in1_data[1] * 0.045565006125);
  d2H0_dxdx[1] = t41;
  d2H0_dxdx[2] = 0.0;
  d2H0_dxdx[3] = 0.0;
  d2H0_dxdx[4] = 0.0;
  d2H0_dxdx[5] = t41;
  d2H0_dxdx[6] =
      -in2_data[3] * (((t4 * t18 * 14.8177399755 + t4 * t20 * 0.1822600245) -
                       t21_tmp * 8.8906439853) -
                      t22_tmp * 0.1093560147) +
      in2_data[2] * ((t15 - t3 * t18 * (t8 + 0.01200302955986338) * 15.0) -
                     t3 * t20 * (t5 - 0.01200302955986338) * 15.0);
  memset(&d2H0_dxdx[7], 0, 18U * sizeof(real_T));
}

/* End of code generation (H0_xx_fun.c) */
