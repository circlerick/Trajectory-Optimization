/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ode89.c
 *
 * Code generation for function 'ode89'
 *
 */

/* Include files */
#include "ode89.h"
#include "abs.h"
#include "assertCompatibleDims.h"
#include "eml_int_forloop_overflow_check.h"
#include "eps.h"
#include "explicitRungeKutta.h"
#include "norm.h"
#include "ntrp89.h"
#include "num2str.h"
#include "objfun_S_time_data.h"
#include "objfun_S_time_emxutil.h"
#include "objfun_S_time_types.h"
#include "odezero.h"
#include "rt_nonfinite.h"
#include "stopfuel.h"
#include "stopfunc.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo v_emlrtRSI = {
    17,      /* lineNo */
    "ode89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\ode89.m" /* pathName
                                                                         */
};

static emlrtRSInfo w_emlrtRSI = {
    631,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    568,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    562,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    561,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    556,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    518,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    466,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    463,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    429,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    416,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    419,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    418,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    397,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    395,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    358,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    352,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    308,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    216,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    90,                   /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                          */
};

static emlrtRSInfo rd_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                          */
};

static emlrtRSInfo kf_emlrtRSI = {
    38,    /* lineNo */
    "cat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRSInfo lf_emlrtRSI = {
    110,        /* lineNo */
    "cat_impl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRTEInfo c_emlrtRTEI = {
    295,                  /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    107,                  /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo e_emlrtRTEI = {
    56,                   /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    54,                   /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    49,                   /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    285,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    241,                  /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    242,                  /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    321,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    322,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    360,                  /* lineNo */
    13,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    656,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    478,                  /* lineNo */
    17,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    657,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    556,                  /* lineNo */
    13,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    640,                  /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    90,                   /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = {
    1,       /* lineNo */
    22,      /* colNo */
    "ode89", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\ode89.m" /* pName
                                                                         */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    556,                  /* lineNo */
    24,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static const real_T dv[13] = {0.64,   0.48,  0.06754, 0.25, 0.67709201535432428,
                              0.8115, 0.906, 1.0,     1.0,  0.74210100835830883,
                              0.888,  0.696, 0.487};

static emlrtRTEInfo oe_emlrtRTEI =
    {
        19,            /* lineNo */
        9,             /* colNo */
        "indexDivide", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\indexDivide.m" /* pName */
};

static emlrtRSInfo dh_emlrtRSI = {
    360,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

/* Function Definitions */
void b_ode89(const emlrtStack *sp, real_T ode_workspace_physical_Tmax,
             real_T ode_workspace_physical_c,
             real_T ode_workspace_physical_NSTATE,
             real_T ode_workspace_physical_shoot,
             real_T ode_workspace_physical_EPS, real_T ode_workspace_SIGN,
             const real_T tspan[2], const emxArray_real_T *b_y0,
             emxArray_real_T *varargout_1, emxArray_real_T *varargout_2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *ie;
  emxArray_real_T *a__2;
  emxArray_real_T *f;
  emxArray_real_T *f0;
  emxArray_real_T *fE;
  emxArray_real_T *r;
  emxArray_real_T *te;
  emxArray_real_T *tout;
  emxArray_real_T *varargin_1;
  emxArray_real_T *y;
  emxArray_real_T *ye;
  emxArray_real_T *ynew;
  emxArray_real_T *yout;
  emxArray_real_T *youtnew;
  const real_T *y0_data;
  real_T absh;
  real_T hmax;
  real_T hmin;
  real_T rh;
  real_T t;
  real_T t0;
  real_T tdir;
  real_T tfinal;
  real_T valt;
  real_T *f0_data;
  real_T *f_data;
  real_T *tout_data;
  real_T *y_data;
  real_T *ynew_data;
  real_T *yout_data;
  real_T *youtnew_data;
  int32_T b_i;
  int32_T chunk;
  int32_T i;
  int32_T j;
  int32_T ncols;
  int32_T neq;
  int32_T nfevals;
  int32_T nout;
  int32_T nrows;
  boolean_T Done;
  boolean_T MinStepExit;
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  y0_data = b_y0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &v_emlrtRSI;
  t0 = tspan[0];
  tfinal = tspan[1];
  if (tspan[0] == tspan[1]) {
    emlrtErrorWithMessageIdR2018a(
        &st, &f_emlrtRTEI, "MATLAB:odearguments:TspanEndpointsNotDistinct",
        "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }
  if (!ismonotonic(tspan)) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
                                  "MATLAB:odearguments:TspanNotMonotonic",
                                  "MATLAB:odearguments:TspanNotMonotonic", 0);
  }
  neq = b_y0->size[0];
  b_st.site = &pb_emlrtRSI;
  emxInit_real_T(&b_st, &f0, 1, &yb_emlrtRTEI);
  c_st.site = &qb_emlrtRSI;
  b_explicitRungeKutta_anonFcn1(
      &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
      ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
      ode_workspace_physical_EPS, ode_workspace_SIGN, b_y0, f0);
  f0_data = f0->data;
  nfevals = 1;
  if (f0->size[0] != b_y0->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI, "Coder:toolbox:SizeIC",
                                  "Coder:toolbox:SizeIC", 0);
  }
  b_st.site = &ob_emlrtRSI;
  c_st.site = &uf_emlrtRSI;
  valt = stopfuel(&c_st, b_y0);
  if ((uint32_T)b_y0->size[0] == 0U) {
    emlrtDivisionByZeroErrorR2012b(&oe_emlrtRTEI, &st);
  } else {
    i = (int32_T)(8192U / (uint32_T)b_y0->size[0]);
  }
  i += 8;
  chunk = muIntScalarMin_sint32(400, i);
  emxInit_real_T(&st, &tout, 2, &mb_emlrtRTEI);
  i = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = chunk;
  emxEnsureCapacity_real_T(&st, tout, i, &mb_emlrtRTEI);
  tout_data = tout->data;
  for (i = 0; i < chunk; i++) {
    tout_data[i] = 0.0;
  }
  emxInit_real_T(&st, &yout, 2, &nb_emlrtRTEI);
  i = yout->size[0] * yout->size[1];
  yout->size[0] = b_y0->size[0];
  yout->size[1] = chunk;
  emxEnsureCapacity_real_T(&st, yout, i, &nb_emlrtRTEI);
  yout_data = yout->data;
  nrows = b_y0->size[0] * chunk;
  for (i = 0; i < nrows; i++) {
    yout_data[i] = 0.0;
  }
  nout = 0;
  tout_data[0] = tspan[0];
  nrows = b_y0->size[0];
  for (i = 0; i < nrows; i++) {
    yout_data[i] = y0_data[i];
  }
  hmin = tspan[1] - tspan[0];
  rh = muDoubleScalarAbs(hmin);
  hmax = muDoubleScalarMin(rh, 0.001);
  if (!(hmax > 0.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "MATLAB:odearguments:MaxStepLEzero",
                                  "MATLAB:odearguments:MaxStepLEzero", 0);
  }
  absh = muDoubleScalarMin(hmax, rh);
  emxInit_real_T(&st, &y, 1, &pb_emlrtRTEI);
  b_st.site = &nb_emlrtRSI;
  b_abs(&b_st, b_y0, y);
  y_data = y->data;
  nrows = y->size[0];
  for (i = 0; i < nrows; i++) {
    rh = y_data[i];
    y_data[i] = muDoubleScalarMax(rh, 1.0);
  }
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pd_emlrtRSI;
  d_st.site = &qd_emlrtRSI;
  assertCompatibleDims(&d_st, f0, y);
  if (f0->size[0] == y->size[0]) {
    i = y->size[0];
    y->size[0] = f0->size[0];
    emxEnsureCapacity_real_T(&st, y, i, &ob_emlrtRTEI);
    y_data = y->data;
    nrows = f0->size[0];
    for (i = 0; i < nrows; i++) {
      y_data[i] = f0_data[i] / y_data[i];
    }
    rh = b_norm(y) / 0.026619369535913946;
  } else {
    b_st.site = &nb_emlrtRSI;
    rh = d_binary_expand_op(&b_st, f0, y);
  }
  if (absh * rh > 1.0) {
    absh = 1.0 / rh;
  }
  absh = muDoubleScalarMax(absh, 16.0 * eps(tspan[0]));
  t = tspan[0];
  i = y->size[0];
  y->size[0] = b_y0->size[0];
  emxEnsureCapacity_real_T(&st, y, i, &pb_emlrtRTEI);
  y_data = y->data;
  nrows = b_y0->size[0];
  for (i = 0; i < nrows; i++) {
    y_data[i] = y0_data[i];
  }
  emxInit_real_T(&st, &f, 2, &qb_emlrtRTEI);
  i = f->size[0] * f->size[1];
  f->size[0] = b_y0->size[0];
  f->size[1] = 14;
  emxEnsureCapacity_real_T(&st, f, i, &qb_emlrtRTEI);
  f_data = f->data;
  nrows = b_y0->size[0] * 14;
  for (i = 0; i < nrows; i++) {
    f_data[i] = 0.0;
  }
  nrows = f0->size[0];
  for (i = 0; i < nrows; i++) {
    f_data[i] = f0_data[i];
  }
  tdir = muDoubleScalarSign(hmin);
  MinStepExit = false;
  Done = false;
  emxInit_real_T(&st, &ynew, 1, &rb_emlrtRTEI);
  emxInit_real_T(&st, &a__2, 2, &ac_emlrtRTEI);
  emxInit_real_T(&st, &youtnew, 2, &vb_emlrtRTEI);
  emxInit_real_T(&st, &fE, 1, &ac_emlrtRTEI);
  emxInit_real_T(&st, &te, 2, &ac_emlrtRTEI);
  emxInit_real_T(&st, &ye, 2, &ac_emlrtRTEI);
  emxInit_int32_T(&st, &ie, &ac_emlrtRTEI);
  emxInit_real_T(&st, &r, 2, &ac_emlrtRTEI);
  emxInit_real_T(&st, &varargin_1, 2, &bc_emlrtRTEI);
  real_T d;
  real_T h;
  int32_T exitg1;
  do {
    real_T err;
    real_T tnew;
    boolean_T NoFailedAttempts;
    exitg1 = 0;
    hmin = 16.0 * eps(t);
    absh = muDoubleScalarMin(hmax, muDoubleScalarMax(hmin, absh));
    h = tdir * absh;
    d = tfinal - t;
    rh = muDoubleScalarAbs(d);
    if (1.1 * absh >= rh) {
      h = d;
      absh = rh;
      Done = true;
    }
    NoFailedAttempts = true;
    int32_T exitg2;
    do {
      exitg2 = 0;
      if (t == t0) {
        nrows = f0->size[0];
        for (i = 0; i < nrows; i++) {
          f_data[i] = f0_data[i];
        }
      } else if (NoFailedAttempts) {
        b_st.site = &mb_emlrtRSI;
        c_st.site = &qb_emlrtRSI;
        b_explicitRungeKutta_anonFcn1(
            &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
            ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
            ode_workspace_physical_EPS, ode_workspace_SIGN, y, ynew);
        ynew_data = ynew->data;
        nrows = ynew->size[0];
        for (i = 0; i < nrows; i++) {
          f_data[i] = ynew_data[i];
        }
        nfevals++;
      }
      b_st.site = &lb_emlrtRSI;
      b_computeMainStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN, y, h, f, &nfevals,
          ynew, fE);
      f_data = f->data;
      if (y->size[0] == ynew->size[0]) {
        i = ynew->size[0];
        ynew->size[0] = y->size[0];
        emxEnsureCapacity_real_T(&st, ynew, i, &rb_emlrtRTEI);
        ynew_data = ynew->data;
        nrows = y->size[0];
        for (i = 0; i < nrows; i++) {
          ynew_data[i] = y_data[i] + h * ynew_data[i];
        }
      } else {
        b_st.site = &dh_emlrtRSI;
        c_binary_expand_op(&b_st, ynew, y, h);
        ynew_data = ynew->data;
      }
      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }
      h = tnew - t;
      if (NoFailedAttempts) {
        b_st.site = &kb_emlrtRSI;
        err = absh * maxScaledError(&b_st, fE, y, ynew);
      } else {
        b_st.site = &jb_emlrtRSI;
        err = absh * b_maxScaledError(&b_st, fE, y);
      }
      if (!(err <= 5.0E-14)) {
        if (absh <= hmin) {
          char_T cv[23];
          char_T cv1[23];
          b_st.site = &ib_emlrtRSI;
          num2str(&b_st, t, cv);
          b_st.site = &hb_emlrtRSI;
          num2str(&b_st, hmin, cv1);
          b_st.site = &gb_emlrtRSI;
          warning(&b_st, cv, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &fb_emlrtRSI;
            c_st.site = &rd_emlrtRSI;
            absh = muDoubleScalarMax(
                hmin,
                absh * muDoubleScalarMax(
                           0.1, 0.8 * muDoubleScalarPower(5.0E-14 / err,
                                                          0.1111111111111111)));
          } else {
            absh = muDoubleScalarMax(hmin, 0.5 * absh);
          }
          h = tdir * absh;
          Done = false;
        }
      } else {
        exitg2 = 1;
      }
    } while (exitg2 == 0);
    if (MinStepExit) {
      exitg1 = 1;
    } else {
      real_T toutnew[8];
      real_T tref[7];
      int32_T outidx;
      int8_T input_sizes_idx_1;
      int8_T sizes_idx_1;
      b_st.site = &eb_emlrtRSI;
      b_computeCEStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN, y, h, f, &nfevals);
      f_data = f->data;
      b_st.site = &db_emlrtRSI;
      b_odezero(&b_st, valt, t, y, tnew, ynew, t0, h, f, &ncols, te, ye, ie,
                &valt, &empty_non_axis_sizes);
      y_data = ye->data;
      youtnew_data = te->data;
      if ((ncols > 0) && empty_non_axis_sizes) {
        real_T b_t[13];
        tnew = youtnew_data[te->size[1] - 1];
        i = ynew->size[0];
        ynew->size[0] = neq;
        emxEnsureCapacity_real_T(&st, ynew, i, &tb_emlrtRTEI);
        ynew_data = ynew->data;
        for (i = 0; i < neq; i++) {
          ynew_data[i] = y_data[i + ye->size[0] * (ye->size[1] - 1)];
        }
        rh = youtnew_data[te->size[1] - 1] - t;
        Done = true;
        for (i = 0; i < 13; i++) {
          b_t[i] = t + dv[i] * rh;
        }
        b_st.site = &cb_emlrtRSI;
        ntrp89(&b_st, b_t, t, y, h, f, a__2, r);
        y_data = r->data;
        nrows = r->size[0];
        for (i = 0; i < 13; i++) {
          for (b_i = 0; b_i < nrows; b_i++) {
            f_data[b_i + f->size[0] * (i + 1)] = y_data[b_i + r->size[0] * i];
          }
        }
        h = rh;
      }
      outidx = nout + 1;
      rh = tnew - t;
      for (i = 0; i < 7; i++) {
        d = t + rh * (0.125 * (real_T)i + 0.125);
        tref[i] = d;
        toutnew[i] = d;
      }
      toutnew[7] = tnew;
      b_st.site = &bb_emlrtRSI;
      c_st.site = &bb_emlrtRSI;
      b_ntrp89(&c_st, tref, t, y, h, f, varargin_1);
      y_data = varargin_1->data;
      c_st.site = &kf_emlrtRSI;
      if (varargin_1->size[0] != 0) {
        ncols = varargin_1->size[0];
      } else if (ynew->size[0] != 0) {
        ncols = ynew->size[0];
      } else {
        ncols = 0;
      }
      d_st.site = &lf_emlrtRSI;
      if ((varargin_1->size[0] != ncols) && (varargin_1->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &h_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if ((ynew->size[0] != ncols) && (ynew->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &h_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      empty_non_axis_sizes = (ncols == 0);
      if (empty_non_axis_sizes || (varargin_1->size[0] != 0)) {
        input_sizes_idx_1 = 7;
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (ynew->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      i = youtnew->size[0] * youtnew->size[1];
      youtnew->size[0] = ncols;
      youtnew->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&c_st, youtnew, i, &vb_emlrtRTEI);
      youtnew_data = youtnew->data;
      nrows = input_sizes_idx_1;
      for (i = 0; i < nrows; i++) {
        for (b_i = 0; b_i < ncols; b_i++) {
          youtnew_data[b_i + youtnew->size[0] * i] = y_data[b_i + ncols * i];
        }
      }
      nrows = sizes_idx_1;
      for (i = 0; i < nrows; i++) {
        for (b_i = 0; b_i < ncols; b_i++) {
          youtnew_data[b_i + youtnew->size[0] * input_sizes_idx_1] =
              ynew_data[b_i];
        }
      }
      nout += 8;
      if (nout + 1 > tout->size[1]) {
        b_st.site = &ab_emlrtRSI;
        ncols = tout->size[1];
        i = tout->size[0] * tout->size[1];
        tout->size[0] = 1;
        tout->size[1] += chunk;
        emxEnsureCapacity_real_T(&b_st, tout, i, &wb_emlrtRTEI);
        tout_data = tout->data;
        c_st.site = &ff_emlrtRSI;
        i = (uint16_T)chunk;
        for (j = 0; j < i; j++) {
          tout_data[ncols + j] = 0.0;
        }
        b_st.site = &y_emlrtRSI;
        nrows = yout->size[0];
        ncols = yout->size[1];
        b_i = yout->size[0] * yout->size[1];
        yout->size[1] += chunk;
        emxEnsureCapacity_real_T(&b_st, yout, b_i, &wb_emlrtRTEI);
        yout_data = yout->data;
        c_st.site = &ff_emlrtRSI;
        empty_non_axis_sizes = (yout->size[0] > 2147483646);
        for (j = 0; j < i; j++) {
          c_st.site = &gf_emlrtRSI;
          if (empty_non_axis_sizes) {
            d_st.site = &od_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }
          for (b_i = 0; b_i < nrows; b_i++) {
            yout_data[b_i + yout->size[0] * (ncols + j)] = 0.0;
          }
        }
      }
      empty_non_axis_sizes = (neq > 2147483646);
      for (nrows = 0; nrows < 8; nrows++) {
        ncols = nrows + outidx;
        tout_data[ncols] = toutnew[nrows];
        b_st.site = &x_emlrtRSI;
        if (empty_non_axis_sizes) {
          c_st.site = &od_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (j = 0; j < neq; j++) {
          yout_data[j + yout->size[0] * ncols] =
              youtnew_data[j + youtnew->size[0] * nrows];
        }
      }
      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &w_emlrtRSI;
          rh = err / 5.0E-14;
          c_st.site = &rd_emlrtRSI;
          d_st.site = &u_emlrtRSI;
          if (rh < 0.0) {
            emlrtErrorWithMessageIdR2018a(&d_st, &i_emlrtRTEI,
                                          "Coder:toolbox:power_domainError",
                                          "Coder:toolbox:power_domainError", 0);
          }
          rh = 1.25 * muDoubleScalarPower(rh, 0.1111111111111111);
          if (rh > 0.2) {
            absh /= rh;
          } else {
            absh *= 5.0;
          }
        }
        t = tnew;
        i = y->size[0];
        y->size[0] = ynew->size[0];
        emxEnsureCapacity_real_T(&st, y, i, &xb_emlrtRTEI);
        y_data = y->data;
        nrows = ynew->size[0];
        for (i = 0; i < nrows; i++) {
          y_data[i] = ynew_data[i];
        }
      }
    }
  } while (exitg1 == 0);
  emxFree_real_T(&st, &varargin_1);
  emxFree_real_T(&st, &r);
  emxFree_int32_T(&st, &ie);
  emxFree_real_T(&st, &ye);
  emxFree_real_T(&st, &te);
  emxFree_real_T(&st, &fE);
  emxFree_real_T(&st, &youtnew);
  emxFree_real_T(&st, &a__2);
  emxFree_real_T(&st, &ynew);
  emxFree_real_T(&st, &f);
  emxFree_real_T(&st, &y);
  emxFree_real_T(&st, &f0);
  if (nout + 1 < 1) {
    nrows = -1;
  } else {
    nrows = nout;
  }
  i = varargout_1->size[0];
  varargout_1->size[0] = nrows + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &sb_emlrtRTEI);
  y_data = varargout_1->data;
  for (i = 0; i <= nrows; i++) {
    y_data[i] = tout_data[i];
  }
  emxFree_real_T(&st, &tout);
  if (nout + 1 < 1) {
    nrows = -1;
  } else {
    nrows = nout;
  }
  i = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = nrows + 1;
  varargout_2->size[1] = yout->size[0];
  emxEnsureCapacity_real_T(&st, varargout_2, i, &ub_emlrtRTEI);
  y_data = varargout_2->data;
  ncols = yout->size[0];
  for (i = 0; i < ncols; i++) {
    for (b_i = 0; b_i <= nrows; b_i++) {
      y_data[b_i + varargout_2->size[0] * i] =
          yout_data[i + yout->size[0] * b_i];
    }
  }
  emxFree_real_T(&st, &yout);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void ode89(const emlrtStack *sp, real_T ode_workspace_physical_Tmax,
           real_T ode_workspace_physical_c,
           real_T ode_workspace_physical_NSTATE,
           real_T ode_workspace_physical_shoot,
           real_T ode_workspace_physical_EPS, real_T ode_workspace_S,
           const real_T tspan[2], const emxArray_real_T *b_y0,
           emxArray_real_T *varargout_1, emxArray_real_T *varargout_2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *ie;
  emxArray_real_T *a__2;
  emxArray_real_T *f;
  emxArray_real_T *f0;
  emxArray_real_T *fE;
  emxArray_real_T *r;
  emxArray_real_T *te;
  emxArray_real_T *tout;
  emxArray_real_T *varargin_1;
  emxArray_real_T *y;
  emxArray_real_T *ye;
  emxArray_real_T *ynew;
  emxArray_real_T *yout;
  emxArray_real_T *youtnew;
  const real_T *y0_data;
  real_T absh;
  real_T hmax;
  real_T hmin;
  real_T rh;
  real_T t;
  real_T t0;
  real_T tdir;
  real_T tfinal;
  real_T valt;
  real_T *f0_data;
  real_T *f_data;
  real_T *tout_data;
  real_T *y_data;
  real_T *ynew_data;
  real_T *yout_data;
  real_T *youtnew_data;
  int32_T chunk;
  int32_T i;
  int32_T j;
  int32_T ncols;
  int32_T neq;
  int32_T nfevals;
  int32_T nout;
  int32_T nrows;
  boolean_T Done;
  boolean_T MinStepExit;
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  y0_data = b_y0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &v_emlrtRSI;
  if (b_y0->size[0] == 0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &g_emlrtRTEI, "MATLAB:odearguments:TspanOrY0NotSupplied",
        "MATLAB:odearguments:TspanOrY0NotSupplied", 3, 4, 5, "ode89");
  }
  t0 = tspan[0];
  tfinal = tspan[1];
  if (tspan[0] == tspan[1]) {
    emlrtErrorWithMessageIdR2018a(
        &st, &f_emlrtRTEI, "MATLAB:odearguments:TspanEndpointsNotDistinct",
        "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }
  if (!ismonotonic(tspan)) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
                                  "MATLAB:odearguments:TspanNotMonotonic",
                                  "MATLAB:odearguments:TspanNotMonotonic", 0);
  }
  neq = b_y0->size[0];
  b_st.site = &pb_emlrtRSI;
  emxInit_real_T(&b_st, &f0, 1, &yb_emlrtRTEI);
  c_st.site = &qb_emlrtRSI;
  explicitRungeKutta_anonFcn1(
      &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
      ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
      ode_workspace_physical_EPS, ode_workspace_S, b_y0, f0);
  f0_data = f0->data;
  nfevals = 1;
  if (f0->size[0] != b_y0->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI, "Coder:toolbox:SizeIC",
                                  "Coder:toolbox:SizeIC", 0);
  }
  b_st.site = &ob_emlrtRSI;
  c_st.site = &jd_emlrtRSI;
  valt = stopfunc(&c_st, b_y0);
  chunk = (int32_T)(8192U / (uint32_T)b_y0->size[0]) + 8;
  chunk = muIntScalarMin_sint32(400, chunk);
  emxInit_real_T(&st, &tout, 2, &mb_emlrtRTEI);
  j = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = chunk;
  emxEnsureCapacity_real_T(&st, tout, j, &mb_emlrtRTEI);
  tout_data = tout->data;
  for (j = 0; j < chunk; j++) {
    tout_data[j] = 0.0;
  }
  emxInit_real_T(&st, &yout, 2, &nb_emlrtRTEI);
  j = yout->size[0] * yout->size[1];
  yout->size[0] = b_y0->size[0];
  yout->size[1] = chunk;
  emxEnsureCapacity_real_T(&st, yout, j, &nb_emlrtRTEI);
  yout_data = yout->data;
  nrows = b_y0->size[0] * chunk;
  for (j = 0; j < nrows; j++) {
    yout_data[j] = 0.0;
  }
  nout = 0;
  tout_data[0] = tspan[0];
  nrows = b_y0->size[0];
  for (j = 0; j < nrows; j++) {
    yout_data[j] = y0_data[j];
  }
  hmin = tspan[1] - tspan[0];
  rh = muDoubleScalarAbs(hmin);
  hmax = muDoubleScalarMin(
      rh, muDoubleScalarMax(
              0.1 * rh, 3.5527136788005009E-15 *
                            muDoubleScalarMax(muDoubleScalarAbs(tspan[0]),
                                              muDoubleScalarAbs(tspan[1]))));
  if (!(hmax > 0.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "MATLAB:odearguments:MaxStepLEzero",
                                  "MATLAB:odearguments:MaxStepLEzero", 0);
  }
  absh = muDoubleScalarMin(hmax, rh);
  emxInit_real_T(&st, &y, 1, &pb_emlrtRTEI);
  b_st.site = &nb_emlrtRSI;
  b_abs(&b_st, b_y0, y);
  y_data = y->data;
  nrows = y->size[0];
  for (j = 0; j < nrows; j++) {
    rh = y_data[j];
    y_data[j] = muDoubleScalarMax(rh, 1.0);
  }
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pd_emlrtRSI;
  d_st.site = &qd_emlrtRSI;
  assertCompatibleDims(&d_st, f0, y);
  if (f0->size[0] == y->size[0]) {
    j = y->size[0];
    y->size[0] = f0->size[0];
    emxEnsureCapacity_real_T(&st, y, j, &ob_emlrtRTEI);
    y_data = y->data;
    nrows = f0->size[0];
    for (j = 0; j < nrows; j++) {
      y_data[j] = f0_data[j] / y_data[j];
    }
    rh = b_norm(y) / 0.026619369535913946;
  } else {
    b_st.site = &nb_emlrtRSI;
    rh = d_binary_expand_op(&b_st, f0, y);
  }
  if (absh * rh > 1.0) {
    absh = 1.0 / rh;
  }
  absh = muDoubleScalarMax(absh, 16.0 * eps(tspan[0]));
  t = tspan[0];
  j = y->size[0];
  y->size[0] = b_y0->size[0];
  emxEnsureCapacity_real_T(&st, y, j, &pb_emlrtRTEI);
  y_data = y->data;
  nrows = b_y0->size[0];
  for (j = 0; j < nrows; j++) {
    y_data[j] = y0_data[j];
  }
  emxInit_real_T(&st, &f, 2, &qb_emlrtRTEI);
  j = f->size[0] * f->size[1];
  f->size[0] = b_y0->size[0];
  f->size[1] = 14;
  emxEnsureCapacity_real_T(&st, f, j, &qb_emlrtRTEI);
  f_data = f->data;
  nrows = b_y0->size[0] * 14;
  for (j = 0; j < nrows; j++) {
    f_data[j] = 0.0;
  }
  nrows = f0->size[0];
  for (j = 0; j < nrows; j++) {
    f_data[j] = f0_data[j];
  }
  tdir = muDoubleScalarSign(hmin);
  MinStepExit = false;
  Done = false;
  emxInit_real_T(&st, &ynew, 1, &rb_emlrtRTEI);
  emxInit_real_T(&st, &a__2, 2, &ac_emlrtRTEI);
  emxInit_real_T(&st, &youtnew, 2, &vb_emlrtRTEI);
  emxInit_real_T(&st, &fE, 1, &ac_emlrtRTEI);
  emxInit_real_T(&st, &te, 2, &ac_emlrtRTEI);
  emxInit_real_T(&st, &ye, 2, &ac_emlrtRTEI);
  emxInit_int32_T(&st, &ie, &ac_emlrtRTEI);
  emxInit_real_T(&st, &r, 2, &ac_emlrtRTEI);
  emxInit_real_T(&st, &varargin_1, 2, &bc_emlrtRTEI);
  real_T d;
  real_T h;
  int32_T exitg1;
  do {
    real_T err;
    real_T tnew;
    boolean_T NoFailedAttempts;
    exitg1 = 0;
    hmin = 16.0 * eps(t);
    absh = muDoubleScalarMin(hmax, muDoubleScalarMax(hmin, absh));
    h = tdir * absh;
    d = tfinal - t;
    rh = muDoubleScalarAbs(d);
    if (1.1 * absh >= rh) {
      h = d;
      absh = rh;
      Done = true;
    }
    NoFailedAttempts = true;
    int32_T exitg2;
    do {
      exitg2 = 0;
      if (t == t0) {
        nrows = f0->size[0];
        for (j = 0; j < nrows; j++) {
          f_data[j] = f0_data[j];
        }
      } else if (NoFailedAttempts) {
        b_st.site = &mb_emlrtRSI;
        c_st.site = &qb_emlrtRSI;
        explicitRungeKutta_anonFcn1(
            &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
            ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
            ode_workspace_physical_EPS, ode_workspace_S, y, ynew);
        ynew_data = ynew->data;
        nrows = ynew->size[0];
        for (j = 0; j < nrows; j++) {
          f_data[j] = ynew_data[j];
        }
        nfevals++;
      }
      b_st.site = &lb_emlrtRSI;
      computeMainStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_S, y, h, f, &nfevals, ynew,
          fE);
      f_data = f->data;
      if (y->size[0] == ynew->size[0]) {
        j = ynew->size[0];
        ynew->size[0] = y->size[0];
        emxEnsureCapacity_real_T(&st, ynew, j, &rb_emlrtRTEI);
        ynew_data = ynew->data;
        nrows = y->size[0];
        for (j = 0; j < nrows; j++) {
          ynew_data[j] = y_data[j] + h * ynew_data[j];
        }
      } else {
        b_st.site = &dh_emlrtRSI;
        c_binary_expand_op(&b_st, ynew, y, h);
        ynew_data = ynew->data;
      }
      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }
      h = tnew - t;
      if (NoFailedAttempts) {
        b_st.site = &kb_emlrtRSI;
        err = absh * maxScaledError(&b_st, fE, y, ynew);
      } else {
        b_st.site = &jb_emlrtRSI;
        err = absh * b_maxScaledError(&b_st, fE, y);
      }
      if (!(err <= 5.0E-14)) {
        if (absh <= hmin) {
          char_T cv[23];
          char_T cv1[23];
          b_st.site = &ib_emlrtRSI;
          num2str(&b_st, t, cv);
          b_st.site = &hb_emlrtRSI;
          num2str(&b_st, hmin, cv1);
          b_st.site = &gb_emlrtRSI;
          warning(&b_st, cv, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &fb_emlrtRSI;
            c_st.site = &rd_emlrtRSI;
            absh = muDoubleScalarMax(
                hmin,
                absh * muDoubleScalarMax(
                           0.1, 0.8 * muDoubleScalarPower(5.0E-14 / err,
                                                          0.1111111111111111)));
          } else {
            absh = muDoubleScalarMax(hmin, 0.5 * absh);
          }
          h = tdir * absh;
          Done = false;
        }
      } else {
        exitg2 = 1;
      }
    } while (exitg2 == 0);
    if (MinStepExit) {
      exitg1 = 1;
    } else {
      real_T toutnew[8];
      real_T tref[7];
      int32_T outidx;
      int8_T input_sizes_idx_1;
      int8_T sizes_idx_1;
      b_st.site = &eb_emlrtRSI;
      computeCEStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_S, y, h, f, &nfevals);
      f_data = f->data;
      b_st.site = &db_emlrtRSI;
      odezero(&b_st, valt, t, y, tnew, ynew, t0, h, f, &ncols, te, ye, ie,
              &valt, &empty_non_axis_sizes);
      y_data = ye->data;
      youtnew_data = te->data;
      if ((ncols > 0) && empty_non_axis_sizes) {
        real_T b_t[13];
        tnew = youtnew_data[te->size[1] - 1];
        j = ynew->size[0];
        ynew->size[0] = neq;
        emxEnsureCapacity_real_T(&st, ynew, j, &tb_emlrtRTEI);
        ynew_data = ynew->data;
        for (j = 0; j < neq; j++) {
          ynew_data[j] = y_data[j + ye->size[0] * (ye->size[1] - 1)];
        }
        rh = youtnew_data[te->size[1] - 1] - t;
        Done = true;
        for (j = 0; j < 13; j++) {
          b_t[j] = t + dv[j] * rh;
        }
        b_st.site = &cb_emlrtRSI;
        ntrp89(&b_st, b_t, t, y, h, f, a__2, r);
        y_data = r->data;
        nrows = r->size[0];
        for (j = 0; j < 13; j++) {
          for (i = 0; i < nrows; i++) {
            f_data[i + f->size[0] * (j + 1)] = y_data[i + r->size[0] * j];
          }
        }
        h = rh;
      }
      outidx = nout + 1;
      rh = tnew - t;
      for (j = 0; j < 7; j++) {
        d = t + rh * (0.125 * (real_T)j + 0.125);
        tref[j] = d;
        toutnew[j] = d;
      }
      toutnew[7] = tnew;
      b_st.site = &bb_emlrtRSI;
      c_st.site = &bb_emlrtRSI;
      b_ntrp89(&c_st, tref, t, y, h, f, varargin_1);
      y_data = varargin_1->data;
      c_st.site = &kf_emlrtRSI;
      if (varargin_1->size[0] != 0) {
        ncols = varargin_1->size[0];
      } else if (ynew->size[0] != 0) {
        ncols = ynew->size[0];
      } else {
        ncols = 0;
      }
      d_st.site = &lf_emlrtRSI;
      if ((varargin_1->size[0] != ncols) && (varargin_1->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &h_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if ((ynew->size[0] != ncols) && (ynew->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &h_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      empty_non_axis_sizes = (ncols == 0);
      if (empty_non_axis_sizes || (varargin_1->size[0] != 0)) {
        input_sizes_idx_1 = 7;
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (ynew->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      j = youtnew->size[0] * youtnew->size[1];
      youtnew->size[0] = ncols;
      youtnew->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&c_st, youtnew, j, &vb_emlrtRTEI);
      youtnew_data = youtnew->data;
      nrows = input_sizes_idx_1;
      for (j = 0; j < nrows; j++) {
        for (i = 0; i < ncols; i++) {
          youtnew_data[i + youtnew->size[0] * j] = y_data[i + ncols * j];
        }
      }
      nrows = sizes_idx_1;
      for (j = 0; j < nrows; j++) {
        for (i = 0; i < ncols; i++) {
          youtnew_data[i + youtnew->size[0] * input_sizes_idx_1] = ynew_data[i];
        }
      }
      nout += 8;
      if (nout + 1 > tout->size[1]) {
        b_st.site = &ab_emlrtRSI;
        ncols = tout->size[1];
        j = tout->size[0] * tout->size[1];
        tout->size[0] = 1;
        tout->size[1] += chunk;
        emxEnsureCapacity_real_T(&b_st, tout, j, &wb_emlrtRTEI);
        tout_data = tout->data;
        c_st.site = &ff_emlrtRSI;
        for (j = 0; j < chunk; j++) {
          tout_data[ncols + j] = 0.0;
        }
        b_st.site = &y_emlrtRSI;
        nrows = yout->size[0];
        ncols = yout->size[1];
        j = yout->size[0] * yout->size[1];
        yout->size[1] += chunk;
        emxEnsureCapacity_real_T(&b_st, yout, j, &wb_emlrtRTEI);
        yout_data = yout->data;
        c_st.site = &ff_emlrtRSI;
        empty_non_axis_sizes = (yout->size[0] > 2147483646);
        for (j = 0; j < chunk; j++) {
          c_st.site = &gf_emlrtRSI;
          if (empty_non_axis_sizes) {
            d_st.site = &od_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }
          for (i = 0; i < nrows; i++) {
            yout_data[i + yout->size[0] * (ncols + j)] = 0.0;
          }
        }
      }
      empty_non_axis_sizes = (neq > 2147483646);
      for (nrows = 0; nrows < 8; nrows++) {
        ncols = nrows + outidx;
        tout_data[ncols] = toutnew[nrows];
        b_st.site = &x_emlrtRSI;
        if (empty_non_axis_sizes) {
          c_st.site = &od_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (j = 0; j < neq; j++) {
          yout_data[j + yout->size[0] * ncols] =
              youtnew_data[j + youtnew->size[0] * nrows];
        }
      }
      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &w_emlrtRSI;
          rh = err / 5.0E-14;
          c_st.site = &rd_emlrtRSI;
          d_st.site = &u_emlrtRSI;
          if (rh < 0.0) {
            emlrtErrorWithMessageIdR2018a(&d_st, &i_emlrtRTEI,
                                          "Coder:toolbox:power_domainError",
                                          "Coder:toolbox:power_domainError", 0);
          }
          rh = 1.25 * muDoubleScalarPower(rh, 0.1111111111111111);
          if (rh > 0.2) {
            absh /= rh;
          } else {
            absh *= 5.0;
          }
        }
        t = tnew;
        j = y->size[0];
        y->size[0] = ynew->size[0];
        emxEnsureCapacity_real_T(&st, y, j, &xb_emlrtRTEI);
        y_data = y->data;
        nrows = ynew->size[0];
        for (j = 0; j < nrows; j++) {
          y_data[j] = ynew_data[j];
        }
      }
    }
  } while (exitg1 == 0);
  emxFree_real_T(&st, &varargin_1);
  emxFree_real_T(&st, &r);
  emxFree_int32_T(&st, &ie);
  emxFree_real_T(&st, &ye);
  emxFree_real_T(&st, &te);
  emxFree_real_T(&st, &fE);
  emxFree_real_T(&st, &youtnew);
  emxFree_real_T(&st, &a__2);
  emxFree_real_T(&st, &ynew);
  emxFree_real_T(&st, &f);
  emxFree_real_T(&st, &y);
  emxFree_real_T(&st, &f0);
  if (nout + 1 < 1) {
    nrows = -1;
  } else {
    nrows = nout;
  }
  j = varargout_1->size[0];
  varargout_1->size[0] = nrows + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, j, &sb_emlrtRTEI);
  y_data = varargout_1->data;
  for (j = 0; j <= nrows; j++) {
    y_data[j] = tout_data[j];
  }
  emxFree_real_T(&st, &tout);
  if (nout + 1 < 1) {
    nrows = -1;
  } else {
    nrows = nout;
  }
  j = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = nrows + 1;
  varargout_2->size[1] = yout->size[0];
  emxEnsureCapacity_real_T(&st, varargout_2, j, &ub_emlrtRTEI);
  y_data = varargout_2->data;
  ncols = yout->size[0];
  for (j = 0; j < ncols; j++) {
    for (i = 0; i <= nrows; i++) {
      y_data[i + varargout_2->size[0] * j] = yout_data[j + yout->size[0] * i];
    }
  }
  emxFree_real_T(&st, &yout);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (ode89.c) */
