/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * stopfuel.c
 *
 * Code generation for function 'stopfuel'
 *
 */

/* Include files */
#include "stopfuel.h"
#include "indexShapeCheck.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo um_emlrtRSI = {
    25,                                                   /* lineNo */
    "stopfuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pathName */
};

static emlrtRSInfo vm_emlrtRSI = {
    26,                                                   /* lineNo */
    "stopfuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pathName */
};

static emlrtBCInfo ck_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    11,                                                    /* lineNo */
    12,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo df_emlrtDCI = {
    25,                                                    /* lineNo */
    28,                                                    /* colNo */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo dk_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    25,                                                    /* lineNo */
    28,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo yc_emlrtECI = {
    1,                                                    /* nDims */
    25,                                                   /* lineNo */
    17,                                                   /* colNo */
    "stopfuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pName */
};

static emlrtBCInfo ek_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    26,                                                    /* lineNo */
    27,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo ad_emlrtECI = {
    1,                                                    /* nDims */
    26,                                                   /* lineNo */
    17,                                                   /* colNo */
    "stopfuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pName */
};

static emlrtBCInfo fk_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    18,                                                    /* lineNo */
    15,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

/* Function Declarations */
static void x_binary_expand_op(real_T in1[2], const struct0_T *in2,
                               const real_T in3_data[], int32_T in4);

static void y_binary_expand_op(real_T in1[2], const struct0_T *in2,
                               const real_T in3_data[], int32_T in4);

/* Function Definitions */
static void x_binary_expand_op(real_T in1[2], const struct0_T *in2,
                               const real_T in3_data[], int32_T in4)
{
  in1[0] = in2->Moon[0] - in3_data[0];
  in1[1] = in2->Moon[1] - in3_data[in4 != 1];
}

static void y_binary_expand_op(real_T in1[2], const struct0_T *in2,
                               const real_T in3_data[], int32_T in4)
{
  in1[0] = in2->Earth[0] - in3_data[0];
  in1[1] = in2->Earth[1] - in3_data[in4 != 1];
}

real_T stopfuel(const emlrtStack *sp, const real_T s_data[], int32_T s_size)
{
  emlrtStack st;
  real_T x[2];
  real_T EPS;
  real_T absxk;
  real_T t;
  real_T value;
  real_T y;
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  st.prev = sp;
  st.tls = sp->tls;
  /*  Stops ode integration when value is = 0. Used determine switching times or
   * to avoid trajectories */
  /*  too close to some positions (eg intersection with Earth or Moon) */
  value = 1.0;
  /*  check if the switching function has a zero */
  if (physical.EPS > 0.0) {
    EPS = physical.EPS * physical.Tmax / physical.c;
    if (s_size < 1) {
      emlrtDynamicBoundsCheckR2012b(s_size, 1, s_size, &ck_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    absxk = s_data[s_size - 1];
    if ((absxk < -EPS) || (absxk > EPS)) {
      value = EPS - muDoubleScalarAbs(absxk);
    }
  } else {
    if (s_size < 1) {
      emlrtDynamicBoundsCheckR2012b(s_size, 1, s_size, &fk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    value = s_data[s_size - 1];
  }
  /*  check is spacecraft is too close to the Earth or the Moon */
  absxk = muDoubleScalarRound((physical.NSTATE - 1.0) / 2.0);
  if (absxk < 1.0) {
    i = 0;
  } else {
    if (absxk != (int32_T)absxk) {
      emlrtIntegerCheckR2012b(absxk, &df_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)absxk < 1) || ((int32_T)absxk > s_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)absxk, 1, s_size, &dk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)absxk;
  }
  iv[0] = 1;
  iv[1] = i;
  st.site = &um_emlrtRSI;
  indexShapeCheck(&st, s_size, iv);
  if ((i != 2) && (i != 1)) {
    emlrtDimSizeImpxCheckR2021b(2, i, &yc_emlrtECI, (emlrtConstCTX)sp);
  }
  if (absxk < 1.0) {
    i1 = 0;
  } else {
    if (((int32_T)absxk < 1) || ((int32_T)absxk > s_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)absxk, 1, s_size, &ek_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)absxk;
  }
  iv[0] = 1;
  iv[1] = i1;
  st.site = &vm_emlrtRSI;
  indexShapeCheck(&st, s_size, iv);
  if ((i1 != 2) && (i1 != 1)) {
    emlrtDimSizeImpxCheckR2021b(2, i1, &ad_emlrtECI, (emlrtConstCTX)sp);
  }
  if (i == 2) {
    x[0] = physical.Earth[0] - s_data[0];
    x[1] = physical.Earth[1] - s_data[1];
  } else {
    y_binary_expand_op(x, &physical, s_data, 1);
  }
  EPS = 3.3121686421112381E-170;
  absxk = muDoubleScalarAbs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    EPS = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }
  absxk = muDoubleScalarAbs(x[1]);
  if (absxk > EPS) {
    t = EPS / absxk;
    y = y * t * t + 1.0;
    EPS = absxk;
  } else {
    t = absxk / EPS;
    y += t * t;
  }
  y = EPS * muDoubleScalarSqrt(y);
  if (y < physical.RE) {
    value = 0.0;
  } else {
    if (i1 == 2) {
      x[0] = physical.Moon[0] - s_data[0];
      x[1] = physical.Moon[1] - s_data[1];
    } else {
      x_binary_expand_op(x, &physical, s_data, 1);
    }
    EPS = 3.3121686421112381E-170;
    absxk = muDoubleScalarAbs(x[0]);
    if (absxk > 3.3121686421112381E-170) {
      y = 1.0;
      EPS = absxk;
    } else {
      t = absxk / 3.3121686421112381E-170;
      y = t * t;
    }
    absxk = muDoubleScalarAbs(x[1]);
    if (absxk > EPS) {
      t = EPS / absxk;
      y = y * t * t + 1.0;
      EPS = absxk;
    } else {
      t = absxk / EPS;
      y += t * t;
    }
    y = EPS * muDoubleScalarSqrt(y);
    if (y < physical.RM) {
      value = 0.0;
    }
  }
  return value;
}

/* End of code generation (stopfuel.c) */
