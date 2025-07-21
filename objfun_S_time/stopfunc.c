/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * stopfunc.c
 *
 * Code generation for function 'stopfunc'
 *
 */

/* Include files */
#include "stopfunc.h"
#include "indexShapeCheck.h"
#include "objfun_S_time_data.h"
#include "objfun_S_time_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo kd_emlrtRSI = {
    12,                                                   /* lineNo */
    "stopfunc",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfunc.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    14,                                                   /* lineNo */
    "stopfunc",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfunc.m" /* pathName */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    12,                                                    /* lineNo */
    18,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfunc",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfunc.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    12,                                                    /* lineNo */
    20,                                                    /* colNo */
    "stopfunc",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfunc.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    12,                                                    /* lineNo */
    20,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfunc",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfunc.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo m_emlrtECI = {
    1,                                                    /* nDims */
    12,                                                   /* lineNo */
    9,                                                    /* colNo */
    "stopfunc",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfunc.m" /* pName */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    14,                                                    /* lineNo */
    21,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfunc",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfunc.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    14,                                                    /* lineNo */
    23,                                                    /* colNo */
    "s",                                                   /* aName */
    "stopfunc",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfunc.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo n_emlrtECI = {
    1,                                                    /* nDims */
    14,                                                   /* lineNo */
    13,                                                   /* colNo */
    "stopfunc",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopfunc.m" /* pName */
};

/* Function Definitions */
void e_binary_expand_op(real_T in1[2], const struct_T *in2,
                        const emxArray_real_T *in3, int32_T in4)
{
  const real_T *in3_data;
  in3_data = in3->data;
  in1[0] = in2->Moon[0] - in3_data[0];
  in1[1] = in2->Moon[1] - in3_data[in4 != 1];
}

void f_binary_expand_op(real_T in1[2], const struct_T *in2,
                        const emxArray_real_T *in3, int32_T in4)
{
  const real_T *in3_data;
  in3_data = in3->data;
  in1[0] = in2->Earth[0] - in3_data[0];
  in1[1] = in2->Earth[1] - in3_data[in4 != 1];
}

real_T stopfunc(const emlrtStack *sp, const emxArray_real_T *s)
{
  emlrtStack st;
  real_T x[2];
  const real_T *s_data;
  real_T absxk;
  real_T d;
  real_T scale;
  real_T t;
  real_T value;
  real_T y;
  int32_T iv[2];
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  s_data = s->data;
  /*  Stops ode integration when value is = 0. Used to avoid trajectories too */
  /*  close to some positions (eg intersection with Earth or Moon) */
  value = 1.0;
  /*  check is spacecraft is too close to the Earth or the Moon */
  d = muDoubleScalarRound((physical.NSTATE - 1.0) / 2.0);
  if (d < 1.0) {
    i = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &pc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (d != (int32_T)d) {
      emlrtIntegerCheckR2012b(d, &w_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &qc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)d;
  }
  iv[0] = 1;
  iv[1] = i;
  st.site = &kd_emlrtRSI;
  indexShapeCheck(&st, s->size[0], iv);
  if ((i != 2) && (i != 1)) {
    emlrtDimSizeImpxCheckR2021b(2, i, &m_emlrtECI, (emlrtConstCTX)sp);
  }
  if (i == 2) {
    x[0] = physical.Earth[0] - s_data[0];
    x[1] = physical.Earth[1] - s_data[1];
  } else {
    f_binary_expand_op(x, &physical, s, 1);
  }
  scale = 3.3121686421112381E-170;
  absxk = muDoubleScalarAbs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }
  absxk = muDoubleScalarAbs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }
  y = scale * muDoubleScalarSqrt(y);
  if (y < physical.RE) {
    value = -1.0;
  } else {
    if (d < 1.0) {
      i = 0;
    } else {
      if (s->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &rc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &sc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)d;
    }
    iv[0] = 1;
    iv[1] = i;
    st.site = &ld_emlrtRSI;
    indexShapeCheck(&st, s->size[0], iv);
    if ((i != 2) && (i != 1)) {
      emlrtDimSizeImpxCheckR2021b(2, i, &n_emlrtECI, (emlrtConstCTX)sp);
    }
    if (i == 2) {
      x[0] = physical.Moon[0] - s_data[0];
      x[1] = physical.Moon[1] - s_data[1];
    } else {
      e_binary_expand_op(x, &physical, s, 1);
    }
    scale = 3.3121686421112381E-170;
    absxk = muDoubleScalarAbs(x[0]);
    if (absxk > 3.3121686421112381E-170) {
      y = 1.0;
      scale = absxk;
    } else {
      t = absxk / 3.3121686421112381E-170;
      y = t * t;
    }
    absxk = muDoubleScalarAbs(x[1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
    y = scale * muDoubleScalarSqrt(y);
    if (y < physical.RM) {
      value = -1.0;
    }
  }
  return value;
}

/* End of code generation (stopfunc.c) */
