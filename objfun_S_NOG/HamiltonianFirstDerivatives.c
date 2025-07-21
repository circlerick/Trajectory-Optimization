/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HamiltonianFirstDerivatives.c
 *
 * Code generation for function 'HamiltonianFirstDerivatives'
 *
 */

/* Include files */
#include "HamiltonianFirstDerivatives.h"
#include "H0_p_fun.h"
#include "H0_x_fun.h"
#include "S_p_fun.h"
#include "S_x_fun.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    lf_emlrtRSI =
        {
            27,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    mf_emlrtRSI =
        {
            28,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    nf_emlrtRSI =
        {
            29,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    of_emlrtRSI =
        {
            30,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    pf_emlrtRSI =
        {
            35,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    qf_emlrtRSI =
        {
            36,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    rf_emlrtRSI =
        {
            38,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    sf_emlrtRSI =
        {
            39,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    tf_emlrtRSI =
        {
            40,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    uf_emlrtRSI =
        {
            41,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    vf_emlrtRSI =
        {
            48,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    wf_emlrtRSI =
        {
            49,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    xf_emlrtRSI =
        {
            51,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    yf_emlrtRSI =
        {
            52,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    ag_emlrtRSI =
        {
            53,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    bg_emlrtRSI =
        {
            54,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo rg_emlrtRSI = {
    20,                                                   /* lineNo */
    "uS_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m" /* pathName */
};

static emlrtBCInfo hg_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    11,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in1",                                                 /* aName */
    "uS_p_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_p_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    10,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_p_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_p_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    9,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_p_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_p_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo kg_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    8,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_p_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_p_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    11,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in1",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo mg_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    10,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    9,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    8,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo ud_emlrtDCI =
    {
        22,                            /* lineNo */
        13,                            /* colNo */
        "HamiltonianFirstDerivatives", /* fName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianFirstDerivatives.m", /* pName */
        4                                      /* checkKind */
};

static emlrtDCInfo vd_emlrtDCI =
    {
        22,                            /* lineNo */
        13,                            /* colNo */
        "HamiltonianFirstDerivatives", /* fName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianFirstDerivatives.m", /* pName */
        1                                      /* checkKind */
};

static emlrtRTEInfo
    je_emlrtRTEI =
        {
            48,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    ke_emlrtRTEI =
        {
            35,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    le_emlrtRTEI =
        {
            55,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    me_emlrtRTEI =
        {
            49,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    ne_emlrtRTEI =
        {
            56,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    oe_emlrtRTEI =
        {
            42,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    pe_emlrtRTEI =
        {
            36,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    qe_emlrtRTEI =
        {
            43,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    re_emlrtRTEI =
        {
            31,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    se_emlrtRTEI =
        {
            32,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

/* Function Definitions */
void HamiltonianFirstDerivatives(const emlrtStack *sp, const emxArray_real_T *x,
                                 const emxArray_real_T *p, real_T S,
                                 real_T physical_Tmax, real_T physical_c,
                                 real_T physical_NSTATE, real_T physical_shoot,
                                 real_T physical_EPS, emxArray_real_T *H_x,
                                 emxArray_real_T *H_p)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *p_data;
  const real_T *x_data;
  real_T *H_p_data;
  real_T *H_x_data;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p_data = p->data;
  x_data = x->data;
  /*  Definition of the Hamiltonian first derivatives H_x and H_p */
  /*  Definition of the Hamiltonian first derivatives H_x and H_p with
   * evaluation */
  /*  of the matlabFunction H0_x_fun, H0_p_fun, S_x_fun and S_p_fun at the */
  /*  numerical values x and p (if EPS > 0, S_x_fun and S_p_fun are replaced by
   */
  /*  uS_x_fun and uS_p_fun) */
  /*  Inputs: */
  /*  x: state vector [NSTATEx1] */
  /*  p: costate vector  [NSTATEx1] */
  /*  S: Switching function */
  /*  physical: structure of physical variables and functions */
  /*  */
  /*  Outputs: */
  /*  H_x: derivative of H wrt x */
  /*  H_p: derivative of H wrt p */
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &ud_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &vd_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (physical_EPS > 0.0) {
    if ((S < physical_EPS * physical_Tmax / physical_c) &&
        (S > -physical_EPS * physical_Tmax / physical_c)) {
      real_T H0_p[5];
      real_T H0_x[5];
      real_T d;
      real_T t10_tmp;
      real_T t11;
      real_T t13;
      real_T t14;
      real_T t15;
      real_T t19;
      real_T t23_tmp;
      real_T t4_tmp;
      real_T t5_tmp;
      real_T t6_tmp;
      real_T t7;
      st.site = &lf_emlrtRSI;
      H0_x_fun(&st, x, p, H0_x);
      st.site = &mf_emlrtRSI;
      H0_p_fun(&st, x, H0_p);
      st.site = &nf_emlrtRSI;
      /* uS_x_fun */
      /*     duS_dx = uS_x_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:26:09 */
      if (p->size[0] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p->size[0], &og_emlrtBCI, &st);
      }
      if (p->size[0] < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, p->size[0], &ng_emlrtBCI, &st);
      }
      if (p->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, p->size[0], &mg_emlrtBCI, &st);
      }
      if (x->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x->size[0], &lg_emlrtBCI, &st);
      }
      t4_tmp = 1.0 / physical_EPS;
      t5_tmp = 1.0 / physical_c;
      t6_tmp = 1.0 / x_data[4];
      t7 = t6_tmp * t6_tmp;
      t10_tmp = p_data[2] * p_data[2] + p_data[3] * p_data[3];
      b_st.site = &rg_emlrtRSI;
      if (t10_tmp < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      t10_tmp = muDoubleScalarSqrt(t10_tmp);
      t13 = (t5_tmp + p_data[4] * t5_tmp) - t6_tmp * t10_tmp;
      st.site = &of_emlrtRSI;
      /* uS_p_fun */
      /*     duS_dp = uS_p_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:26:09 */
      if (p->size[0] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p->size[0], &kg_emlrtBCI, &st);
      }
      if (p->size[0] < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, p->size[0], &jg_emlrtBCI, &st);
      }
      if (p->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, p->size[0], &ig_emlrtBCI, &st);
      }
      if (x->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x->size[0], &hg_emlrtBCI, &st);
      }
      t11 = 1.0 / t10_tmp;
      t14 = (t5_tmp + p_data[4] * t5_tmp) - t6_tmp * t10_tmp;
      t15 = physical_c * t14;
      t19 = physical_EPS - t15;
      t23_tmp = physical_Tmax * t5_tmp;
      t14 = physical_Tmax * t14 - t23_tmp * (physical_EPS / 2.0 + t15 / 2.0);
      i = H_x->size[0];
      H_x->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_x, i, &re_emlrtRTEI);
      H_x_data = H_x->data;
      H_x_data[0] = H0_x[0];
      H_x_data[1] = H0_x[1];
      H_x_data[2] = H0_x[2];
      H_x_data[3] = H0_x[3];
      t15 = physical_c * t13;
      d = physical_Tmax * t4_tmp;
      H_x_data[4] =
          H0_x[4] + (physical_c * t4_tmp * t7 * t10_tmp *
                         (physical_Tmax * t13 -
                          t23_tmp * (physical_EPS / 2.0 + t15 / 2.0)) /
                         2.0 -
                     d * t7 * t10_tmp * (physical_EPS - t15) / 4.0);
      i = H_p->size[0];
      H_p->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_p, i, &se_emlrtRTEI);
      H_p_data = H_p->data;
      H_p_data[0] = H0_p[0];
      H_p_data[1] = H0_p[1];
      H_p_data[2] =
          H0_p[2] +
          (physical_c * p_data[2] * t4_tmp * t6_tmp * t11 * t14 * -0.5 +
           physical_Tmax * p_data[2] * t4_tmp * t6_tmp * t11 * t19 / 4.0);
      H_p_data[3] =
          H0_p[3] +
          (physical_c * p_data[3] * t4_tmp * t6_tmp * t11 * t14 * -0.5 +
           physical_Tmax * p_data[3] * t4_tmp * t6_tmp * t11 * t19 / 4.0);
      H_p_data[4] = H0_p[4] + (t4_tmp * t14 / 2.0 - d * t5_tmp * t19 / 4.0);
    } else if (muDoubleScalarSign(S) != physical_shoot) {
      real_T H0_x[5];
      st.site = &pf_emlrtRSI;
      H0_x_fun(&st, x, p, H0_x);
      i = H_x->size[0];
      H_x->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_x, i, &ke_emlrtRTEI);
      H_x_data = H_x->data;
      for (i = 0; i < 5; i++) {
        H_x_data[i] = H0_x[i];
      }
      st.site = &qf_emlrtRSI;
      H0_p_fun(&st, x, H0_x);
      i = H_p->size[0];
      H_p->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_p, i, &pe_emlrtRTEI);
      H_p_data = H_p->data;
      for (i = 0; i < 5; i++) {
        H_p_data[i] = H0_x[i];
      }
    } else {
      real_T H0_p[5];
      real_T H0_x[5];
      real_T S_p[5];
      real_T S_x[5];
      st.site = &rf_emlrtRSI;
      H0_x_fun(&st, x, p, H0_x);
      st.site = &sf_emlrtRSI;
      H0_p_fun(&st, x, H0_p);
      st.site = &tf_emlrtRSI;
      S_x_fun(&st, x, p, physical_Tmax, S_x);
      st.site = &uf_emlrtRSI;
      S_p_fun(&st, x, p, physical_Tmax, physical_c, S_p);
      i = H_x->size[0];
      H_x->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_x, i, &oe_emlrtRTEI);
      H_x_data = H_x->data;
      i = H_p->size[0];
      H_p->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_p, i, &qe_emlrtRTEI);
      H_p_data = H_p->data;
      for (i = 0; i < 5; i++) {
        H_x_data[i] = H0_x[i] + S_x[i];
        H_p_data[i] = H0_p[i] + S_p[i];
      }
    }
  } else if (muDoubleScalarSign(S) != physical_shoot) {
    real_T H0_x[5];
    st.site = &vf_emlrtRSI;
    H0_x_fun(&st, x, p, H0_x);
    i = H_x->size[0];
    H_x->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_x, i, &je_emlrtRTEI);
    H_x_data = H_x->data;
    for (i = 0; i < 5; i++) {
      H_x_data[i] = H0_x[i];
    }
    st.site = &wf_emlrtRSI;
    H0_p_fun(&st, x, H0_x);
    i = H_p->size[0];
    H_p->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_p, i, &me_emlrtRTEI);
    H_p_data = H_p->data;
    for (i = 0; i < 5; i++) {
      H_p_data[i] = H0_x[i];
    }
  } else {
    real_T H0_p[5];
    real_T H0_x[5];
    real_T S_p[5];
    real_T S_x[5];
    st.site = &xf_emlrtRSI;
    H0_x_fun(&st, x, p, H0_x);
    st.site = &yf_emlrtRSI;
    H0_p_fun(&st, x, H0_p);
    st.site = &ag_emlrtRSI;
    S_x_fun(&st, x, p, physical_Tmax, S_x);
    st.site = &bg_emlrtRSI;
    S_p_fun(&st, x, p, physical_Tmax, physical_c, S_p);
    i = H_x->size[0];
    H_x->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_x, i, &le_emlrtRTEI);
    H_x_data = H_x->data;
    i = H_p->size[0];
    H_p->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_p, i, &ne_emlrtRTEI);
    H_p_data = H_p->data;
    for (i = 0; i < 5; i++) {
      H_x_data[i] = H0_x[i] + S_x[i];
      H_p_data[i] = H0_p[i] + S_p[i];
    }
  }
}

/* End of code generation (HamiltonianFirstDerivatives.c) */
