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
#include "objfun_S_fuel.h"
#include "objfun_S_fuel_data.h"
#include "objfun_S_fuel_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtDCInfo t_emlrtDCI = {
    25,                                                    /* lineNo */
    28,                                                    /* colNo */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    1,                                                     /* iFirst */
    11,                                                    /* iLast */
    25,                                                    /* lineNo */
    28,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo l_emlrtECI = {
    1,                                                    /* nDims */
    25,                                                   /* lineNo */
    17,                                                   /* colNo */
    "stopfuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pName */
};

static emlrtECInfo m_emlrtECI = {
    1,                                                    /* nDims */
    26,                                                   /* lineNo */
    17,                                                   /* colNo */
    "stopfuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pName */
};

/* Function Definitions */
real_T stopfuel(const emlrtStack *sp, const real_T s[11])
{
  real_T x[2];
  real_T EPS;
  real_T absxk;
  real_T t;
  real_T value;
  real_T y;
  int32_T i;
  int32_T i1;
  /*  Stops ode integration when value is = 0. Used determine switching times or
   * to avoid trajectories */
  /*  too close to some positions (eg intersection with Earth or Moon) */
  value = 1.0;
  /*  check if the switching function has a zero */
  if (physical.EPS > 0.0) {
    EPS = physical.EPS * physical.Tmax / physical.c;
    if ((s[10] < -EPS) || (s[10] > EPS)) {
      value = EPS - muDoubleScalarAbs(s[10]);
    }
  } else {
    value = s[10];
  }
  /*  check is spacecraft is too close to the Earth or the Moon */
  EPS = muDoubleScalarRound((physical.NSTATE - 1.0) / 2.0);
  if (EPS < 1.0) {
    i = 0;
  } else {
    if (EPS != (int32_T)EPS) {
      emlrtIntegerCheckR2012b(EPS, &t_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)EPS < 1) || ((int32_T)EPS > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)EPS, 1, 11, &cc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)EPS;
  }
  if ((i != 2) && (i != 1)) {
    emlrtDimSizeImpxCheckR2021b(2, i, &l_emlrtECI, (emlrtConstCTX)sp);
  }
  if (EPS < 1.0) {
    i1 = 0;
  } else {
    i1 = (int32_T)EPS;
  }
  if ((i1 != 2) && (i1 != 1)) {
    emlrtDimSizeImpxCheckR2021b(2, i1, &m_emlrtECI, (emlrtConstCTX)sp);
  }
  if (i == 2) {
    x[0] = physical.Earth[0] - s[0];
    x[1] = physical.Earth[1] - s[1];
  } else {
    d_binary_expand_op(x, &physical, s, 1);
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
      x[0] = physical.Moon[0] - s[0];
      x[1] = physical.Moon[1] - s[1];
    } else {
      c_binary_expand_op(x, &physical, s, 1);
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
