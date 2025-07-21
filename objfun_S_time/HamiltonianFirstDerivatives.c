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
#include "objfun_S_time_data.h"
#include "objfun_S_time_emxutil.h"
#include "objfun_S_time_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    xb_emlrtRSI =
        {
            27,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    yb_emlrtRSI =
        {
            28,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    ac_emlrtRSI =
        {
            29,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    bc_emlrtRSI =
        {
            30,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    cc_emlrtRSI =
        {
            35,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    dc_emlrtRSI =
        {
            36,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    ec_emlrtRSI =
        {
            38,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    fc_emlrtRSI =
        {
            39,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    gc_emlrtRSI =
        {
            40,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    hc_emlrtRSI =
        {
            41,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    ic_emlrtRSI =
        {
            48,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    jc_emlrtRSI =
        {
            49,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    kc_emlrtRSI =
        {
            51,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    lc_emlrtRSI =
        {
            52,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    mc_emlrtRSI =
        {
            53,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    nc_emlrtRSI =
        {
            54,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    11,                                                   /* lineNo */
    "uS_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m" /* pathName */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    10,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in1",                                                 /* aName */
    "uS_p_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_p_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    9,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_p_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_p_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    8,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_p_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_p_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    10,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in1",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    9,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    8,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo u_emlrtDCI =
    {
        22,                            /* lineNo */
        13,                            /* colNo */
        "HamiltonianFirstDerivatives", /* fName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianFirstDerivatives.m", /* pName */
        4                                      /* checkKind */
};

static emlrtDCInfo v_emlrtDCI =
    {
        22,                            /* lineNo */
        13,                            /* colNo */
        "HamiltonianFirstDerivatives", /* fName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianFirstDerivatives.m", /* pName */
        1                                      /* checkKind */
};

static emlrtRTEInfo
    fc_emlrtRTEI =
        {
            48,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    gc_emlrtRTEI =
        {
            35,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    hc_emlrtRTEI =
        {
            55,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    ic_emlrtRTEI =
        {
            49,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    jc_emlrtRTEI =
        {
            56,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    kc_emlrtRTEI =
        {
            42,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    lc_emlrtRTEI =
        {
            36,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    mc_emlrtRTEI =
        {
            43,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    nc_emlrtRTEI =
        {
            31,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    oc_emlrtRTEI =
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
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &u_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &v_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (physical_EPS > 0.0) {
    if ((S < physical_EPS * physical_Tmax / physical_c) &&
        (S > -physical_EPS * physical_Tmax / physical_c)) {
      real_T H0_p[5];
      real_T H0_x[5];
      real_T t4;
      real_T t6;
      real_T x_tmp;
      st.site = &xb_emlrtRSI;
      H0_x_fun(&st, x, p, H0_x);
      st.site = &yb_emlrtRSI;
      H0_p_fun(&st, x, H0_p);
      st.site = &ac_emlrtRSI;
      /* uS_x_fun */
      /*     duS_dx = uS_x_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:11:53 */
      if (p->size[0] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p->size[0], &xb_emlrtBCI, &st);
      }
      if (p->size[0] < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, p->size[0], &wb_emlrtBCI, &st);
      }
      if (x->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x->size[0], &vb_emlrtBCI, &st);
      }
      b_st.site = &bd_emlrtRSI;
      x_tmp = p_data[2] * p_data[2] + p_data[3] * p_data[3];
      if (x_tmp < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &b_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      st.site = &bc_emlrtRSI;
      /* uS_p_fun */
      /*     duS_dp = uS_p_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:11:53 */
      if (p->size[0] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p->size[0], &ub_emlrtBCI, &st);
      }
      if (p->size[0] < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, p->size[0], &tb_emlrtBCI, &st);
      }
      if (x->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x->size[0], &sb_emlrtBCI, &st);
      }
      t4 = 1.0 / x_data[4];
      x_tmp = muDoubleScalarSqrt(x_tmp);
      t6 = 1.0 / x_tmp;
      i = H_x->size[0];
      H_x->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_x, i, &nc_emlrtRTEI);
      H_x_data = H_x->data;
      H_x_data[0] = H0_x[0];
      H_x_data[1] = H0_x[1];
      H_x_data[2] = H0_x[2];
      H_x_data[3] = H0_x[3];
      H_x_data[4] = H0_x[4] + -physical_Tmax / (x_data[4] * x_data[4]) * x_tmp;
      i = H_p->size[0];
      H_p->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_p, i, &oc_emlrtRTEI);
      H_p_data = H_p->data;
      H_p_data[0] = H0_p[0];
      H_p_data[1] = H0_p[1];
      H_p_data[2] = H0_p[2] + physical_Tmax * p_data[2] * t4 * t6;
      H_p_data[3] = H0_p[3] + physical_Tmax * p_data[3] * t4 * t6;
      H_p_data[4] = H0_p[4] + -physical_Tmax / physical_c;
    } else if (muDoubleScalarSign(S) != physical_shoot) {
      real_T H0_x[5];
      st.site = &cc_emlrtRSI;
      H0_x_fun(&st, x, p, H0_x);
      i = H_x->size[0];
      H_x->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_x, i, &gc_emlrtRTEI);
      H_x_data = H_x->data;
      for (i = 0; i < 5; i++) {
        H_x_data[i] = H0_x[i];
      }
      st.site = &dc_emlrtRSI;
      H0_p_fun(&st, x, H0_x);
      i = H_p->size[0];
      H_p->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_p, i, &lc_emlrtRTEI);
      H_p_data = H_p->data;
      for (i = 0; i < 5; i++) {
        H_p_data[i] = H0_x[i];
      }
    } else {
      real_T H0_p[5];
      real_T H0_x[5];
      real_T S_p[5];
      real_T S_x[5];
      st.site = &ec_emlrtRSI;
      H0_x_fun(&st, x, p, H0_x);
      st.site = &fc_emlrtRSI;
      H0_p_fun(&st, x, H0_p);
      st.site = &gc_emlrtRSI;
      S_x_fun(&st, x, p, physical_Tmax, S_x);
      st.site = &hc_emlrtRSI;
      S_p_fun(&st, x, p, physical_Tmax, physical_c, S_p);
      i = H_x->size[0];
      H_x->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_x, i, &kc_emlrtRTEI);
      H_x_data = H_x->data;
      i = H_p->size[0];
      H_p->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_p, i, &mc_emlrtRTEI);
      H_p_data = H_p->data;
      for (i = 0; i < 5; i++) {
        H_x_data[i] = H0_x[i] + S_x[i];
        H_p_data[i] = H0_p[i] + S_p[i];
      }
    }
  } else if (muDoubleScalarSign(S) != physical_shoot) {
    real_T H0_x[5];
    st.site = &ic_emlrtRSI;
    H0_x_fun(&st, x, p, H0_x);
    i = H_x->size[0];
    H_x->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_x, i, &fc_emlrtRTEI);
    H_x_data = H_x->data;
    for (i = 0; i < 5; i++) {
      H_x_data[i] = H0_x[i];
    }
    st.site = &jc_emlrtRSI;
    H0_p_fun(&st, x, H0_x);
    i = H_p->size[0];
    H_p->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_p, i, &ic_emlrtRTEI);
    H_p_data = H_p->data;
    for (i = 0; i < 5; i++) {
      H_p_data[i] = H0_x[i];
    }
  } else {
    real_T H0_p[5];
    real_T H0_x[5];
    real_T S_p[5];
    real_T S_x[5];
    st.site = &kc_emlrtRSI;
    H0_x_fun(&st, x, p, H0_x);
    st.site = &lc_emlrtRSI;
    H0_p_fun(&st, x, H0_p);
    st.site = &mc_emlrtRSI;
    S_x_fun(&st, x, p, physical_Tmax, S_x);
    st.site = &nc_emlrtRSI;
    S_p_fun(&st, x, p, physical_Tmax, physical_c, S_p);
    i = H_x->size[0];
    H_x->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_x, i, &hc_emlrtRTEI);
    H_x_data = H_x->data;
    i = H_p->size[0];
    H_p->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_p, i, &jc_emlrtRTEI);
    H_p_data = H_p->data;
    for (i = 0; i < 5; i++) {
      H_x_data[i] = H0_x[i] + S_x[i];
      H_p_data[i] = H0_p[i] + S_p[i];
    }
  }
}

/* End of code generation (HamiltonianFirstDerivatives.c) */
