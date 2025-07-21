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
#include "objfunSTM_S_time_data.h"
#include "objfunSTM_S_time_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo he_emlrtRSI =
    {
        20,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI =
    {
        22,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo je_emlrtRSI =
    {
        23,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ke_emlrtRSI =
    {
        24,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI =
    {
        25,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI =
    {
        31,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI =
    {
        33,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI =
    {
        38,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI =
    {
        40,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI =
    {
        41,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI =
    {
        42,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI =
    {
        43,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo te_emlrtRSI =
    {
        51,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ue_emlrtRSI =
    {
        53,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI =
    {
        56,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI =
    {
        58,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI =
    {
        59,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI =
    {
        60,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo af_emlrtRSI =
    {
        61,                             /* lineNo */
        "HamiltonianSecondDerivatives", /* fcnName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianSecondDerivatives.m" /* pathName */
};

static emlrtRSInfo sf_emlrtRSI = {
    11,                                                    /* lineNo */
    "uS_xx_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xx_fun.m" /* pathName */
};

static emlrtRSInfo vf_emlrtRSI = {
    15,                                                    /* lineNo */
    "uS_pp_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_pp_fun.m" /* pathName */
};

static emlrtBCInfo pd_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    10,                                                     /* lineNo */
    10,                                                     /* colNo */
    "in1",                                                  /* aName */
    "uS_xp_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xp_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    9,                                                      /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "uS_xp_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xp_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    8,                                                      /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "uS_xp_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xp_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    10,                                                     /* lineNo */
    10,                                                     /* colNo */
    "in1",                                                  /* aName */
    "uS_pp_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_pp_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    9,                                                      /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "uS_pp_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_pp_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    8,                                                      /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "uS_pp_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_pp_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    10,                                                     /* lineNo */
    10,                                                     /* colNo */
    "in1",                                                  /* aName */
    "uS_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = {
    -1,                                                     /* iFirst */
    -1,                                                     /* iLast */
    9,                                                      /* lineNo */
    10,                                                     /* colNo */
    "in2",                                                  /* aName */
    "uS_xx_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_xx_fun.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = {
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
void HamiltonianSecondDerivatives(
    const emlrtStack *sp, const emxArray_real_T *x, const emxArray_real_T *p,
    real_T S, real_T physical_Tmax, real_T physical_c, real_T physical_shoot,
    real_T physical_EPS, real_T H_xx[25], real_T H_xp[25], real_T H_pp[25])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T S_xx[25];
  const real_T *p_data;
  const real_T *x_data;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p_data = p->data;
  x_data = x->data;
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
      real_T b_t4;
      real_T b_x_tmp;
      real_T t4;
      real_T t6;
      real_T t7;
      real_T t8;
      real_T t9;
      real_T x_tmp;
      real_T x_tmp_tmp;
      st.site = &he_emlrtRSI;
      H0_xx_fun(&st, x, p, H_xx);
      st.site = &ie_emlrtRSI;
      H0_xp_fun(&st, x, H_xp);
      st.site = &je_emlrtRSI;
      /* uS_xx_fun */
      /*     d2uS_dxdx = uS_xx_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:11:53 */
      if (p->size[0] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p->size[0], &xd_emlrtBCI, &st);
      }
      if (p->size[0] < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, p->size[0], &wd_emlrtBCI, &st);
      }
      if (x->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x->size[0], &vd_emlrtBCI, &st);
      }
      b_st.site = &sf_emlrtRSI;
      x_tmp = p_data[2] * p_data[2];
      b_x_tmp = p_data[3] * p_data[3];
      x_tmp_tmp = x_tmp + b_x_tmp;
      if (x_tmp_tmp < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &h_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      st.site = &ke_emlrtRSI;
      /* uS_pp_fun */
      /*     d2uS_dpdp = uS_pp_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:11:53 */
      if (p->size[0] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p->size[0], &ud_emlrtBCI, &st);
      }
      if (p->size[0] < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, p->size[0], &td_emlrtBCI, &st);
      }
      if (x->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x->size[0], &sd_emlrtBCI, &st);
      }
      t4 = 1.0 / x_data[4];
      b_st.site = &vf_emlrtRSI;
      if (x_tmp_tmp < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &h_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      t6 = 1.0 / muDoubleScalarSqrt(x_tmp_tmp);
      t7 = muDoubleScalarPower(t6, 3.0);
      t8 = physical_Tmax * t4 * t6;
      t9 = physical_Tmax * p_data[2] * p_data[3] * t4 * t7;
      st.site = &le_emlrtRSI;
      /* uS_xp_fun */
      /*     d2uS_dxdp = uS_xp_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:11:53 */
      if (p->size[0] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p->size[0], &rd_emlrtBCI, &st);
      }
      if (p->size[0] < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, p->size[0], &qd_emlrtBCI, &st);
      }
      if (x->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x->size[0], &pd_emlrtBCI, &st);
      }
      b_t4 = 1.0 / (x_data[4] * x_data[4]);
      x_tmp_tmp = muDoubleScalarSqrt(x_tmp_tmp);
      t6 = 1.0 / x_tmp_tmp;
      b_dv[0] = 0.0;
      b_dv[1] = 0.0;
      b_dv[2] = 0.0;
      b_dv[3] = 0.0;
      b_dv[4] =
          physical_Tmax / muDoubleScalarPower(x_data[4], 3.0) * x_tmp_tmp * 2.0;
      for (i = 0; i < 5; i++) {
        S_xx[i] = H_xx[i];
        S_xx[i + 5] = H_xx[i + 5];
        S_xx[i + 10] = H_xx[i + 10];
        S_xx[i + 15] = H_xx[i + 15];
        S_xx[i + 20] = H_xx[i + 20] + b_dv[i];
      }
      memcpy(&H_xx[0], &S_xx[0], 25U * sizeof(real_T));
      memset(&H_pp[0], 0, 12U * sizeof(real_T));
      H_pp[12] = t8 - physical_Tmax * x_tmp * t4 * t7;
      H_pp[13] = -t9;
      H_pp[14] = 0.0;
      H_pp[15] = 0.0;
      H_pp[16] = 0.0;
      H_pp[17] = -t9;
      H_pp[18] = t8 - physical_Tmax * b_x_tmp * t4 * t7;
      H_pp[19] = 0.0;
      H_pp[20] = 0.0;
      H_pp[21] = 0.0;
      H_pp[22] = 0.0;
      H_pp[23] = 0.0;
      H_pp[24] = 0.0;
      b_dv[0] = 0.0;
      b_dv[1] = 0.0;
      b_dv[2] = 0.0;
      b_dv[3] = 0.0;
      b_dv[4] = -physical_Tmax * p_data[2] * b_t4 * t6;
      b_dv1[0] = 0.0;
      b_dv1[1] = 0.0;
      b_dv1[2] = 0.0;
      b_dv1[3] = 0.0;
      b_dv1[4] = -physical_Tmax * p_data[3] * b_t4 * t6;
      for (i = 0; i < 5; i++) {
        S_xx[i] = H_xp[i];
        S_xx[i + 5] = H_xp[i + 5];
        S_xx[i + 10] = H_xp[i + 10] + b_dv[i];
        S_xx[i + 15] = H_xp[i + 15] + b_dv1[i];
        S_xx[i + 20] = H_xp[i + 20];
      }
      memcpy(&H_xp[0], &S_xx[0], 25U * sizeof(real_T));
    } else if (muDoubleScalarSign(S) != physical_shoot) {
      st.site = &me_emlrtRSI;
      H0_xx_fun(&st, x, p, H_xx);
      st.site = &ne_emlrtRSI;
      H0_xp_fun(&st, x, H_xp);
      memset(&H_pp[0], 0, 25U * sizeof(real_T));
    } else {
      real_T S_xp[25];
      st.site = &oe_emlrtRSI;
      H0_xx_fun(&st, x, p, H_xx);
      st.site = &pe_emlrtRSI;
      H0_xp_fun(&st, x, H_xp);
      st.site = &qe_emlrtRSI;
      S_xx_fun(&st, x, p, physical_Tmax, S_xx);
      st.site = &re_emlrtRSI;
      S_pp_fun(&st, x, p, physical_Tmax, H_pp);
      st.site = &se_emlrtRSI;
      S_xp_fun(&st, x, p, physical_Tmax, S_xp);
      for (i = 0; i < 25; i++) {
        H_xx[i] += S_xx[i];
        H_xp[i] += S_xp[i];
      }
    }
  } else if (muDoubleScalarSign(S) != physical_shoot) {
    st.site = &te_emlrtRSI;
    H0_xx_fun(&st, x, p, H_xx);
    memset(&H_pp[0], 0, 25U * sizeof(real_T));
    st.site = &ue_emlrtRSI;
    H0_xp_fun(&st, x, H_xp);
  } else {
    real_T S_xp[25];
    st.site = &ve_emlrtRSI;
    H0_xx_fun(&st, x, p, H_xx);
    st.site = &we_emlrtRSI;
    H0_xp_fun(&st, x, H_xp);
    st.site = &xe_emlrtRSI;
    S_xx_fun(&st, x, p, physical_Tmax, S_xx);
    st.site = &ye_emlrtRSI;
    S_pp_fun(&st, x, p, physical_Tmax, H_pp);
    st.site = &af_emlrtRSI;
    S_xp_fun(&st, x, p, physical_Tmax, S_xp);
    for (i = 0; i < 25; i++) {
      H_xx[i] += S_xx[i];
      H_xp[i] += S_xp[i];
    }
  }
}

/* End of code generation (HamiltonianSecondDerivatives.c) */
