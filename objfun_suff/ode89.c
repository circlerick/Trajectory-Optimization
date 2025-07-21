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
#include "eps.h"
#include "explicitRungeKutta.h"
#include "ntrp89.h"
#include "num2str.h"
#include "objfun_suff.h"
#include "objfun_suff_data.h"
#include "objfun_suff_emxutil.h"
#include "objfun_suff_types.h"
#include "odezero.h"
#include "rt_nonfinite.h"
#include "stopfuel.h"
#include "warning.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = {
    17,      /* lineNo */
    "ode89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\ode89.m" /* pathName
                                                                         */
};

static emlrtRSInfo y_emlrtRSI = {
    631,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    556,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    518,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    466,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    463,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    429,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    416,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    419,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    418,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    358,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    352,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    308,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    216,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    90,                   /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                          */
};

static emlrtRSInfo tg_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" /* pathName */
};

static emlrtRSInfo ug_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                          */
};

static emlrtRSInfo uh_emlrtRSI = {
    30,       /* lineNo */
    "ntrp89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ntrp89."
    "m" /* pathName */
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
    56,                   /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    107,                  /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    295,                  /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    241,                  /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    242,                  /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    656,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    657,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    90,                   /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    1,       /* lineNo */
    22,      /* colNo */
    "ode89", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\ode89.m" /* pName
                                                                         */
};

