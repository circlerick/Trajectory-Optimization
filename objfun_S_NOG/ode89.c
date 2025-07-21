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
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "odezero.h"
#include "rt_nonfinite.h"
#include "stopNOG.h"
#include "stopfuel.h"
#include "warning.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo wb_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                          */
};

static emlrtRSInfo yb_emlrtRSI = {
    17,      /* lineNo */
    "ode89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\ode89.m" /* pathName
                                                                         */
};

static emlrtRSInfo ac_emlrtRSI = {
    631,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    568,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    562,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    561,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = {
    556,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = {
    518,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    466,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    463,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    429,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    416,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = {
    419,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    418,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    397,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    395,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    358,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    352,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    308,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    216,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = {
    90,                   /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo bk_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" /* pathName */
};

static emlrtRSInfo ck_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                          */
};

static emlrtRSInfo ml_emlrtRSI = {
    15,                  /* lineNo */
    "appendZeroColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\appendZ"
    "eroColumns.m" /* pathName */
};

static emlrtRSInfo nl_emlrtRSI = {
    16,                  /* lineNo */
    "appendZeroColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\appendZ"
    "eroColumns.m" /* pathName */
};

static emlrtRSInfo rl_emlrtRSI = {
    38,    /* lineNo */
    "cat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRSInfo sl_emlrtRSI = {
    110,        /* lineNo */
    "cat_impl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRTEInfo h_emlrtRTEI = {
    295,                  /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    107,                  /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    56,                   /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo k_emlrtRTEI = {
    54,                   /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    285,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    241,                  /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    242,                  /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    656,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    657,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    562,                  /* lineNo */
    42,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    562,                  /* lineNo */
    17,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    90,                   /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    1,       /* lineNo */
    22,      /* colNo */
    "ode89", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\ode89.m" /* pName
                                                                         */
};

static const real_T dv[13] = {0.64,   0.48,  0.06754, 0.25, 0.67709201535432428,
                              0.8115, 0.906, 1.0,     1.0,  0.74210100835830883,
                              0.888,  0.696, 0.487};

static emlrtRTEInfo th_emlrtRTEI =
    {
        19,            /* lineNo */
        9,             /* colNo */
        "indexDivide", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\indexDivide.m" /* pName */
};

/* Function Definitions */
void b_ode89(const emlrtStack *sp, real_T ode_workspace_physical_Tmax,
             real_T ode_workspace_physical_c,
             real_T ode_workspace_physical_NSTATE,
             real_T ode_workspace_physical_shoot,
             real_T ode_workspace_physical_EPS, real_T ode_workspace_SIGN_nom,
             const real_T tspan[2], const real_T y0_data[], int32_T y0_size,
             emxArray_real_T *varargout_1, emxArray_real_T *varargout_2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *ie;
  emxArray_real_T b_y0_data;
  emxArray_real_T b_y_data;
  emxArray_real_T *b_f0;
  emxArray_real_T *f0;
  emxArray_real_T *te;
  emxArray_real_T *tout;
  emxArray_real_T *y;
  emxArray_real_T *ye;
  emxArray_real_T *yout;
  real_T a__2_data[3159];
  real_T tmp_data[3159];
  real_T varargin_1_data[1701];
  real_T f_data[1694];
  real_T maxval_data[243];
  real_T y_data[121];
  real_T ynew_data[121];
  real_T absh;
  real_T hmax;
  real_T hmin;
  real_T rh;
  real_T t;
  real_T t0;
  real_T tdir;
  real_T tfinal;
  real_T valt;
  real_T *b_f0_data;
  real_T *f0_data;
  real_T *te_data;
  real_T *tout_data;
  real_T *yout_data;
  int32_T f_size[2];
  int32_T i;
  int32_T i1;
  int32_T j;
  int32_T loop_ub;
  int32_T ncols;
  int32_T neq;
  int32_T nfevals;
  int32_T nout;
  int32_T y_size;
  int32_T ynew_size;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &yb_emlrtRSI;
  t0 = tspan[0];
  tfinal = tspan[1];
  if (tspan[0] == tspan[1]) {
    emlrtErrorWithMessageIdR2018a(
        &st, &k_emlrtRTEI, "MATLAB:odearguments:TspanEndpointsNotDistinct",
        "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }
  if (!ismonotonic(tspan)) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI,
                                  "MATLAB:odearguments:TspanNotMonotonic",
                                  "MATLAB:odearguments:TspanNotMonotonic", 0);
  }
  neq = y0_size;
  b_st.site = &sc_emlrtRSI;
  b_y0_data.data = (real_T *)&y0_data[0];
  b_y0_data.size = &y0_size;
  b_y0_data.allocatedSize = -1;
  b_y0_data.numDimensions = 1;
  b_y0_data.canFreeData = false;
  emxInit_real_T(&b_st, &f0, 1, &vc_emlrtRTEI);
  c_st.site = &tc_emlrtRSI;
  b_explicitRungeKutta_anonFcn1(
      &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
      ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
      ode_workspace_physical_EPS, ode_workspace_SIGN_nom, &b_y0_data, f0);
  f0_data = f0->data;
  nfevals = 1;
  if (f0->size[0] != y0_size) {
    emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI, "Coder:toolbox:SizeIC",
                                  "Coder:toolbox:SizeIC", 0);
  }
  b_st.site = &rc_emlrtRSI;
  c_st.site = &tm_emlrtRSI;
  valt = stopfuel(&c_st, y0_data, y0_size);
  if ((uint32_T)y0_size == 0U) {
    emlrtDivisionByZeroErrorR2012b(&th_emlrtRTEI, &st);
  } else {
    i = (int32_T)(8192U / (uint32_T)y0_size);
  }
  ncols = i + 8;
  emxInit_real_T(&st, &tout, 2, &nc_emlrtRTEI);
  i1 = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = i + 8;
  emxEnsureCapacity_real_T(&st, tout, i1, &nc_emlrtRTEI);
  tout_data = tout->data;
  for (i1 = 0; i1 < ncols; i1++) {
    tout_data[i1] = 0.0;
  }
  emxInit_real_T(&st, &yout, 2, &oc_emlrtRTEI);
  i1 = yout->size[0] * yout->size[1];
  yout->size[0] = y0_size;
  yout->size[1] = i + 8;
  emxEnsureCapacity_real_T(&st, yout, i1, &oc_emlrtRTEI);
  yout_data = yout->data;
  loop_ub = y0_size * (i + 8);
  for (i1 = 0; i1 < loop_ub; i1++) {
    yout_data[i1] = 0.0;
  }
  nout = 0;
  tout_data[0] = tspan[0];
  loop_ub = y0_size;
  for (i1 = 0; i1 < loop_ub; i1++) {
    yout_data[i1] = y0_data[i1];
  }
  hmin = tspan[1] - tspan[0];
  rh = muDoubleScalarAbs(hmin);
  hmax = muDoubleScalarMin(rh, 0.0005);
  if (!(hmax > 0.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI,
                                  "MATLAB:odearguments:MaxStepLEzero",
                                  "MATLAB:odearguments:MaxStepLEzero", 0);
  }
  absh = muDoubleScalarMin(hmax, rh);
  b_st.site = &qc_emlrtRSI;
  b_abs(y0_data, y0_size, maxval_data, &ncols);
  for (i1 = 0; i1 < ncols; i1++) {
    maxval_data[i1] = muDoubleScalarMax(maxval_data[i1], 1.0);
  }
  b_st.site = &qc_emlrtRSI;
  c_st.site = &bk_emlrtRSI;
  d_st.site = &ck_emlrtRSI;
  assertCompatibleDims(&d_st, f0, ncols);
  emxInit_real_T(&st, &b_f0, 1, &pc_emlrtRTEI);
  if (f0->size[0] == ncols) {
    i1 = b_f0->size[0];
    b_f0->size[0] = f0->size[0];
    emxEnsureCapacity_real_T(&st, b_f0, i1, &pc_emlrtRTEI);
    b_f0_data = b_f0->data;
    loop_ub = f0->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_f0_data[i1] = f0_data[i1] / maxval_data[i1];
    }
    rh = d_norm(b_f0) / 0.026619369535913946;
  } else {
    b_st.site = &qc_emlrtRSI;
    rh = p_binary_expand_op(&b_st, f0, maxval_data, &ncols);
  }
  if (absh * rh > 1.0) {
    absh = 1.0 / rh;
  }
  absh = muDoubleScalarMax(absh, 16.0 * eps(tspan[0]));
  t = tspan[0];
  y_size = y0_size;
  loop_ub = y0_size;
  for (i1 = 0; i1 < loop_ub; i1++) {
    y_data[i1] = y0_data[i1];
  }
  f_size[0] = y0_size;
  f_size[1] = 14;
  loop_ub = y0_size * 14;
  if (loop_ub - 1 >= 0) {
    memset(&f_data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }
  loop_ub = f0->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    f_data[i1] = f0_data[i1];
  }
  tdir = muDoubleScalarSign(hmin);
  MinStepExit = false;
  Done = false;
  emxInit_real_T(&st, &te, 2, &wc_emlrtRTEI);
  emxInit_real_T(&st, &ye, 2, &wc_emlrtRTEI);
  emxInit_int32_T(&st, &ie, &wc_emlrtRTEI);
  emxInit_real_T(&st, &y, 2, &tc_emlrtRTEI);
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
        loop_ub = f0->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          f_data[i1] = f0_data[i1];
        }
      } else if (NoFailedAttempts) {
        b_st.site = &pc_emlrtRSI;
        b_y_data.data = &y_data[0];
        b_y_data.size = &y_size;
        b_y_data.allocatedSize = 121;
        b_y_data.numDimensions = 1;
        b_y_data.canFreeData = false;
        c_st.site = &tc_emlrtRSI;
        b_explicitRungeKutta_anonFcn1(
            &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
            ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
            ode_workspace_physical_EPS, ode_workspace_SIGN_nom, &b_y_data,
            b_f0);
        b_f0_data = b_f0->data;
        loop_ub = b_f0->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          f_data[i1] = b_f0_data[i1];
        }
        nfevals++;
      }
      b_st.site = &oc_emlrtRSI;
      b_computeMainStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN_nom, y_data, y_size, h,
          f_data, f_size, &nfevals, ynew_data, &ynew_size, b_f0);
      if (y_size == ynew_size) {
        ynew_size = y_size;
        loop_ub = y_size;
        for (i1 = 0; i1 < loop_ub; i1++) {
          ynew_data[i1] = y_data[i1] + h * ynew_data[i1];
        }
      } else {
        o_binary_expand_op(ynew_data, &ynew_size, y_data, &y_size, h);
      }
      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }
      h = tnew - t;
      if (NoFailedAttempts) {
        b_st.site = &nc_emlrtRSI;
        err = absh * maxScaledError(&b_st, b_f0, y_data, ynew_data);
      } else {
        b_st.site = &mc_emlrtRSI;
        err = absh * b_maxScaledError(&b_st, b_f0, y_data);
      }
      if (!(err <= 5.0E-14)) {
        if (absh <= hmin) {
          char_T cv[23];
          char_T cv1[23];
          b_st.site = &lc_emlrtRSI;
          num2str(&b_st, t, cv);
          b_st.site = &kc_emlrtRSI;
          num2str(&b_st, hmin, cv1);
          b_st.site = &jc_emlrtRSI;
          c_warning(&b_st, cv, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &ic_emlrtRSI;
            c_st.site = &wb_emlrtRSI;
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
      real_T result_data[1944];
      real_T toutnew[8];
      real_T tref[7];
      int32_T a__2_size[2];
      int32_T outidx;
      int32_T result;
      int8_T input_sizes_idx_1;
      int8_T sizes_idx_1;
      b_st.site = &hc_emlrtRSI;
      b_computeCEStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN_nom, y_data, y_size, h,
          f_data, f_size, &nfevals);
      b_st.site = &gc_emlrtRSI;
      b_odezero(&b_st, valt, t, y_data, y_size, tnew, ynew_data, ynew_size, t0,
                h, f_data, f_size, &ncols, te, ye, ie, &valt,
                &empty_non_axis_sizes);
      b_f0_data = ye->data;
      te_data = te->data;
      if ((ncols > 0) && empty_non_axis_sizes) {
        real_T b_t[13];
        int32_T tmp_size[2];
        tnew = te_data[te->size[1] - 1];
        ynew_size = neq;
        for (i1 = 0; i1 < neq; i1++) {
          ynew_data[i1] = b_f0_data[i1 + ye->size[0] * (ye->size[1] - 1)];
        }
        rh = te_data[te->size[1] - 1] - t;
        Done = true;
        for (i1 = 0; i1 < 13; i1++) {
          b_t[i1] = t + dv[i1] * rh;
        }
        b_st.site = &fc_emlrtRSI;
        ntrp89(b_t, t, y_data, y_size, h, f_data, f_size, a__2_data, a__2_size,
               tmp_data, tmp_size);
        loop_ub = tmp_size[0];
        for (i1 = 0; i1 < 13; i1++) {
          for (j = 0; j < loop_ub; j++) {
            f_data[j + f_size[0] * (i1 + 1)] = tmp_data[j + tmp_size[0] * i1];
          }
        }
        h = rh;
      }
      outidx = nout + 1;
      rh = tnew - t;
      for (i1 = 0; i1 < 7; i1++) {
        d = t + rh * (0.125 * (real_T)i1 + 0.125);
        tref[i1] = d;
        toutnew[i1] = d;
      }
      toutnew[7] = tnew;
      b_st.site = &ec_emlrtRSI;
      c_st.site = &ec_emlrtRSI;
      b_ntrp89(tref, t, y_data, y_size, h, f_data, f_size, varargin_1_data,
               a__2_size);
      c_st.site = &rl_emlrtRSI;
      if (a__2_size[0] != 0) {
        result = a__2_size[0];
      } else if (ynew_size != 0) {
        result = ynew_size;
      } else {
        result = 0;
      }
      d_st.site = &sl_emlrtRSI;
      if ((a__2_size[0] != result) && (a__2_size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &l_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if ((ynew_size != result) && (ynew_size != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &l_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || (a__2_size[0] != 0)) {
        input_sizes_idx_1 = 7;
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (ynew_size != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      loop_ub = input_sizes_idx_1;
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (j = 0; j < result; j++) {
          result_data[j + result * i1] = varargin_1_data[j + result * i1];
        }
      }
      loop_ub = sizes_idx_1;
      if (loop_ub - 1 >= 0) {
        for (i1 = 0; i1 < result; i1++) {
          result_data[i1 + result * input_sizes_idx_1] = ynew_data[i1];
        }
      }
      nout += 8;
      if (nout + 1 > tout->size[1]) {
        b_st.site = &dc_emlrtRSI;
        ncols = tout->size[1];
        i1 = tout->size[0] * tout->size[1];
        tout->size[0] = 1;
        tout->size[1] = (tout->size[1] + i) + 8;
        emxEnsureCapacity_real_T(&b_st, tout, i1, &sc_emlrtRTEI);
        tout_data = tout->data;
        c_st.site = &ml_emlrtRSI;
        if (i + 8 > 2147483646) {
          d_st.site = &ne_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        i1 = (uint16_T)(i + 8);
        for (j = 0; j < i1; j++) {
          tout_data[ncols + j] = 0.0;
        }
        b_st.site = &cc_emlrtRSI;
        j = y->size[0] * y->size[1];
        y->size[0] = yout->size[0];
        y->size[1] = yout->size[1];
        emxEnsureCapacity_real_T(&b_st, y, j, &tc_emlrtRTEI);
        b_f0_data = y->data;
        loop_ub = yout->size[0] * yout->size[1];
        for (j = 0; j < loop_ub; j++) {
          b_f0_data[j] = yout_data[j];
        }
        ncols = yout->size[0];
        j = y->size[0] * y->size[1];
        y->size[0] = yout->size[0];
        y->size[1] = (yout->size[1] + i) + 8;
        emxEnsureCapacity_real_T(&b_st, y, j, &sc_emlrtRTEI);
        b_f0_data = y->data;
        c_st.site = &ml_emlrtRSI;
        for (j = 0; j < i1; j++) {
          c_st.site = &nl_emlrtRSI;
          for (loop_ub = 0; loop_ub < ncols; loop_ub++) {
            b_f0_data[loop_ub + y->size[0] * (yout->size[1] + j)] = 0.0;
          }
        }
        i1 = yout->size[0] * yout->size[1];
        yout->size[0] = y->size[0];
        yout->size[1] = y->size[1];
        emxEnsureCapacity_real_T(&st, yout, i1, &uc_emlrtRTEI);
        yout_data = yout->data;
        loop_ub = y->size[0] * y->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          yout_data[i1] = b_f0_data[i1];
        }
      }
      for (loop_ub = 0; loop_ub < 8; loop_ub++) {
        ncols = loop_ub + outidx;
        tout_data[ncols] = toutnew[loop_ub];
        b_st.site = &bc_emlrtRSI;
        for (j = 0; j < neq; j++) {
          yout_data[j + yout->size[0] * ncols] =
              result_data[j + result * loop_ub];
        }
      }
      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &ac_emlrtRSI;
          rh = err / 5.0E-14;
          c_st.site = &wb_emlrtRSI;
          d_st.site = &vb_emlrtRSI;
          if (rh < 0.0) {
            emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
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
        y_size = ynew_size;
        if (ynew_size - 1 >= 0) {
          memcpy(&y_data[0], &ynew_data[0],
                 (uint32_T)ynew_size * sizeof(real_T));
        }
      }
    }
  } while (exitg1 == 0);
  emxFree_real_T(&st, &b_f0);
  emxFree_real_T(&st, &y);
  emxFree_int32_T(&st, &ie);
  emxFree_real_T(&st, &ye);
  emxFree_real_T(&st, &te);
  emxFree_real_T(&st, &f0);
  if (nout + 1 < 1) {
    loop_ub = -1;
  } else {
    loop_ub = nout;
  }
  i = varargout_1->size[0];
  varargout_1->size[0] = loop_ub + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &qc_emlrtRTEI);
  b_f0_data = varargout_1->data;
  for (i = 0; i <= loop_ub; i++) {
    b_f0_data[i] = tout_data[i];
  }
  emxFree_real_T(&st, &tout);
  if (nout + 1 < 1) {
    loop_ub = -1;
  } else {
    loop_ub = nout;
  }
  i = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = loop_ub + 1;
  varargout_2->size[1] = yout->size[0];
  emxEnsureCapacity_real_T(&st, varargout_2, i, &rc_emlrtRTEI);
  b_f0_data = varargout_2->data;
  ncols = yout->size[0];
  for (i = 0; i < ncols; i++) {
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_f0_data[i1 + varargout_2->size[0] * i] =
          yout_data[i + yout->size[0] * i1];
    }
  }
  emxFree_real_T(&st, &yout);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void c_ode89(const emlrtStack *sp, real_T ode_workspace_physical_Tmax,
             real_T ode_workspace_physical_c,
             real_T ode_workspace_physical_NSTATE,
             real_T ode_workspace_physical_shoot,
             real_T ode_workspace_physical_EPS, real_T ode_workspace_SIGN,
             const real_T tspan[2], const real_T y0_data[], int32_T y0_size,
             emxArray_real_T *varargout_1, emxArray_real_T *varargout_2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *ie;
  emxArray_real_T b_y0_data;
  emxArray_real_T b_y_data;
  emxArray_real_T *b_f0;
  emxArray_real_T *f0;
  emxArray_real_T *te;
  emxArray_real_T *tout;
  emxArray_real_T *ye;
  emxArray_real_T *yout;
  real_T f_data[3402];
  real_T a__2_data[3159];
  real_T tmp_data[3159];
  real_T varargin_1_data[1701];
  real_T y_data[243];
  real_T ynew_data[243];
  real_T absh;
  real_T hmax;
  real_T hmin;
  real_T rh;
  real_T t;
  real_T t0;
  real_T tdir;
  real_T tfinal;
  real_T valt;
  real_T *b_f0_data;
  real_T *f0_data;
  real_T *te_data;
  real_T *tout_data;
  real_T *yout_data;
  int32_T f_size[2];
  int32_T b_i;
  int32_T chunk;
  int32_T i;
  int32_T j;
  int32_T ncols;
  int32_T neq;
  int32_T nfevals;
  int32_T nout;
  int32_T nrows;
  int32_T y_size;
  int32_T ynew_size;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &yb_emlrtRSI;
  t0 = tspan[0];
  tfinal = tspan[1];
  if (tspan[0] == tspan[1]) {
    emlrtErrorWithMessageIdR2018a(
        &st, &k_emlrtRTEI, "MATLAB:odearguments:TspanEndpointsNotDistinct",
        "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }
  if (!ismonotonic(tspan)) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI,
                                  "MATLAB:odearguments:TspanNotMonotonic",
                                  "MATLAB:odearguments:TspanNotMonotonic", 0);
  }
  neq = y0_size;
  b_st.site = &sc_emlrtRSI;
  b_y0_data.data = (real_T *)&y0_data[0];
  b_y0_data.size = &y0_size;
  b_y0_data.allocatedSize = -1;
  b_y0_data.numDimensions = 1;
  b_y0_data.canFreeData = false;
  emxInit_real_T(&b_st, &f0, 1, &vc_emlrtRTEI);
  c_st.site = &tc_emlrtRSI;
  c_explicitRungeKutta_anonFcn1(
      &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
      ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
      ode_workspace_physical_EPS, ode_workspace_SIGN, &b_y0_data, f0);
  f0_data = f0->data;
  nfevals = 1;
  if (f0->size[0] != y0_size) {
    emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI, "Coder:toolbox:SizeIC",
                                  "Coder:toolbox:SizeIC", 0);
  }
  b_st.site = &rc_emlrtRSI;
  c_st.site = &kn_emlrtRSI;
  valt = stopfuel(&c_st, y0_data, y0_size);
  if ((uint32_T)y0_size == 0U) {
    emlrtDivisionByZeroErrorR2012b(&th_emlrtRTEI, &st);
  } else {
    i = (int32_T)(8192U / (uint32_T)y0_size);
  }
  i += 8;
  chunk = muIntScalarMin_sint32(400, i);
  emxInit_real_T(&st, &tout, 2, &nc_emlrtRTEI);
  i = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = chunk;
  emxEnsureCapacity_real_T(&st, tout, i, &nc_emlrtRTEI);
  tout_data = tout->data;
  for (i = 0; i < chunk; i++) {
    tout_data[i] = 0.0;
  }
  emxInit_real_T(&st, &yout, 2, &oc_emlrtRTEI);
  i = yout->size[0] * yout->size[1];
  yout->size[0] = y0_size;
  yout->size[1] = chunk;
  emxEnsureCapacity_real_T(&st, yout, i, &oc_emlrtRTEI);
  yout_data = yout->data;
  nrows = y0_size * chunk;
  for (i = 0; i < nrows; i++) {
    yout_data[i] = 0.0;
  }
  nout = 0;
  tout_data[0] = tspan[0];
  nrows = y0_size;
  for (i = 0; i < nrows; i++) {
    yout_data[i] = y0_data[i];
  }
  hmin = tspan[1] - tspan[0];
  rh = muDoubleScalarAbs(hmin);
  hmax = muDoubleScalarMin(rh, 0.001);
  if (!(hmax > 0.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI,
                                  "MATLAB:odearguments:MaxStepLEzero",
                                  "MATLAB:odearguments:MaxStepLEzero", 0);
  }
  absh = muDoubleScalarMin(hmax, rh);
  b_st.site = &qc_emlrtRSI;
  b_abs(y0_data, y0_size, y_data, &y_size);
  nrows = y_size;
  for (i = 0; i < nrows; i++) {
    rh = y_data[i];
    y_data[i] = muDoubleScalarMax(rh, 1.0);
  }
  b_st.site = &qc_emlrtRSI;
  c_st.site = &bk_emlrtRSI;
  d_st.site = &ck_emlrtRSI;
  assertCompatibleDims(&d_st, f0, y_size);
  emxInit_real_T(&st, &b_f0, 1, &pc_emlrtRTEI);
  if (f0->size[0] == y_size) {
    i = b_f0->size[0];
    b_f0->size[0] = f0->size[0];
    emxEnsureCapacity_real_T(&st, b_f0, i, &pc_emlrtRTEI);
    b_f0_data = b_f0->data;
    nrows = f0->size[0];
    for (i = 0; i < nrows; i++) {
      b_f0_data[i] = f0_data[i] / y_data[i];
    }
    rh = d_norm(b_f0) / 0.026619369535913946;
  } else {
    b_st.site = &qc_emlrtRSI;
    rh = p_binary_expand_op(&b_st, f0, y_data, &y_size);
  }
  if (absh * rh > 1.0) {
    absh = 1.0 / rh;
  }
  absh = muDoubleScalarMax(absh, 16.0 * eps(tspan[0]));
  t = tspan[0];
  y_size = y0_size;
  nrows = y0_size;
  for (i = 0; i < nrows; i++) {
    y_data[i] = y0_data[i];
  }
  f_size[0] = y0_size;
  f_size[1] = 14;
  nrows = y0_size * 14;
  if (nrows - 1 >= 0) {
    memset(&f_data[0], 0, (uint32_T)nrows * sizeof(real_T));
  }
  nrows = f0->size[0];
  for (i = 0; i < nrows; i++) {
    f_data[i] = f0_data[i];
  }
  tdir = muDoubleScalarSign(hmin);
  MinStepExit = false;
  Done = false;
  emxInit_real_T(&st, &te, 2, &wc_emlrtRTEI);
  emxInit_real_T(&st, &ye, 2, &wc_emlrtRTEI);
  emxInit_int32_T(&st, &ie, &wc_emlrtRTEI);
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
        b_st.site = &pc_emlrtRSI;
        b_y_data.data = &y_data[0];
        b_y_data.size = &y_size;
        b_y_data.allocatedSize = 243;
        b_y_data.numDimensions = 1;
        b_y_data.canFreeData = false;
        c_st.site = &tc_emlrtRSI;
        c_explicitRungeKutta_anonFcn1(
            &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
            ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
            ode_workspace_physical_EPS, ode_workspace_SIGN, &b_y_data, b_f0);
        b_f0_data = b_f0->data;
        nrows = b_f0->size[0];
        for (i = 0; i < nrows; i++) {
          f_data[i] = b_f0_data[i];
        }
        nfevals++;
      }
      b_st.site = &oc_emlrtRSI;
      c_computeMainStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN, y_data, y_size, h,
          f_data, f_size, &nfevals, ynew_data, &ynew_size, b_f0);
      if (y_size == ynew_size) {
        ynew_size = y_size;
        nrows = y_size;
        for (i = 0; i < nrows; i++) {
          ynew_data[i] = y_data[i] + h * ynew_data[i];
        }
      } else {
        db_binary_expand_op(ynew_data, &ynew_size, y_data, &y_size, h);
      }
      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }
      h = tnew - t;
      if (NoFailedAttempts) {
        b_st.site = &nc_emlrtRSI;
        err = absh * maxScaledError(&b_st, b_f0, y_data, ynew_data);
      } else {
        b_st.site = &mc_emlrtRSI;
        err = absh * b_maxScaledError(&b_st, b_f0, y_data);
      }
      if (!(err <= 5.0E-14)) {
        if (absh <= hmin) {
          char_T cv[23];
          char_T cv1[23];
          b_st.site = &lc_emlrtRSI;
          num2str(&b_st, t, cv);
          b_st.site = &kc_emlrtRSI;
          num2str(&b_st, hmin, cv1);
          b_st.site = &jc_emlrtRSI;
          c_warning(&b_st, cv, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &ic_emlrtRSI;
            c_st.site = &wb_emlrtRSI;
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
      real_T youtnew_data[1944];
      real_T toutnew[8];
      real_T tref[7];
      int32_T a__2_size[2];
      int32_T outidx;
      int32_T result;
      int8_T input_sizes_idx_1;
      int8_T sizes_idx_1;
      b_st.site = &hc_emlrtRSI;
      c_computeCEStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN, y_data, y_size, h,
          f_data, f_size, &nfevals);
      b_st.site = &gc_emlrtRSI;
      c_odezero(&b_st, valt, t, y_data, y_size, tnew, ynew_data, ynew_size, t0,
                h, f_data, f_size, &ncols, te, ye, ie, &valt,
                &empty_non_axis_sizes);
      b_f0_data = ye->data;
      te_data = te->data;
      if ((ncols > 0) && empty_non_axis_sizes) {
        real_T b_t[13];
        int32_T tmp_size[2];
        tnew = te_data[te->size[1] - 1];
        ynew_size = neq;
        for (i = 0; i < neq; i++) {
          ynew_data[i] = b_f0_data[i + ye->size[0] * (ye->size[1] - 1)];
        }
        rh = te_data[te->size[1] - 1] - t;
        Done = true;
        for (i = 0; i < 13; i++) {
          b_t[i] = t + dv[i] * rh;
        }
        b_st.site = &fc_emlrtRSI;
        ntrp89(b_t, t, y_data, y_size, h, f_data, f_size, a__2_data, a__2_size,
               tmp_data, tmp_size);
        nrows = tmp_size[0];
        for (i = 0; i < 13; i++) {
          for (b_i = 0; b_i < nrows; b_i++) {
            f_data[b_i + f_size[0] * (i + 1)] = tmp_data[b_i + tmp_size[0] * i];
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
      b_st.site = &ec_emlrtRSI;
      c_st.site = &ec_emlrtRSI;
      b_ntrp89(tref, t, y_data, y_size, h, f_data, f_size, varargin_1_data,
               a__2_size);
      c_st.site = &rl_emlrtRSI;
      if (a__2_size[0] != 0) {
        result = a__2_size[0];
      } else if (ynew_size != 0) {
        result = ynew_size;
      } else {
        result = 0;
      }
      d_st.site = &sl_emlrtRSI;
      if ((a__2_size[0] != result) && (a__2_size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &l_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if ((ynew_size != result) && (ynew_size != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &l_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || (a__2_size[0] != 0)) {
        input_sizes_idx_1 = 7;
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (ynew_size != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      nrows = input_sizes_idx_1;
      for (i = 0; i < nrows; i++) {
        for (b_i = 0; b_i < result; b_i++) {
          youtnew_data[b_i + result * i] = varargin_1_data[b_i + result * i];
        }
      }
      nrows = sizes_idx_1;
      if (nrows - 1 >= 0) {
        for (i = 0; i < result; i++) {
          youtnew_data[i + result * input_sizes_idx_1] = ynew_data[i];
        }
      }
      nout += 8;
      if (nout + 1 > tout->size[1]) {
        b_st.site = &dc_emlrtRSI;
        ncols = tout->size[1];
        i = tout->size[0] * tout->size[1];
        tout->size[0] = 1;
        tout->size[1] += chunk;
        emxEnsureCapacity_real_T(&b_st, tout, i, &sc_emlrtRTEI);
        tout_data = tout->data;
        c_st.site = &ml_emlrtRSI;
        i = (uint16_T)chunk;
        for (j = 0; j < i; j++) {
          tout_data[ncols + j] = 0.0;
        }
        b_st.site = &cc_emlrtRSI;
        nrows = yout->size[0];
        ncols = yout->size[1];
        b_i = yout->size[0] * yout->size[1];
        yout->size[1] += chunk;
        emxEnsureCapacity_real_T(&b_st, yout, b_i, &sc_emlrtRTEI);
        yout_data = yout->data;
        c_st.site = &ml_emlrtRSI;
        for (j = 0; j < i; j++) {
          c_st.site = &nl_emlrtRSI;
          for (b_i = 0; b_i < nrows; b_i++) {
            yout_data[b_i + yout->size[0] * (ncols + j)] = 0.0;
          }
        }
      }
      for (nrows = 0; nrows < 8; nrows++) {
        ncols = nrows + outidx;
        tout_data[ncols] = toutnew[nrows];
        b_st.site = &bc_emlrtRSI;
        for (j = 0; j < neq; j++) {
          yout_data[j + yout->size[0] * ncols] =
              youtnew_data[j + result * nrows];
        }
      }
      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &ac_emlrtRSI;
          rh = err / 5.0E-14;
          c_st.site = &wb_emlrtRSI;
          d_st.site = &vb_emlrtRSI;
          if (rh < 0.0) {
            emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
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
        y_size = ynew_size;
        if (ynew_size - 1 >= 0) {
          memcpy(&y_data[0], &ynew_data[0],
                 (uint32_T)ynew_size * sizeof(real_T));
        }
      }
    }
  } while (exitg1 == 0);
  emxFree_real_T(&st, &b_f0);
  emxFree_int32_T(&st, &ie);
  emxFree_real_T(&st, &ye);
  emxFree_real_T(&st, &te);
  emxFree_real_T(&st, &f0);
  if (nout + 1 < 1) {
    nrows = -1;
  } else {
    nrows = nout;
  }
  i = varargout_1->size[0];
  varargout_1->size[0] = nrows + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &qc_emlrtRTEI);
  b_f0_data = varargout_1->data;
  for (i = 0; i <= nrows; i++) {
    b_f0_data[i] = tout_data[i];
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
  emxEnsureCapacity_real_T(&st, varargout_2, i, &rc_emlrtRTEI);
  b_f0_data = varargout_2->data;
  ncols = yout->size[0];
  for (i = 0; i < ncols; i++) {
    for (b_i = 0; b_i <= nrows; b_i++) {
      b_f0_data[b_i + varargout_2->size[0] * i] =
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
           real_T ode_workspace_physical_EPS, real_T ode_workspace_SIGN_nom,
           const real_T ode_workspace_Pigreco[20], const real_T tspan[2],
           const real_T y0_data[], int32_T y0_size,
           emxArray_real_T *varargout_1, emxArray_real_T *varargout_2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *ie;
  emxArray_real_T b_y0_data;
  emxArray_real_T b_y_data;
  emxArray_real_T *b_f0;
  emxArray_real_T *f0;
  emxArray_real_T *te;
  emxArray_real_T *tout;
  emxArray_real_T *y;
  emxArray_real_T *ye;
  emxArray_real_T *yout;
  real_T a__2_data[3159];
  real_T tmp_data[3159];
  real_T varargin_1_data[1701];
  real_T f_data[1694];
  real_T maxval_data[243];
  real_T y_data[121];
  real_T ynew_data[121];
  real_T absh;
  real_T hmax;
  real_T hmin;
  real_T rh;
  real_T t;
  real_T t0;
  real_T tdir;
  real_T tfinal;
  real_T valt;
  real_T *b_f0_data;
  real_T *f0_data;
  real_T *te_data;
  real_T *tout_data;
  real_T *yout_data;
  int32_T f_size[2];
  int32_T i;
  int32_T i1;
  int32_T j;
  int32_T loop_ub;
  int32_T ncols;
  int32_T neq;
  int32_T nfevals;
  int32_T nout;
  int32_T y_size;
  int32_T ynew_size;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &yb_emlrtRSI;
  t0 = tspan[0];
  tfinal = tspan[1];
  if (tspan[0] == tspan[1]) {
    emlrtErrorWithMessageIdR2018a(
        &st, &k_emlrtRTEI, "MATLAB:odearguments:TspanEndpointsNotDistinct",
        "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }
  if (!ismonotonic(tspan)) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI,
                                  "MATLAB:odearguments:TspanNotMonotonic",
                                  "MATLAB:odearguments:TspanNotMonotonic", 0);
  }
  neq = y0_size;
  b_st.site = &sc_emlrtRSI;
  b_y0_data.data = (real_T *)&y0_data[0];
  b_y0_data.size = &y0_size;
  b_y0_data.allocatedSize = -1;
  b_y0_data.numDimensions = 1;
  b_y0_data.canFreeData = false;
  emxInit_real_T(&b_st, &f0, 1, &vc_emlrtRTEI);
  c_st.site = &tc_emlrtRSI;
  explicitRungeKutta_anonFcn1(
      &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
      ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
      ode_workspace_physical_EPS, ode_workspace_SIGN_nom, ode_workspace_Pigreco,
      &b_y0_data, f0);
  f0_data = f0->data;
  nfevals = 1;
  if (f0->size[0] != y0_size) {
    emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI, "Coder:toolbox:SizeIC",
                                  "Coder:toolbox:SizeIC", 0);
  }
  b_st.site = &rc_emlrtRSI;
  c_st.site = &kj_emlrtRSI;
  valt = stopNOG(&c_st, y0_data, y0_size);
  if ((uint32_T)y0_size == 0U) {
    emlrtDivisionByZeroErrorR2012b(&th_emlrtRTEI, &st);
  } else {
    i = (int32_T)(8192U / (uint32_T)y0_size);
  }
  ncols = i + 8;
  emxInit_real_T(&st, &tout, 2, &nc_emlrtRTEI);
  i1 = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = i + 8;
  emxEnsureCapacity_real_T(&st, tout, i1, &nc_emlrtRTEI);
  tout_data = tout->data;
  for (i1 = 0; i1 < ncols; i1++) {
    tout_data[i1] = 0.0;
  }
  emxInit_real_T(&st, &yout, 2, &oc_emlrtRTEI);
  i1 = yout->size[0] * yout->size[1];
  yout->size[0] = y0_size;
  yout->size[1] = i + 8;
  emxEnsureCapacity_real_T(&st, yout, i1, &oc_emlrtRTEI);
  yout_data = yout->data;
  loop_ub = y0_size * (i + 8);
  for (i1 = 0; i1 < loop_ub; i1++) {
    yout_data[i1] = 0.0;
  }
  nout = 0;
  tout_data[0] = tspan[0];
  loop_ub = y0_size;
  for (i1 = 0; i1 < loop_ub; i1++) {
    yout_data[i1] = y0_data[i1];
  }
  hmin = tspan[1] - tspan[0];
  rh = muDoubleScalarAbs(hmin);
  hmax = muDoubleScalarMin(rh, 0.0005);
  if (!(hmax > 0.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI,
                                  "MATLAB:odearguments:MaxStepLEzero",
                                  "MATLAB:odearguments:MaxStepLEzero", 0);
  }
  absh = muDoubleScalarMin(hmax, rh);
  b_st.site = &qc_emlrtRSI;
  b_abs(y0_data, y0_size, maxval_data, &ncols);
  for (i1 = 0; i1 < ncols; i1++) {
    maxval_data[i1] = muDoubleScalarMax(maxval_data[i1], 1.0);
  }
  b_st.site = &qc_emlrtRSI;
  c_st.site = &bk_emlrtRSI;
  d_st.site = &ck_emlrtRSI;
  assertCompatibleDims(&d_st, f0, ncols);
  emxInit_real_T(&st, &b_f0, 1, &pc_emlrtRTEI);
  if (f0->size[0] == ncols) {
    i1 = b_f0->size[0];
    b_f0->size[0] = f0->size[0];
    emxEnsureCapacity_real_T(&st, b_f0, i1, &pc_emlrtRTEI);
    b_f0_data = b_f0->data;
    loop_ub = f0->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_f0_data[i1] = f0_data[i1] / maxval_data[i1];
    }
    rh = d_norm(b_f0) / 0.026619369535913946;
  } else {
    b_st.site = &qc_emlrtRSI;
    rh = p_binary_expand_op(&b_st, f0, maxval_data, &ncols);
  }
  if (absh * rh > 1.0) {
    absh = 1.0 / rh;
  }
  absh = muDoubleScalarMax(absh, 16.0 * eps(tspan[0]));
  t = tspan[0];
  y_size = y0_size;
  loop_ub = y0_size;
  for (i1 = 0; i1 < loop_ub; i1++) {
    y_data[i1] = y0_data[i1];
  }
  f_size[0] = y0_size;
  f_size[1] = 14;
  loop_ub = y0_size * 14;
  if (loop_ub - 1 >= 0) {
    memset(&f_data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }
  loop_ub = f0->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    f_data[i1] = f0_data[i1];
  }
  tdir = muDoubleScalarSign(hmin);
  MinStepExit = false;
  Done = false;
  emxInit_real_T(&st, &te, 2, &wc_emlrtRTEI);
  emxInit_real_T(&st, &ye, 2, &wc_emlrtRTEI);
  emxInit_int32_T(&st, &ie, &wc_emlrtRTEI);
  emxInit_real_T(&st, &y, 2, &tc_emlrtRTEI);
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
        loop_ub = f0->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          f_data[i1] = f0_data[i1];
        }
      } else if (NoFailedAttempts) {
        b_st.site = &pc_emlrtRSI;
        b_y_data.data = &y_data[0];
        b_y_data.size = &y_size;
        b_y_data.allocatedSize = 121;
        b_y_data.numDimensions = 1;
        b_y_data.canFreeData = false;
        c_st.site = &tc_emlrtRSI;
        explicitRungeKutta_anonFcn1(
            &c_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
            ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
            ode_workspace_physical_EPS, ode_workspace_SIGN_nom,
            ode_workspace_Pigreco, &b_y_data, b_f0);
        b_f0_data = b_f0->data;
        loop_ub = b_f0->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          f_data[i1] = b_f0_data[i1];
        }
        nfevals++;
      }
      b_st.site = &oc_emlrtRSI;
      computeMainStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN_nom,
          ode_workspace_Pigreco, y_data, y_size, h, f_data, f_size, &nfevals,
          ynew_data, &ynew_size, b_f0);
      if (y_size == ynew_size) {
        ynew_size = y_size;
        loop_ub = y_size;
        for (i1 = 0; i1 < loop_ub; i1++) {
          ynew_data[i1] = y_data[i1] + h * ynew_data[i1];
        }
      } else {
        o_binary_expand_op(ynew_data, &ynew_size, y_data, &y_size, h);
      }
      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }
      h = tnew - t;
      if (NoFailedAttempts) {
        b_st.site = &nc_emlrtRSI;
        err = absh * maxScaledError(&b_st, b_f0, y_data, ynew_data);
      } else {
        b_st.site = &mc_emlrtRSI;
        err = absh * b_maxScaledError(&b_st, b_f0, y_data);
      }
      if (!(err <= 5.0E-14)) {
        if (absh <= hmin) {
          char_T cv[23];
          char_T cv1[23];
          b_st.site = &lc_emlrtRSI;
          num2str(&b_st, t, cv);
          b_st.site = &kc_emlrtRSI;
          num2str(&b_st, hmin, cv1);
          b_st.site = &jc_emlrtRSI;
          c_warning(&b_st, cv, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &ic_emlrtRSI;
            c_st.site = &wb_emlrtRSI;
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
      real_T result_data[1944];
      real_T toutnew[8];
      real_T tref[7];
      int32_T a__2_size[2];
      int32_T outidx;
      int32_T result;
      int8_T input_sizes_idx_1;
      int8_T sizes_idx_1;
      b_st.site = &hc_emlrtRSI;
      computeCEStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN_nom,
          ode_workspace_Pigreco, y_data, y_size, h, f_data, f_size, &nfevals);
      b_st.site = &gc_emlrtRSI;
      odezero(&b_st, valt, t, y_data, y_size, tnew, ynew_data, ynew_size, t0, h,
              f_data, f_size, &ncols, te, ye, ie, &valt, &empty_non_axis_sizes);
      b_f0_data = ye->data;
      te_data = te->data;
      if ((ncols > 0) && empty_non_axis_sizes) {
        real_T b_t[13];
        int32_T tmp_size[2];
        tnew = te_data[te->size[1] - 1];
        ynew_size = neq;
        for (i1 = 0; i1 < neq; i1++) {
          ynew_data[i1] = b_f0_data[i1 + ye->size[0] * (ye->size[1] - 1)];
        }
        rh = te_data[te->size[1] - 1] - t;
        Done = true;
        for (i1 = 0; i1 < 13; i1++) {
          b_t[i1] = t + dv[i1] * rh;
        }
        b_st.site = &fc_emlrtRSI;
        ntrp89(b_t, t, y_data, y_size, h, f_data, f_size, a__2_data, a__2_size,
               tmp_data, tmp_size);
        loop_ub = tmp_size[0];
        for (i1 = 0; i1 < 13; i1++) {
          for (j = 0; j < loop_ub; j++) {
            f_data[j + f_size[0] * (i1 + 1)] = tmp_data[j + tmp_size[0] * i1];
          }
        }
        h = rh;
      }
      outidx = nout + 1;
      rh = tnew - t;
      for (i1 = 0; i1 < 7; i1++) {
        d = t + rh * (0.125 * (real_T)i1 + 0.125);
        tref[i1] = d;
        toutnew[i1] = d;
      }
      toutnew[7] = tnew;
      b_st.site = &ec_emlrtRSI;
      c_st.site = &ec_emlrtRSI;
      b_ntrp89(tref, t, y_data, y_size, h, f_data, f_size, varargin_1_data,
               a__2_size);
      c_st.site = &rl_emlrtRSI;
      if (a__2_size[0] != 0) {
        result = a__2_size[0];
      } else if (ynew_size != 0) {
        result = ynew_size;
      } else {
        result = 0;
      }
      d_st.site = &sl_emlrtRSI;
      if ((a__2_size[0] != result) && (a__2_size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &l_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if ((ynew_size != result) && (ynew_size != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &l_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || (a__2_size[0] != 0)) {
        input_sizes_idx_1 = 7;
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (ynew_size != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      loop_ub = input_sizes_idx_1;
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (j = 0; j < result; j++) {
          result_data[j + result * i1] = varargin_1_data[j + result * i1];
        }
      }
      loop_ub = sizes_idx_1;
      if (loop_ub - 1 >= 0) {
        for (i1 = 0; i1 < result; i1++) {
          result_data[i1 + result * input_sizes_idx_1] = ynew_data[i1];
        }
      }
      nout += 8;
      if (nout + 1 > tout->size[1]) {
        b_st.site = &dc_emlrtRSI;
        ncols = tout->size[1];
        i1 = tout->size[0] * tout->size[1];
        tout->size[0] = 1;
        tout->size[1] = (tout->size[1] + i) + 8;
        emxEnsureCapacity_real_T(&b_st, tout, i1, &sc_emlrtRTEI);
        tout_data = tout->data;
        c_st.site = &ml_emlrtRSI;
        if (i + 8 > 2147483646) {
          d_st.site = &ne_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        i1 = (uint16_T)(i + 8);
        for (j = 0; j < i1; j++) {
          tout_data[ncols + j] = 0.0;
        }
        b_st.site = &cc_emlrtRSI;
        j = y->size[0] * y->size[1];
        y->size[0] = yout->size[0];
        y->size[1] = yout->size[1];
        emxEnsureCapacity_real_T(&b_st, y, j, &tc_emlrtRTEI);
        b_f0_data = y->data;
        loop_ub = yout->size[0] * yout->size[1];
        for (j = 0; j < loop_ub; j++) {
          b_f0_data[j] = yout_data[j];
        }
        ncols = yout->size[0];
        j = y->size[0] * y->size[1];
        y->size[0] = yout->size[0];
        y->size[1] = (yout->size[1] + i) + 8;
        emxEnsureCapacity_real_T(&b_st, y, j, &sc_emlrtRTEI);
        b_f0_data = y->data;
        c_st.site = &ml_emlrtRSI;
        for (j = 0; j < i1; j++) {
          c_st.site = &nl_emlrtRSI;
          for (loop_ub = 0; loop_ub < ncols; loop_ub++) {
            b_f0_data[loop_ub + y->size[0] * (yout->size[1] + j)] = 0.0;
          }
        }
        i1 = yout->size[0] * yout->size[1];
        yout->size[0] = y->size[0];
        yout->size[1] = y->size[1];
        emxEnsureCapacity_real_T(&st, yout, i1, &uc_emlrtRTEI);
        yout_data = yout->data;
        loop_ub = y->size[0] * y->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          yout_data[i1] = b_f0_data[i1];
        }
      }
      for (loop_ub = 0; loop_ub < 8; loop_ub++) {
        ncols = loop_ub + outidx;
        tout_data[ncols] = toutnew[loop_ub];
        b_st.site = &bc_emlrtRSI;
        for (j = 0; j < neq; j++) {
          yout_data[j + yout->size[0] * ncols] =
              result_data[j + result * loop_ub];
        }
      }
      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &ac_emlrtRSI;
          rh = err / 5.0E-14;
          c_st.site = &wb_emlrtRSI;
          d_st.site = &vb_emlrtRSI;
          if (rh < 0.0) {
            emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
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
        y_size = ynew_size;
        if (ynew_size - 1 >= 0) {
          memcpy(&y_data[0], &ynew_data[0],
                 (uint32_T)ynew_size * sizeof(real_T));
        }
      }
    }
  } while (exitg1 == 0);
  emxFree_real_T(&st, &b_f0);
  emxFree_real_T(&st, &y);
  emxFree_int32_T(&st, &ie);
  emxFree_real_T(&st, &ye);
  emxFree_real_T(&st, &te);
  emxFree_real_T(&st, &f0);
  if (nout + 1 < 1) {
    loop_ub = -1;
  } else {
    loop_ub = nout;
  }
  i = varargout_1->size[0];
  varargout_1->size[0] = loop_ub + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &qc_emlrtRTEI);
  b_f0_data = varargout_1->data;
  for (i = 0; i <= loop_ub; i++) {
    b_f0_data[i] = tout_data[i];
  }
  emxFree_real_T(&st, &tout);
  if (nout + 1 < 1) {
    loop_ub = -1;
  } else {
    loop_ub = nout;
  }
  i = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = loop_ub + 1;
  varargout_2->size[1] = yout->size[0];
  emxEnsureCapacity_real_T(&st, varargout_2, i, &rc_emlrtRTEI);
  b_f0_data = varargout_2->data;
  ncols = yout->size[0];
  for (i = 0; i < ncols; i++) {
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_f0_data[i1 + varargout_2->size[0] * i] =
          yout_data[i + yout->size[0] * i1];
    }
  }
  emxFree_real_T(&st, &yout);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (ode89.c) */
