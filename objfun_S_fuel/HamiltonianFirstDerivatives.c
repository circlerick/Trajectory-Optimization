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
#include "objfun_S_fuel_data.h"
#include "objfun_S_fuel_emxutil.h"
#include "objfun_S_fuel_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    bb_emlrtRSI =
        {
            27,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    cb_emlrtRSI =
        {
            28,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    db_emlrtRSI =
        {
            29,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    eb_emlrtRSI =
        {
            30,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    fb_emlrtRSI =
        {
            35,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    gb_emlrtRSI =
        {
            36,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    hb_emlrtRSI =
        {
            38,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    ib_emlrtRSI =
        {
            39,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    jb_emlrtRSI =
        {
            40,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    kb_emlrtRSI =
        {
            41,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    lb_emlrtRSI =
        {
            48,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    mb_emlrtRSI =
        {
            49,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    nb_emlrtRSI =
        {
            51,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    ob_emlrtRSI =
        {
            52,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    pb_emlrtRSI =
        {
            53,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo
    qb_emlrtRSI =
        {
            54,                            /* lineNo */
            "HamiltonianFirstDerivatives", /* fcnName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    20,                                                   /* lineNo */
    "uS_x_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m" /* pathName */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    11,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in1",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    10,                                                    /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    9,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    8,                                                     /* lineNo */
    10,                                                    /* colNo */
    "in2",                                                 /* aName */
    "uS_x_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_x_fun.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo r_emlrtDCI =
    {
        22,                            /* lineNo */
        13,                            /* colNo */
        "HamiltonianFirstDerivatives", /* fName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianFirstDerivatives.m", /* pName */
        4                                      /* checkKind */
};

static emlrtDCInfo s_emlrtDCI =
    {
        22,                            /* lineNo */
        13,                            /* colNo */
        "HamiltonianFirstDerivatives", /* fName */
        "E:\\Users\\ricca\\Desktop\\codegen "
        "code\\HamiltonianFirstDerivatives.m", /* pName */
        1                                      /* checkKind */
};

static emlrtRTEInfo
    y_emlrtRTEI =
        {
            48,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    ab_emlrtRTEI =
        {
            35,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    bb_emlrtRTEI =
        {
            55,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    cb_emlrtRTEI =
        {
            49,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    db_emlrtRTEI =
        {
            56,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    eb_emlrtRTEI =
        {
            42,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    fb_emlrtRTEI =
        {
            36,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    gb_emlrtRTEI =
        {
            43,                            /* lineNo */
            13,                            /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    hb_emlrtRTEI =
        {
            31,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

static emlrtRTEInfo
    ib_emlrtRTEI =
        {
            32,                            /* lineNo */
            9,                             /* colNo */
            "HamiltonianFirstDerivatives", /* fName */
            "E:\\Users\\ricca\\Desktop\\codegen "
            "code\\HamiltonianFirstDerivatives.m" /* pName */
};

/* Function Definitions */
void HamiltonianFirstDerivatives(const emlrtStack *sp, const real_T x_data[],
                                 int32_T x_size, const real_T p_data[],
                                 int32_T p_size, real_T S, real_T physical_Tmax,
                                 real_T physical_c, real_T physical_NSTATE,
                                 real_T physical_shoot, real_T physical_EPS,
                                 emxArray_real_T *H_x, emxArray_real_T *H_p)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T *H_p_data;
  real_T *H_x_data;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
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
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &r_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &s_emlrtDCI, (emlrtConstCTX)sp);
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
      st.site = &bb_emlrtRSI;
      H0_x_fun(&st, x_data, x_size, p_data, p_size, H0_x);
      st.site = &cb_emlrtRSI;
      H0_p_fun(&st, x_data, x_size, H0_p);
      st.site = &db_emlrtRSI;
      /* uS_x_fun */
      /*     duS_dx = uS_x_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:26:09 */
      if (p_size < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p_size, &gb_emlrtBCI, &st);
      }
      if (p_size < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, 3, &fb_emlrtBCI, &st);
      }
      if (p_size < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, 4, &eb_emlrtBCI, &st);
      }
      if (x_size < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x_size, &db_emlrtBCI, &st);
      }
      t4_tmp = 1.0 / physical_EPS;
      t5_tmp = 1.0 / physical_c;
      t6_tmp = 1.0 / x_data[4];
      t7 = t6_tmp * t6_tmp;
      t10_tmp = p_data[2] * p_data[2] + p_data[3] * p_data[3];
      b_st.site = &hc_emlrtRSI;
      if (t10_tmp < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      t10_tmp = muDoubleScalarSqrt(t10_tmp);
      t14 = t5_tmp + p_data[4] * t5_tmp;
      t13 = t14 - t6_tmp * t10_tmp;
      st.site = &eb_emlrtRSI;
      /* uS_p_fun */
      /*     duS_dp = uS_p_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:26:09 */
      t11 = 1.0 / t10_tmp;
      t14 -= t6_tmp * t10_tmp;
      t15 = physical_c * t14;
      t19 = physical_EPS - t15;
      t23_tmp = physical_Tmax * t5_tmp;
      t14 = physical_Tmax * t14 - t23_tmp * (physical_EPS / 2.0 + t15 / 2.0);
      i = H_x->size[0];
      H_x->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_x, i, &hb_emlrtRTEI);
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
      emxEnsureCapacity_real_T(sp, H_p, i, &ib_emlrtRTEI);
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
      st.site = &fb_emlrtRSI;
      H0_x_fun(&st, x_data, x_size, p_data, p_size, H0_x);
      i = H_x->size[0];
      H_x->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_x, i, &ab_emlrtRTEI);
      H_x_data = H_x->data;
      for (i = 0; i < 5; i++) {
        H_x_data[i] = H0_x[i];
      }
      st.site = &gb_emlrtRSI;
      H0_p_fun(&st, x_data, x_size, H0_x);
      i = H_p->size[0];
      H_p->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_p, i, &fb_emlrtRTEI);
      H_p_data = H_p->data;
      for (i = 0; i < 5; i++) {
        H_p_data[i] = H0_x[i];
      }
    } else {
      real_T H0_p[5];
      real_T H0_x[5];
      real_T S_p[5];
      real_T S_x[5];
      st.site = &hb_emlrtRSI;
      H0_x_fun(&st, x_data, x_size, p_data, p_size, H0_x);
      st.site = &ib_emlrtRSI;
      H0_p_fun(&st, x_data, x_size, H0_p);
      st.site = &jb_emlrtRSI;
      S_x_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, S_x);
      st.site = &kb_emlrtRSI;
      S_p_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, physical_c,
              S_p);
      i = H_x->size[0];
      H_x->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_x, i, &eb_emlrtRTEI);
      H_x_data = H_x->data;
      i = H_p->size[0];
      H_p->size[0] = 5;
      emxEnsureCapacity_real_T(sp, H_p, i, &gb_emlrtRTEI);
      H_p_data = H_p->data;
      for (i = 0; i < 5; i++) {
        H_x_data[i] = H0_x[i] + S_x[i];
        H_p_data[i] = H0_p[i] + S_p[i];
      }
    }
  } else if (muDoubleScalarSign(S) != physical_shoot) {
    real_T H0_x[5];
    st.site = &lb_emlrtRSI;
    H0_x_fun(&st, x_data, x_size, p_data, p_size, H0_x);
    i = H_x->size[0];
    H_x->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_x, i, &y_emlrtRTEI);
    H_x_data = H_x->data;
    for (i = 0; i < 5; i++) {
      H_x_data[i] = H0_x[i];
    }
    st.site = &mb_emlrtRSI;
    H0_p_fun(&st, x_data, x_size, H0_x);
    i = H_p->size[0];
    H_p->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_p, i, &cb_emlrtRTEI);
    H_p_data = H_p->data;
    for (i = 0; i < 5; i++) {
      H_p_data[i] = H0_x[i];
    }
  } else {
    real_T H0_p[5];
    real_T H0_x[5];
    real_T S_p[5];
    real_T S_x[5];
    st.site = &nb_emlrtRSI;
    H0_x_fun(&st, x_data, x_size, p_data, p_size, H0_x);
    st.site = &ob_emlrtRSI;
    H0_p_fun(&st, x_data, x_size, H0_p);
    st.site = &pb_emlrtRSI;
    S_x_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, S_x);
    st.site = &qb_emlrtRSI;
    S_p_fun(&st, x_data, x_size, p_data, p_size, physical_Tmax, physical_c,
            S_p);
    i = H_x->size[0];
    H_x->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_x, i, &bb_emlrtRTEI);
    H_x_data = H_x->data;
    i = H_p->size[0];
    H_p->size[0] = 5;
    emxEnsureCapacity_real_T(sp, H_p, i, &db_emlrtRTEI);
    H_p_data = H_p->data;
    for (i = 0; i < 5; i++) {
      H_x_data[i] = H0_x[i] + S_x[i];
      H_p_data[i] = H0_p[i] + S_p[i];
    }
  }
}

/* End of code generation (HamiltonianFirstDerivatives.c) */
