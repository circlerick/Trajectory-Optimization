/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HamiltonianSecondDerivatives.c
 *
 * Code generation for function 'HamiltonianSecondDerivatives'
 *
 */

/* Include files */
#include "HamiltonianSecondDerivatives.h"
#include "H0_xp_fun.h"
#include "H0_xx_fun.h"
#include "S_pp_fun.h"
#include "S_xp_fun.h"
#include "S_xx_fun.h"
#include "objfun_suff_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo be_emlrtRSI =
    {
        20,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ce_emlrtRSI =
    {
        22,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI =
    {
        23,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI =
    {
        24,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo fe_emlrtRSI =
    {
        25,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI =
    {
        31,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI =
    {
        33,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI =
    {
        38,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo je_emlrtRSI =
    {
        40,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ke_emlrtRSI =
    {
        41,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI =
    {
        42,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI =
    {
        43,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI =
    {
        51,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI =
    {
        53,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI =
    {
        56,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI =
    {
        58,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI =
    {
        59,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI =
    {
        60,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo te_emlrtRSI =
    {
        61,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = {
    20,                                                    /* lineNo */
    "uS_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xx_fun.m" /* pathName */
};

static emlrtRSInfo uf_emlrtRSI = {
    22,                                                    /* lineNo */
    "uS_pp_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_pp_fun.m" /* pathName */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    11,                                                     /* lineNo */
    10,                                                     /* colNo */
    "in1",                                                  /* aName */
    "uS_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    10,                                                     /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "uS_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    9,                                                      /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "uS_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    8,                                                      /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "uS_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

/* Function Definitions */
void HamiltonianSecondDerivatives(const emlrtStack *sp, const real_T x_data[],
                                  int32_T x_size, const real_T p_data[],
                                  int32_T p_size, real_T S,
                                  real_T physical_Tmax, real_T physical_c,
                                  real_T physical_shoot, real_T physical_EPS,
                                  real_T H_xx[25], real_T H_xp[25],
                                  real_T H_pp[25])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T S_xx[25];
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  /*  Definition of the Hamiltonian second derivatives H_xx,H_xp, and H_pp */
  /*  Definition of the Hamiltonian second derivatives H_xx,H_xp, and H_pp with
   * evaluation */
  /*  of the matlabFunction H0_xx_fun, H0_pp_fun, H0_xp_fun, S_xx_fun, S_xp_fun
   * and S_pp_fun at the */
  /*  numerical values x and p (if EPS > 0, S_xx_fun, S_xp_fun and S_pp_fun are
   * replaced by */
  /*  uS_xx_fun, uS_xp_fun and uS_pp_fun) */
  /*  Inputs: */
  /*  x: state vector [NSTATEx1] */
  /*  p: costate vector [NSTATEx1] */
  /*  S: Switching function */
  /*  physical: structure of physical variables and functions */
  if (physical_EPS > 0.0) {
    if ((S > -physical_EPS * physical_Tmax / physical_c) &&
        (S < physical_EPS * physical_Tmax / physical_c)) {
      real_T b_dv[5];
      real_T b_dv1[5];
      real_T b_dv2[5];
      real_T b_t13;
      real_T b_t21;
      real_T b_t38_tmp;
      real_T b_t7_tmp;
      real_T b_t9_tmp;
      real_T c_t13;
      real_T c_t38_tmp;
      real_T t10_tmp;
      real_T t11;
      real_T t12;
      real_T t13;
      real_T t13_tmp;
      real_T t14;
      real_T t20;
      real_T t20_tmp;
      real_T t21;
      real_T t21_tmp;
      real_T t23;
      real_T t27;
      real_T t31_tmp_tmp;
      real_T t34;
      real_T t34_tmp;
      real_T t38;
      real_T t38_tmp;
      real_T t4_tmp;
      real_T t5_tmp;
      real_T t6_tmp;
      real_T t7_tmp;
      real_T t9_tmp;
      real_T t9_tmp_tmp;
      st.site = &be_emlrtRSI;
      H0_xx_fun(&st, x_data, x_size, p_data, p_size, H_xx);
      st.site = &ce_emlrtRSI;
      H0_xp_fun(&st, x_data, x_size, H_xp);
      st.site = &de_emlrtRSI;
      /* uS_xx_fun */
      /*     d2uS_dxdx = uS_xx_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:26:10 */
      if (p_size < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p_size, &ed_emlrtBCI, &st);
      }
      if (p_size < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, 3, &dd_emlrtBCI, &st);
      }
      if (p_size < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, 4, &cd_emlrtBCI, &st);
      }
      if (x_size < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x_size, &bd_emlrtBCI, &st);
      }
      t4_tmp = 1.0 / physical_EPS;
      t5_tmp = 1.0 / physical_c;
      t6_tmp = 1.0 / x_data[4];
      t7_tmp = muDoubleScalarPower(t6_tmp, 3.0);
      t9_tmp = p_data[2] * p_data[2];
      b_t9_tmp = p_data[3] * p_data[3];
      t9_tmp_tmp = t9_tmp + b_t9_tmp;
      b_st.site = &pf_emlrtRSI;
      if (t9_tmp_tmp < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &d_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      t10_tmp = muDoubleScalarSqrt(t9_tmp_tmp);
      t13_tmp = t5_tmp + p_data[4] * t5_tmp;
      t13 = t13_tmp - t6_tmp * t10_tmp;
      st.site = &ee_emlrtRSI;
      /* uS_pp_fun */
      /*     d2uS_dpdp = uS_pp_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:26:10 */
      b_t7_tmp = t6_tmp * t6_tmp;
      t11 = 1.0 / t9_tmp_tmp;
      b_st.site = &uf_emlrtRSI;
      if (t9_tmp_tmp < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &d_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      t12 = muDoubleScalarSqrt(t9_tmp_tmp);
      b_t13 = 1.0 / t12;
      t14 = muDoubleScalarPower(b_t13, 3.0);
      t21 = physical_Tmax * p_data[2];
      t20_tmp = t21 * t4_tmp;
      t20 = -(t20_tmp * t6_tmp * b_t13 / 2.0);
      t21_tmp = physical_Tmax * p_data[3] * t4_tmp;
      b_t21 = -(t21_tmp * t6_tmp * b_t13 / 2.0);
      t12 = t13_tmp - t6_tmp * t12;
      t23 = physical_c * t12;
      t27 = physical_EPS - t23;
      t31_tmp_tmp = physical_Tmax * t4_tmp;
      t34_tmp = physical_Tmax * t5_tmp;
      t34 = physical_Tmax * t12 - t34_tmp * (physical_EPS / 2.0 + t23 / 2.0);
      t38_tmp = physical_Tmax * physical_c;
      b_t38_tmp = t38_tmp * p_data[2];
      c_t38_tmp = physical_c * p_data[2];
      t38 = (b_t38_tmp * p_data[3] * t4_tmp * b_t7_tmp * t11 / 2.0 -
             t21 * p_data[3] * t4_tmp * t6_tmp * t14 * t27 / 4.0) +
            c_t38_tmp * p_data[3] * t4_tmp * t6_tmp * t14 * t34 / 2.0;
      st.site = &fe_emlrtRSI;
      /* uS_xp_fun */
      /*     d2uS_dxdp = uS_xp_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:26:10 */
      c_t13 = 1.0 / t10_tmp;
      t12 = t13_tmp - t6_tmp * t10_tmp;
      t23 = physical_c * t12;
      t21 = physical_EPS - t23;
      t23 = physical_Tmax * t12 - t34_tmp * (physical_EPS / 2.0 + t23 / 2.0);
      b_dv2[0] = 0.0;
      b_dv2[1] = 0.0;
      b_dv2[2] = 0.0;
      b_dv2[3] = 0.0;
      t12 = physical_c * t13;
      b_dv2[4] = (-physical_c * t4_tmp * t7_tmp * t10_tmp *
                      (physical_Tmax * t13 -
                       t34_tmp * (physical_EPS / 2.0 + t12 / 2.0)) +
                  t38_tmp * t4_tmp * muDoubleScalarPower(t6_tmp, 4.0) *
                      t9_tmp_tmp / 2.0) +
                 t31_tmp_tmp * t7_tmp * t10_tmp * (physical_EPS - t12) / 2.0;
      for (i = 0; i < 5; i++) {
        S_xx[i] = H_xx[i];
        S_xx[i + 5] = H_xx[i + 5];
        S_xx[i + 10] = H_xx[i + 10];
        S_xx[i + 15] = H_xx[i + 15];
        S_xx[i + 20] = H_xx[i + 20] + b_dv2[i];
      }
      memcpy(&H_xx[0], &S_xx[0], 25U * sizeof(real_T));
      memset(&H_pp[0], 0, 12U * sizeof(real_T));
      t12 = t31_tmp_tmp * t6_tmp * b_t13 * t27 / 4.0 -
            physical_c * t4_tmp * t6_tmp * b_t13 * t34 / 2.0;
      H_pp[12] =
          ((t12 + physical_c * t9_tmp * t4_tmp * t6_tmp * t14 * t34 / 2.0) +
           t38_tmp * t9_tmp * t4_tmp * b_t7_tmp * t11 / 2.0) -
          physical_Tmax * t9_tmp * t4_tmp * t6_tmp * t14 * t27 / 4.0;
      H_pp[13] = t38;
      H_pp[14] = t20;
      H_pp[15] = 0.0;
      H_pp[16] = 0.0;
      H_pp[17] = t38;
      H_pp[18] =
          ((t12 + physical_c * b_t9_tmp * t4_tmp * t6_tmp * t14 * t34 / 2.0) +
           t38_tmp * b_t9_tmp * t4_tmp * b_t7_tmp * t11 / 2.0) -
          physical_Tmax * b_t9_tmp * t4_tmp * t6_tmp * t14 * t27 / 4.0;
      H_pp[19] = b_t21;
      H_pp[20] = 0.0;
      H_pp[21] = 0.0;
      H_pp[22] = t20;
      H_pp[23] = b_t21;
      H_pp[24] = t31_tmp_tmp * t5_tmp / 2.0;
      b_dv[0] = 0.0;
      b_dv[1] = 0.0;
      b_dv[2] = 0.0;
      b_dv[3] = 0.0;
      b_dv[4] = (b_t38_tmp * t4_tmp * t7_tmp * -0.5 +
                 c_t38_tmp * t4_tmp * b_t7_tmp * c_t13 * t23 / 2.0) -
                t20_tmp * b_t7_tmp * c_t13 * t21 / 4.0;
      b_dv1[0] = 0.0;
      b_dv1[1] = 0.0;
      b_dv1[2] = 0.0;
      b_dv1[3] = 0.0;
      b_dv1[4] =
          (t38_tmp * p_data[3] * t4_tmp * t7_tmp * -0.5 +
           physical_c * p_data[3] * t4_tmp * b_t7_tmp * c_t13 * t23 / 2.0) -
          t21_tmp * b_t7_tmp * c_t13 * t21 / 4.0;
      b_dv2[0] = 0.0;
      b_dv2[1] = 0.0;
      b_dv2[2] = 0.0;
      b_dv2[3] = 0.0;
      b_dv2[4] = t31_tmp_tmp * b_t7_tmp * t10_tmp / 2.0;
      for (i = 0; i < 5; i++) {
        S_xx[i] = H_xp[i];
        S_xx[i + 5] = H_xp[i + 5];
        S_xx[i + 10] = H_xp[i + 10] + b_dv[i];
        S_xx[i + 15] = H_xp[i + 15] + b_dv1[i];
        S_xx[i + 20] = H_xp[i + 20] + b_dv2[i];
      }
      memcpy(&H_xp[0], &S_xx[0], 25U * sizeof(real_T));
    } else if (muDoubleScalarSign(S) != physical_shoot) {
      st.site = &ge_emlrtRSI;
      H0_xx_fun(&st, x_data, x_size, p_data, p_size, H_xx);
      st.site = &he_emlrtRSI;
      H0_xp_fun(&st, x_data, x_size, H_xp);
      memset(&H_pp[0], 0, 25U * sizeof(real_T));
    } else {
      real_T S_xp[25];
      st.site = &ie_emlrtRSI;
      H0_xx_fun(&st, x_data, x_size, p_data, p_size, H_xx);
      st.site = &je_emlrtRSI;
      H0_xp_fun(&st, x_data, x_size, H_xp);
      st.site = &ke_emlrtRSI;
      S_xx_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, S_xx);
      st.site = &le_emlrtRSI;
      S_pp_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, H_pp);
      st.site = &me_emlrtRSI;
      S_xp_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, S_xp);
      for (i = 0; i < 25; i++) {
        H_xx[i] += S_xx[i];
        H_xp[i] += S_xp[i];
      }
    }
  } else if (muDoubleScalarSign(S) != physical_shoot) {
    st.site = &ne_emlrtRSI;
    H0_xx_fun(&st, x_data, x_size, p_data, p_size, H_xx);
    memset(&H_pp[0], 0, 25U * sizeof(real_T));
    st.site = &oe_emlrtRSI;
    H0_xp_fun(&st, x_data, x_size, H_xp);
  } else {
    real_T S_xp[25];
    st.site = &pe_emlrtRSI;
    H0_xx_fun(&st, x_data, x_size, p_data, p_size, H_xx);
    st.site = &qe_emlrtRSI;
    H0_xp_fun(&st, x_data, x_size, H_xp);
    st.site = &re_emlrtRSI;
    S_xx_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, S_xx);
    st.site = &se_emlrtRSI;
    S_pp_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, H_pp);
    st.site = &te_emlrtRSI;
    S_xp_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, S_xp);
    for (i = 0; i < 25; i++) {
      H_xx[i] += S_xx[i];
      H_xp[i] += S_xp[i];
    }
  }
}

/* End of code generation (HamiltonianSecondDerivatives.c) */