/* Function Definitions */
void ode89(const emlrtStack *sp, real_T ode_workspace_physical_Tmax,
           real_T ode_workspace_physical_c,
           real_T ode_workspace_physical_NSTATE,
           real_T ode_workspace_physical_shoot,
           real_T ode_workspace_physical_EPS, real_T ode_workspace_SIGN,
           const real_T tspan[2], const real_T b_y0[111],
           emxArray_real_T *varargout_1, emxArray_real_T *varargout_2)
{
  static const real_T a[13] = {
      0.64,   0.48,  0.06754, 0.25, 0.67709201535432428,
      0.8115, 0.906, 1.0,     1.0,  0.74210100835830883,
      0.888,  0.696, 0.487};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_int32_T *ie;
  emxArray_real_T *f0;
  emxArray_real_T *r;
  emxArray_real_T *te;
  emxArray_real_T *tout;
  emxArray_real_T *ye;
  emxArray_real_T *yout;
  real_T b_f[1554];
  real_T f[1554];
  real_T youtnew[888];
  real_T yinterp[777];
  real_T y[111];
  real_T ynew[111];
  real_T absh;
  real_T absx;
  real_T d1;
  real_T hmax;
  real_T rh;
  real_T t;
  real_T t0;
  real_T tdir;
  real_T tfinal;
  real_T valt;
  real_T *f0_data;
  real_T *te_data;
  real_T *tout_data;
  real_T *ye_data;
  real_T *yout_data;
  int32_T b_ncols;
  int32_T i;
  int32_T j;
  int32_T ncols;
  int32_T nfevals;
  int32_T nout;
  boolean_T Done;
  boolean_T MinStepExit;
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &x_emlrtRSI;
  t0 = tspan[0];
  tfinal = tspan[1];
  if (tspan[0] == tspan[1]) {
    emlrtErrorWithMessageIdR2018a(
        &st, &f_emlrtRTEI, "MATLAB:odearguments:TspanEndpointsNotDistinct",
        "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }
  MinStepExit = true;
  if (!(tspan[1] > tspan[0])) {
    MinStepExit = (tspan[0] > tspan[1]);
  }
  if (!MinStepExit) {
    emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
                                  "MATLAB:odearguments:TspanNotMonotonic",
                                  "MATLAB:odearguments:TspanNotMonotonic", 0);
  }
  b_st.site = &mb_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  d_st.site = &pb_emlrtRSI;
  e_st.site = &qb_emlrtRSI;
  emxInit_real_T(&e_st, &f0, 1, &ib_emlrtRTEI);
  f_st.site = &nb_emlrtRSI;
  objfun_suff_anonFcn2(&f_st, ode_workspace_physical_Tmax,
                       ode_workspace_physical_c, ode_workspace_physical_NSTATE,
                       ode_workspace_physical_shoot, ode_workspace_physical_EPS,
                       ode_workspace_SIGN, b_y0, f0);
  f0_data = f0->data;
  nfevals = 1;
  if (f0->size[0] != 111) {
    emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI, "Coder:toolbox:SizeIC",
                                  "Coder:toolbox:SizeIC", 0);
  }
  b_st.site = &lb_emlrtRSI;
  c_st.site = &sg_emlrtRSI;
  valt = stopfuel(&c_st, b_y0);
  emxInit_real_T(&st, &tout, 2, &db_emlrtRTEI);
  i = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = 81;
  emxEnsureCapacity_real_T(&st, tout, i, &db_emlrtRTEI);
  tout_data = tout->data;
  for (i = 0; i < 81; i++) {
    tout_data[i] = 0.0;
  }
  emxInit_real_T(&st, &yout, 2, &eb_emlrtRTEI);
  i = yout->size[0] * yout->size[1];
  yout->size[0] = 111;
  yout->size[1] = 81;
  emxEnsureCapacity_real_T(&st, yout, i, &eb_emlrtRTEI);
  yout_data = yout->data;
  for (i = 0; i < 8991; i++) {
    yout_data[i] = 0.0;
  }
  nout = 0;
  tout_data[0] = tspan[0];
  for (i = 0; i < 111; i++) {
    yout_data[i] = b_y0[i];
  }
  d1 = tspan[1] - tspan[0];
  rh = muDoubleScalarAbs(d1);
  hmax = muDoubleScalarMin(rh, 0.0005);
  if (!(hmax > 0.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI,
                                  "MATLAB:odearguments:MaxStepLEzero",
                                  "MATLAB:odearguments:MaxStepLEzero", 0);
  }
  absh = muDoubleScalarMin(hmax, rh);
  for (ncols = 0; ncols < 111; ncols++) {
    y[ncols] = muDoubleScalarMax(muDoubleScalarAbs(b_y0[ncols]), 1.0);
  }
  b_st.site = &kb_emlrtRSI;
  c_st.site = &tg_emlrtRSI;
  d_st.site = &ug_emlrtRSI;
  for (i = 0; i < 111; i++) {
    y[i] = f0_data[i] / y[i];
  }
  rh = 0.0;
  for (ncols = 0; ncols < 111; ncols++) {
    absx = muDoubleScalarAbs(y[ncols]);
    if (muDoubleScalarIsNaN(absx) || (absx > rh)) {
      rh = absx;
    }
  }
  rh /= 0.026619369535913946;
  if (absh * rh > 1.0) {
    absh = 1.0 / rh;
  }
  absh = muDoubleScalarMax(absh, 16.0 * eps(tspan[0]));
  t = tspan[0];
  memcpy(&y[0], &b_y0[0], 111U * sizeof(real_T));
  memset(&f[0], 0, 1554U * sizeof(real_T));
  for (i = 0; i < 111; i++) {
    f[i] = f0_data[i];
  }
  tdir = muDoubleScalarSign(d1);
  MinStepExit = false;
  Done = false;
  emxInit_real_T(&st, &te, 2, &jb_emlrtRTEI);
  emxInit_real_T(&st, &ye, 2, &jb_emlrtRTEI);
  emxInit_int32_T(&st, &ie, &jb_emlrtRTEI);
  emxInit_real_T(&st, &r, 1, &jb_emlrtRTEI);
  real_T h;
  real_T hmin;
  int32_T exitg1;
  do {
    real_T tnew;
    boolean_T NoFailedAttempts;
    exitg1 = 0;
    hmin = 16.0 * eps(t);
    absh = muDoubleScalarMin(hmax, muDoubleScalarMax(hmin, absh));
    h = tdir * absh;
    absx = tfinal - t;
    rh = muDoubleScalarAbs(absx);
    if (1.1 * absh >= rh) {
      h = absx;
      absh = rh;
      Done = true;
    }
    NoFailedAttempts = true;
    int32_T exitg2;
    do {
      real_T varargin_1[111];
      exitg2 = 0;
      if (t == t0) {
        for (i = 0; i < 111; i++) {
          f[i] = f0_data[i];
        }
      } else if (NoFailedAttempts) {
        b_st.site = &jb_emlrtRSI;
        c_st.site = &nb_emlrtRSI;
        d_st.site = &pb_emlrtRSI;
        e_st.site = &qb_emlrtRSI;
        f_st.site = &nb_emlrtRSI;
        objfun_suff_anonFcn2(
            &f_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
            ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
            ode_workspace_physical_EPS, ode_workspace_SIGN, y, r);
        ye_data = r->data;
        for (i = 0; i < 111; i++) {
          f[i] = ye_data[i];
        }
        nfevals++;
      }
      b_st.site = &ib_emlrtRSI;
      computeMainStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN, y, h, f, &nfevals,
          ynew, varargin_1);
      for (i = 0; i < 111; i++) {
        ynew[i] = y[i] + h * ynew[i];
      }
      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }
      h = tnew - t;
      if (NoFailedAttempts) {
        d1 = absh * maxScaledError(varargin_1, y, ynew);
      } else {
        rh = 0.0;
        for (ncols = 0; ncols < 111; ncols++) {
          absx = muDoubleScalarAbs(varargin_1[ncols]);
          d1 = muDoubleScalarAbs(y[ncols]);
          if (d1 > 1.0) {
            absx /= d1;
          }
          if ((absx > rh) || muDoubleScalarIsNaN(absx)) {
            rh = absx;
          }
        }
        d1 = absh * rh;
      }
      if (!(d1 <= 5.0E-14)) {
        if (absh <= hmin) {
          char_T cv[23];
          char_T cv1[23];
          b_st.site = &hb_emlrtRSI;
          num2str(&b_st, t, cv);
          b_st.site = &gb_emlrtRSI;
          num2str(&b_st, hmin, cv1);
          b_st.site = &fb_emlrtRSI;
          warning(&b_st, cv, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &eb_emlrtRSI;
            c_st.site = &ob_emlrtRSI;
            d_st.site = &w_emlrtRSI;
            absh = muDoubleScalarMax(
                hmin,
                absh * muDoubleScalarMax(
                           0.1, 0.8 * muDoubleScalarPower(5.0E-14 / d1,
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
      b_st.site = &db_emlrtRSI;
      computeCEStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN, y, h, f, &nfevals);
      b_st.site = &cb_emlrtRSI;
      odezero(&b_st, valt, t, y, tnew, ynew, t0, h, f, &b_ncols, te, ye, ie,
              &valt, &b);
      ye_data = ye->data;
      te_data = te->data;
      if ((b_ncols > 0) && b) {
        real_T b_t[13];
        tnew = te_data[te->size[1] - 1];
        for (i = 0; i < 111; i++) {
          ynew[i] = ye_data[i + 111 * (ye->size[1] - 1)];
        }
        rh = te_data[te->size[1] - 1] - t;
        Done = true;
        for (i = 0; i < 13; i++) {
          b_t[i] = t + a[i] * rh;
        }
        real_T a__2[1443];
        memcpy(&b_f[0], &f[0], 1554U * sizeof(real_T));
        b_st.site = &bb_emlrtRSI;
        ntrp89(b_t, t, y, h, b_f, a__2, *(real_T(*)[1443]) & f[111]);
        h = rh;
      }
      outidx = nout + 1;
      rh = tnew - t;
      for (i = 0; i < 7; i++) {
        absx = t + rh * (0.125 * (real_T)i + 0.125);
        tref[i] = absx;
        toutnew[i] = absx;
      }
      toutnew[7] = tnew;
      b_st.site = &ab_emlrtRSI;
      for (i = 0; i < 7; i++) {
        memcpy(&yinterp[i * 111], &y[0], 111U * sizeof(real_T));
      }
      for (ncols = 0; ncols < 7; ncols++) {
        c_st.site = &uh_emlrtRSI;
        yinterpWSS((tref[ncols] - t) / h, f, dv, dv1, dv2, dv3, dv4, dv5, dv6,
                   y);
        for (i = 0; i < 111; i++) {
          b_ncols = i + 111 * ncols;
          yinterp[b_ncols] += h * y[i];
        }
      }
      memcpy(&youtnew[0], &yinterp[0], 777U * sizeof(real_T));
      memcpy(&youtnew[777], &ynew[0], 111U * sizeof(real_T));
      nout += 8;
      if (nout + 1 > tout->size[1]) {
        b_ncols = tout->size[1];
        i = tout->size[0] * tout->size[1];
        tout->size[0] = 1;
        tout->size[1] += 81;
        emxEnsureCapacity_real_T(&st, tout, i, &hb_emlrtRTEI);
        tout_data = tout->data;
        ncols = yout->size[1];
        i = yout->size[0] * yout->size[1];
        yout->size[0] = 111;
        yout->size[1] += 81;
        emxEnsureCapacity_real_T(&st, yout, i, &hb_emlrtRTEI);
        yout_data = yout->data;
        for (j = 0; j < 81; j++) {
          tout_data[b_ncols + j] = 0.0;
          for (i = 0; i < 111; i++) {
            yout_data[i + 111 * (ncols + j)] = 0.0;
          }
        }
      }
      for (ncols = 0; ncols < 8; ncols++) {
        b_ncols = ncols + outidx;
        tout_data[b_ncols] = toutnew[ncols];
        for (j = 0; j < 111; j++) {
          yout_data[j + 111 * b_ncols] = youtnew[j + 111 * ncols];
        }
      }
      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &y_emlrtRSI;
          rh = d1 / 5.0E-14;
          c_st.site = &ob_emlrtRSI;
          d_st.site = &w_emlrtRSI;
          if (rh < 0.0) {
            emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
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
        memcpy(&y[0], &ynew[0], 111U * sizeof(real_T));
      }
    }
  } while (exitg1 == 0);
  emxFree_real_T(&st, &r);
  emxFree_int32_T(&st, &ie);
  emxFree_real_T(&st, &ye);
  emxFree_real_T(&st, &te);
  emxFree_real_T(&st, &f0);
  if (nout + 1 < 1) {
    b_ncols = -1;
  } else {
    b_ncols = nout;
  }
  i = varargout_1->size[0];
  varargout_1->size[0] = b_ncols + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &fb_emlrtRTEI);
  ye_data = varargout_1->data;
  for (i = 0; i <= b_ncols; i++) {
    ye_data[i] = tout_data[i];
  }
  emxFree_real_T(&st, &tout);
  if (nout + 1 < 1) {
    b_ncols = -1;
  } else {
    b_ncols = nout;
  }
  i = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = b_ncols + 1;
  varargout_2->size[1] = 111;
  emxEnsureCapacity_real_T(&st, varargout_2, i, &gb_emlrtRTEI);
  ye_data = varargout_2->data;
  for (i = 0; i < 111; i++) {
    for (ncols = 0; ncols <= b_ncols; ncols++) {
      ye_data[ncols + varargout_2->size[0] * i] = yout_data[i + 111 * ncols];
    }
  }
  emxFree_real_T(&st, &yout);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (ode89.c) */
