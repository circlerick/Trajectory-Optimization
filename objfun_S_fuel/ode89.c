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
#include "objfun_S_fuel.h"
#include "objfun_S_fuel_data.h"
#include "objfun_S_fuel_emxutil.h"
#include "objfun_S_fuel_types.h"
#include "odezero.h"
#include "rt_nonfinite.h"
#include "stopfuel.h"
#include "warning.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = {
    17,      /* lineNo */
    "ode89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\ode89.m" /* pathName
                                                                         */
};

static emlrtRSInfo i_emlrtRSI = {
    631,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    466,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    463,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    429,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    416,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    419,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    418,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    358,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    352,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    308,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    216,                  /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    90,                   /* lineNo */
    "explicitRungeKutta", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                          */
};

static emlrtRSInfo vc_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                          */
};

static emlrtRTEInfo c_emlrtRTEI = {
    54,                   /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    56,                   /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo e_emlrtRTEI = {
    107,                  /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    295,                  /* lineNo */
    15,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    241,                  /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    242,                  /* lineNo */
    5,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    656,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    657,                  /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    90,                   /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
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
           const real_T tspan[2], const real_T b_y0[11],
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
  real_T b_f[154];
  real_T f[154];
  real_T youtnew[88];
  real_T yinterp[77];
  real_T y[11];
  real_T ynew[11];
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
  int32_T k;
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
  st.site = &h_emlrtRSI;
  t0 = tspan[0];
  tfinal = tspan[1];
  if (tspan[0] == tspan[1]) {
    emlrtErrorWithMessageIdR2018a(
        &st, &c_emlrtRTEI, "MATLAB:odearguments:TspanEndpointsNotDistinct",
        "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }
  MinStepExit = true;
  if (!(tspan[1] > tspan[0])) {
    MinStepExit = (tspan[0] > tspan[1]);
  }
  if (!MinStepExit) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
                                  "MATLAB:odearguments:TspanNotMonotonic",
                                  "MATLAB:odearguments:TspanNotMonotonic", 0);
  }
  b_st.site = &t_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  d_st.site = &v_emlrtRSI;
  e_st.site = &w_emlrtRSI;
  emxInit_real_T(&e_st, &f0, 1, &t_emlrtRTEI);
  f_st.site = &u_emlrtRSI;
  objfun_S_fuel_anonFcn2(
      &f_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
      ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
      ode_workspace_physical_EPS, ode_workspace_SIGN, b_y0, f0);
  f0_data = f0->data;
  nfevals = 1;
  if (f0->size[0] != 11) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI, "Coder:toolbox:SizeIC",
                                  "Coder:toolbox:SizeIC", 0);
  }
  b_st.site = &s_emlrtRSI;
  c_st.site = &sc_emlrtRSI;
  valt = stopfuel(&c_st, b_y0);
  emxInit_real_T(&st, &tout, 2, &o_emlrtRTEI);
  i = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = 400;
  emxEnsureCapacity_real_T(&st, tout, i, &o_emlrtRTEI);
  tout_data = tout->data;
  for (i = 0; i < 400; i++) {
    tout_data[i] = 0.0;
  }
  emxInit_real_T(&st, &yout, 2, &p_emlrtRTEI);
  i = yout->size[0] * yout->size[1];
  yout->size[0] = 11;
  yout->size[1] = 400;
  emxEnsureCapacity_real_T(&st, yout, i, &p_emlrtRTEI);
  yout_data = yout->data;
  for (i = 0; i < 4400; i++) {
    yout_data[i] = 0.0;
  }
  nout = 0;
  tout_data[0] = tspan[0];
  for (i = 0; i < 11; i++) {
    yout_data[i] = b_y0[i];
  }
  d1 = tspan[1] - tspan[0];
  rh = muDoubleScalarAbs(d1);
  hmax = muDoubleScalarMin(rh, 0.001);
  if (!(hmax > 0.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                  "MATLAB:odearguments:MaxStepLEzero",
                                  "MATLAB:odearguments:MaxStepLEzero", 0);
  }
  absh = muDoubleScalarMin(hmax, rh);
  for (k = 0; k < 11; k++) {
    y[k] = muDoubleScalarMax(muDoubleScalarAbs(b_y0[k]), 1.0);
  }
  b_st.site = &r_emlrtRSI;
  c_st.site = &tc_emlrtRSI;
  d_st.site = &uc_emlrtRSI;
  for (i = 0; i < 11; i++) {
    y[i] = f0_data[i] / y[i];
  }
  rh = 0.0;
  for (k = 0; k < 11; k++) {
    absx = muDoubleScalarAbs(y[k]);
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
  memcpy(&y[0], &b_y0[0], 11U * sizeof(real_T));
  memset(&f[0], 0, 154U * sizeof(real_T));
  for (i = 0; i < 11; i++) {
    f[i] = f0_data[i];
  }
  tdir = muDoubleScalarSign(d1);
  MinStepExit = false;
  Done = false;
  emxInit_real_T(&st, &te, 2, &u_emlrtRTEI);
  emxInit_real_T(&st, &ye, 2, &u_emlrtRTEI);
  emxInit_int32_T(&st, &ie, &u_emlrtRTEI);
  emxInit_real_T(&st, &r, 1, &u_emlrtRTEI);
  real_T h;
  real_T hmin;
  int32_T exitg1;
  do {
    real_T err;
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
      real_T varargin_1[11];
      exitg2 = 0;
      if (t == t0) {
        for (i = 0; i < 11; i++) {
          f[i] = f0_data[i];
        }
      } else if (NoFailedAttempts) {
        b_st.site = &q_emlrtRSI;
        c_st.site = &u_emlrtRSI;
        d_st.site = &v_emlrtRSI;
        e_st.site = &w_emlrtRSI;
        f_st.site = &u_emlrtRSI;
        objfun_S_fuel_anonFcn2(
            &f_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
            ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
            ode_workspace_physical_EPS, ode_workspace_SIGN, y, r);
        ye_data = r->data;
        for (i = 0; i < 11; i++) {
          f[i] = ye_data[i];
        }
        nfevals++;
      }
      b_st.site = &p_emlrtRSI;
      computeMainStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN, y, h, f, &nfevals,
          ynew, varargin_1);
      for (i = 0; i < 11; i++) {
        ynew[i] = y[i] + h * ynew[i];
      }
      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }
      h = tnew - t;
      if (NoFailedAttempts) {
        err = absh * maxScaledError(varargin_1, y, ynew);
      } else {
        rh = 0.0;
        for (k = 0; k < 11; k++) {
          absx = muDoubleScalarAbs(varargin_1[k]);
          d1 = muDoubleScalarAbs(y[k]);
          if (d1 > 1.0) {
            absx /= d1;
          }
          if ((absx > rh) || muDoubleScalarIsNaN(absx)) {
            rh = absx;
          }
        }
        err = absh * rh;
      }
      if (!(err <= 5.0E-14)) {
        if (absh <= hmin) {
          char_T cv[23];
          char_T cv1[23];
          b_st.site = &o_emlrtRSI;
          num2str(&b_st, t, cv);
          b_st.site = &n_emlrtRSI;
          num2str(&b_st, hmin, cv1);
          b_st.site = &m_emlrtRSI;
          warning(&b_st, cv, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &l_emlrtRSI;
            c_st.site = &vc_emlrtRSI;
            d_st.site = &g_emlrtRSI;
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
      int32_T outidx;
      b_st.site = &k_emlrtRSI;
      computeCEStages89(
          &b_st, ode_workspace_physical_Tmax, ode_workspace_physical_c,
          ode_workspace_physical_NSTATE, ode_workspace_physical_shoot,
          ode_workspace_physical_EPS, ode_workspace_SIGN, y, h, f, &nfevals);
      b_st.site = &j_emlrtRSI;
      odezero(&b_st, valt, t, y, tnew, ynew, t0, h, f, &ncols, te, ye, ie,
              &valt, &b);
      ye_data = ye->data;
      te_data = te->data;
      if ((ncols > 0) && b) {
        real_T b_t[13];
        tnew = te_data[te->size[1] - 1];
        for (i = 0; i < 11; i++) {
          ynew[i] = ye_data[i + 11 * (ye->size[1] - 1)];
        }
        rh = te_data[te->size[1] - 1] - t;
        Done = true;
        for (i = 0; i < 13; i++) {
          b_t[i] = t + a[i] * rh;
        }
        real_T a__2[143];
        memcpy(&b_f[0], &f[0], 154U * sizeof(real_T));
        ntrp89(b_t, t, y, h, b_f, a__2, *(real_T(*)[143]) & f[11]);
        h = rh;
      }
      outidx = nout + 1;
      d1 = tnew - t;
      toutnew[7] = tnew;
      for (k = 0; k < 7; k++) {
        real_T b_b[14];
        absx = t + d1 * (0.125 * (real_T)k + 0.125);
        toutnew[k] = absx;
        memcpy(&yinterp[k * 11], &y[0], 11U * sizeof(real_T));
        rh = (absx - t) / h;
        absx = rh * rh;
        for (i = 0; i < 14; i++) {
          b_b[i] =
              ((((((dv[i] * rh + dv1[i]) * rh + dv2[i]) * rh + dv3[i]) * rh +
                 dv4[i]) *
                    rh +
                dv5[i]) *
                   rh +
               dv6[i]) *
              absx;
        }
        b_b[0] += rh;
        for (i = 0; i < 11; i++) {
          absx = 0.0;
          for (b_ncols = 0; b_ncols < 14; b_ncols++) {
            absx += f[i + 11 * b_ncols] * b_b[b_ncols];
          }
          b_ncols = i + 11 * k;
          absx = yinterp[b_ncols] + h * absx;
          yinterp[b_ncols] = absx;
          youtnew[b_ncols] = absx;
        }
      }
      memcpy(&youtnew[77], &ynew[0], 11U * sizeof(real_T));
      nout += 8;
      if (nout + 1 > tout->size[1]) {
        ncols = tout->size[1];
        i = tout->size[0] * tout->size[1];
        tout->size[0] = 1;
        tout->size[1] += 400;
        emxEnsureCapacity_real_T(&st, tout, i, &s_emlrtRTEI);
        tout_data = tout->data;
        b_ncols = yout->size[1];
        i = yout->size[0] * yout->size[1];
        yout->size[0] = 11;
        yout->size[1] += 400;
        emxEnsureCapacity_real_T(&st, yout, i, &s_emlrtRTEI);
        yout_data = yout->data;
        for (j = 0; j < 400; j++) {
          tout_data[ncols + j] = 0.0;
          for (i = 0; i < 11; i++) {
            yout_data[i + 11 * (b_ncols + j)] = 0.0;
          }
        }
      }
      for (k = 0; k < 8; k++) {
        ncols = k + outidx;
        tout_data[ncols] = toutnew[k];
        for (j = 0; j < 11; j++) {
          yout_data[j + 11 * ncols] = youtnew[j + 11 * k];
        }
      }
      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &i_emlrtRSI;
          d1 = err / 5.0E-14;
          c_st.site = &vc_emlrtRSI;
          d_st.site = &g_emlrtRSI;
          if (d1 < 0.0) {
            emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                          "Coder:toolbox:power_domainError",
                                          "Coder:toolbox:power_domainError", 0);
          }
          rh = 1.25 * muDoubleScalarPower(d1, 0.1111111111111111);
          if (rh > 0.2) {
            absh /= rh;
          } else {
            absh *= 5.0;
          }
        }
        t = tnew;
        memcpy(&y[0], &ynew[0], 11U * sizeof(real_T));
      }
    }
  } while (exitg1 == 0);
  emxFree_real_T(&st, &r);
  emxFree_int32_T(&st, &ie);
  emxFree_real_T(&st, &ye);
  emxFree_real_T(&st, &te);
  emxFree_real_T(&st, &f0);
  if (nout + 1 < 1) {
    ncols = -1;
  } else {
    ncols = nout;
  }
  i = varargout_1->size[0];
  varargout_1->size[0] = ncols + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &q_emlrtRTEI);
  ye_data = varargout_1->data;
  for (i = 0; i <= ncols; i++) {
    ye_data[i] = tout_data[i];
  }
  emxFree_real_T(&st, &tout);
  if (nout + 1 < 1) {
    ncols = -1;
  } else {
    ncols = nout;
  }
  i = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = ncols + 1;
  varargout_2->size[1] = 11;
  emxEnsureCapacity_real_T(&st, varargout_2, i, &r_emlrtRTEI);
  ye_data = varargout_2->data;
  for (i = 0; i < 11; i++) {
    for (b_ncols = 0; b_ncols <= ncols; b_ncols++) {
      ye_data[b_ncols + varargout_2->size[0] * i] = yout_data[i + 11 * b_ncols];
    }
  }
  emxFree_real_T(&st, &yout);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (ode89.c) */
