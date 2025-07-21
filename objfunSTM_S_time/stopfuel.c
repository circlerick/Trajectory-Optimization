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
#include "objfunSTM_S_time_data.h"
#include "objfunSTM_S_time_types.h"
#include "rt_nonfinite.h"
#include "stopfunc.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bj_emlrtRSI = {
    25,                                                   /* lineNo */
    "stopfuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pathName */
};

static emlrtRSInfo cj_emlrtRSI = {
    26,                                                   /* lineNo */
    "stopfuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pathName */
};

static emlrtBCInfo gf_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    11,                                                    /* lineNo */
    12,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    25,                                                    /* lineNo */
    26,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = {
    25,                                                    /* lineNo */
    28,                                                    /* colNo */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    25,                                                    /* lineNo */
    28,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo r_emlrtECI = {
    1,                                                    /* nDims */
    25,                                                   /* lineNo */
    17,                                                   /* colNo */
    "stopfuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pName */
};

static emlrtBCInfo jf_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    26,                                                    /* lineNo */
    25,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    26,                                                    /* lineNo */
    27,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo s_emlrtECI = {
    1,                                                    /* nDims */
    26,                                                   /* lineNo */
    17,                                                   /* colNo */
    "stopfuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m" /* pName */
};

static emlrtBCInfo lf_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    18,                                                    /* lineNo */
    15,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfuel.m", /* pName */
    0                                                      /* checkKind */
};

/* Function Definitions */
real_T stopfuel(const emlrtStack *sp, const emxArray_real_T *s)
{
  emlrtStack st;
  real_T x[2];
  const real_T *s_data;
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
  s_data = s->data;
  /*  Stops ode integration when value is = 0. Used determine switching times or
   * to avoid trajectories */
  /*  too close to some positions (eg intersection with Earth or Moon) */
  value = 1.0;
  /*  check if the switching function has a zero */
  if (physical.EPS > 0.0) {
    EPS = physical.EPS * physical.Tmax / physical.c;
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(s->size[0], 1, s->size[0], &gf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((s_data[s->size[0] - 1] < -EPS) || (s_data[s->size[0] - 1] > EPS)) {
      value = EPS - muDoubleScalarAbs(s_data[s->size[0] - 1]);
    }
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(s->size[0], 1, s->size[0], &lf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    value = s_data[s->size[0] - 1];
  }
  /*  check is spacecraft is too close to the Earth or the Moon */
  EPS = muDoubleScalarRound((physical.NSTATE - 1.0) / 2.0);
  if (EPS < 1.0) {
    i = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &hf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (EPS != (int32_T)EPS) {
      emlrtIntegerCheckR2012b(EPS, &gc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)EPS < 1) || ((int32_T)EPS > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)EPS, 1, s->size[0], &if_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)EPS;
  }
  iv[0] = 1;
  iv[1] = i;
  st.site = &bj_emlrtRSI;
  indexShapeCheck(&st, s->size[0], iv);
  if ((i != 2) && (i != 1)) {
    emlrtDimSizeImpxCheckR2021b(2, i, &r_emlrtECI, (emlrtConstCTX)sp);
  }
  if (EPS < 1.0) {
    i1 = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &jf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (((int32_T)EPS < 1) || ((int32_T)EPS > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)EPS, 1, s->size[0], &kf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)EPS;
  }
  iv[0] = 1;
  iv[1] = i1;
  st.site = &cj_emlrtRSI;
  indexShapeCheck(&st, s->size[0], iv);
  if ((i1 != 2) && (i1 != 1)) {
    emlrtDimSizeImpxCheckR2021b(2, i1, &s_emlrtECI, (emlrtConstCTX)sp);
  }
  if (i == 2) {
    x[0] = physical.Earth[0] - s_data[0];
    x[1] = physical.Earth[1] - s_data[1];
  } else {
    g_binary_expand_op(x, &physical, s, 1);
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
      f_binary_expand_op(x, &physical, s, 1);
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
