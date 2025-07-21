/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * odezero.c
 *
 * Code generation for function 'odezero'
 *
 */

/* Include files */
#include "odezero.h"
#include "eml_int_forloop_overflow_check.h"
#include "mtimes.h"
#include "ntrp89.h"
#include "objfunSTM_S_fuel_data.h"
#include "objfunSTM_S_fuel_emxutil.h"
#include "objfunSTM_S_fuel_types.h"
#include "rt_nonfinite.h"
#include "stopfuel.h"
#include "mwmathutil.h"
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo uh_emlrtRSI = {
    29,        /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    60,        /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo wh_emlrtRSI = {
    72,        /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo xh_emlrtRSI = {
    106,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo yh_emlrtRSI = {
    107,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo ai_emlrtRSI = {
    158,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo bi_emlrtRSI = {
    159,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    160,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    161,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo ei_emlrtRSI = {
    167,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo ji_emlrtRSI = {
    194,    /* lineNo */
    "nany", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    48,        /* lineNo */
    27,        /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    35,        /* lineNo */
    1,         /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    158,       /* lineNo */
    5,         /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    106,       /* lineNo */
    9,         /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    160,       /* lineNo */
    5,         /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    116,       /* lineNo */
    13,        /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

/* Function Definitions */
void odezero(const emlrtStack *sp, real_T v, real_T t, const emxArray_real_T *y,
             real_T tnew, const emxArray_real_T *ynew, real_T t0, real_T h,
             const emxArray_real_T *f, int32_T *nout, emxArray_real_T *tout,
             emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
             boolean_T *stop)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *b;
  emxArray_real_T *yR;
  emxArray_real_T *ytry;
  const real_T *y_data;
  const real_T *ynew_data;
  real_T absx;
  real_T delta;
  real_T tL;
  real_T tR;
  real_T tdir;
  real_T tol;
  real_T tol_tmp;
  real_T ttry;
  real_T vL;
  real_T vR;
  real_T vtry;
  real_T *yR_data;
  real_T *yout_data;
  real_T *ytry_data;
  int32_T i;
  int32_T nrows;
  int32_T *iout_data;
  char_T lastmoved;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  ynew_data = ynew->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  *nout = 0;
  tout->size[0] = 1;
  tout->size[1] = 0;
  yout->size[0] = y->size[0];
  yout->size[1] = 0;
  iout->size[0] = 1;
  iout->size[1] = 0;
  absx = muDoubleScalarAbs(t);
  if (muDoubleScalarIsInf(absx) || muDoubleScalarIsNaN(absx)) {
    delta = rtNaN;
  } else if (absx < 4.4501477170144028E-308) {
    delta = 4.94065645841247E-324;
  } else {
    frexp(absx, &nrows);
    delta = ldexp(1.0, nrows - 53);
  }
  absx = muDoubleScalarAbs(tnew);
  if (muDoubleScalarIsInf(absx) || muDoubleScalarIsNaN(absx)) {
    absx = rtNaN;
  } else if (absx < 4.4501477170144028E-308) {
    absx = 4.94065645841247E-324;
  } else {
    frexp(absx, &i);
    absx = ldexp(1.0, i - 53);
  }
  tol_tmp = tnew - t;
  tol = muDoubleScalarMin(128.0 * muDoubleScalarMax(delta, absx),
                          muDoubleScalarAbs(tol_tmp));
  tdir = muDoubleScalarSign(tol_tmp);
  *stop = false;
  tL = t;
  vL = v;
  st.site = &uh_emlrtRSI;
  b_st.site = &qg_emlrtRSI;
  *vnew = stopfuel(&b_st, ynew);
  tR = tnew;
  emxInit_real_T(sp, &yR, 1, &fd_emlrtRTEI);
  i = yR->size[0];
  yR->size[0] = ynew->size[0];
  emxEnsureCapacity_real_T(sp, yR, i, &fd_emlrtRTEI);
  yR_data = yR->data;
  nrows = ynew->size[0];
  for (i = 0; i < nrows; i++) {
    yR_data[i] = ynew_data[i];
  }
  vR = *vnew;
  vtry = 0.0;
  ttry = tnew;
  lastmoved = 'N';
  emxInit_real_T(sp, &ytry, 1, &hd_emlrtRTEI);
  emxInit_real_T(sp, &b, 1, &kd_emlrtRTEI);
  guard1 = false;
  real_T d;
  int32_T exitg1;
  do {
    exitg1 = 0;
    d = muDoubleScalarSign(vL);
    if (d != muDoubleScalarSign(vR)) {
      absx = vR - vL;
      if (0.0 * absx >= 0.0) {
        delta = tR - tL;
        tol_tmp = muDoubleScalarAbs(delta);
        if (tol_tmp <= tol) {
          st.site = &ai_emlrtRSI;
          i = tout->size[0] * tout->size[1];
          tout->size[0] = 1;
          tout->size[1] = 1;
          emxEnsureCapacity_real_T(&st, tout, i, &gd_emlrtRTEI);
          ytry_data = tout->data;
          b_st.site = &hi_emlrtRSI;
          st.site = &bi_emlrtRSI;
          nrows = y->size[0];
          i = yout->size[0] * yout->size[1];
          yout->size[0] = y->size[0];
          yout->size[1] = 1;
          emxEnsureCapacity_real_T(&st, yout, i, &fc_emlrtRTEI);
          yout_data = yout->data;
          b_st.site = &hi_emlrtRSI;
          for (i = 0; i < nrows; i++) {
            yout_data[i] = 0.0;
          }
          b_st.site = &ii_emlrtRSI;
          if (y->size[0] > 2147483646) {
            c_st.site = &y_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }
          st.site = &ci_emlrtRSI;
          i = iout->size[0] * iout->size[1];
          iout->size[0] = 1;
          iout->size[1] = 1;
          emxEnsureCapacity_int32_T(&st, iout, i, &id_emlrtRTEI);
          iout_data = iout->data;
          b_st.site = &hi_emlrtRSI;
          st.site = &di_emlrtRSI;
          ytry_data[0] = tR;
          iout_data[0] = 1;
          nrows = yR->size[0];
          for (i = 0; i < nrows; i++) {
            yout_data[i] = yR_data[i];
          }
          *nout = 1;
          st.site = &ei_emlrtRSI;
          b_st.site = &ji_emlrtRSI;
          *stop = (tL != t0);
          exitg1 = 1;
        } else {
          real_T b_b[14];
          boolean_T guard2 = false;
          guard2 = false;
          if (tL == t) {
            st.site = &vh_emlrtRSI;
            if ((vL == 0.0) && (vR != 0.0)) {
              ttry = tL + tdir * 0.5 * tol;
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
          if (guard2) {
            real_T change;
            change = 1.0;
            st.site = &wh_emlrtRSI;
            if (vL == 0.0) {
              if ((tdir * ttry > tdir * tR) && (vtry != vR)) {
                absx = 1.0 - vR * (ttry - tR) / ((vtry - vR) * delta);
                if ((absx < 0.0) || (absx > 1.0)) {
                  absx = 0.5;
                }
              } else {
                absx = 0.5;
              }
            } else if (vR == 0.0) {
              if ((tdir * ttry < tdir * tL) && (vtry != vL)) {
                absx = vL * (tL - ttry) / ((vtry - vL) * delta);
                if ((absx < 0.0) || (absx > 1.0)) {
                  absx = 0.5;
                }
              } else {
                absx = 0.5;
              }
            } else {
              absx = -vL / absx;
            }
            if (absx < 1.0) {
              change = absx;
            }
            change *= tol_tmp;
            change = muDoubleScalarMax(
                0.5 * tol, muDoubleScalarMin(change, tol_tmp - 0.5 * tol));
            ttry = tL + tdir * change;
          }
          st.site = &xh_emlrtRSI;
          i = ytry->size[0];
          ytry->size[0] = y->size[0];
          emxEnsureCapacity_real_T(&st, ytry, i, &hd_emlrtRTEI);
          ytry_data = ytry->data;
          nrows = y->size[0];
          for (i = 0; i < nrows; i++) {
            ytry_data[i] = y_data[i];
          }
          b_st.site = &fi_emlrtRSI;
          absx = (ttry - t) / h;
          delta = absx * absx;
          for (i = 0; i < 14; i++) {
            b_b[i] =
                ((((((dv[i] * absx + dv1[i]) * absx + dv2[i]) * absx + dv3[i]) *
                       absx +
                   dv4[i]) *
                      absx +
                  dv5[i]) *
                     absx +
                 dv6[i]) *
                delta;
          }
          b_b[0] += absx;
          c_st.site = &gi_emlrtRSI;
          d_st.site = &jg_emlrtRSI;
          mtimes(&d_st, f, b_b, b);
          yout_data = b->data;
          if (y->size[0] == b->size[0]) {
            nrows = y->size[0];
            for (i = 0; i < nrows; i++) {
              ytry_data[i] = y_data[i] + h * yout_data[i];
            }
          } else {
            i_binary_expand_op(ytry, y, h, b);
            ytry_data = ytry->data;
          }
          st.site = &yh_emlrtRSI;
          b_st.site = &qg_emlrtRSI;
          vtry = stopfuel(&b_st, ytry);
          if ((d != muDoubleScalarSign(vtry)) && (0.0 * (vtry - vL) >= 0.0)) {
            absx = tR;
            tR = ttry;
            ttry = absx;
            i = yR->size[0];
            yR->size[0] = ytry->size[0];
            emxEnsureCapacity_real_T(sp, yR, i, &jd_emlrtRTEI);
            yR_data = yR->data;
            nrows = ytry->size[0];
            for (i = 0; i < nrows; i++) {
              yR_data[i] = ytry_data[i];
            }
            absx = vR;
            vR = vtry;
            vtry = absx;
            if (lastmoved == 'R') {
              absx = 0.5 * vL;
              if (muDoubleScalarAbs(absx) >= 2.2250738585072014E-308) {
                vL = absx;
              }
            }
            lastmoved = 'R';
          } else {
            absx = tL;
            tL = ttry;
            ttry = absx;
            absx = vL;
            vL = vtry;
            vtry = absx;
            if (lastmoved == 'L') {
              absx = 0.5 * vR;
              if (muDoubleScalarAbs(absx) >= 2.2250738585072014E-308) {
                vR = absx;
              }
            }
            lastmoved = 'L';
          }
          guard1 = false;
        }
      } else {
        guard1 = true;
        exitg1 = 1;
      }
    } else {
      guard1 = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  if (guard1 && (lastmoved != 'N')) {
    emlrtErrorWithMessageIdR2018a(sp, &r_emlrtRTEI, "MATLAB:odezero:LostEvent",
                                  "MATLAB:odezero:LostEvent", 0);
  }
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &ytry);
  emxFree_real_T(sp, &yR);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (odezero.c) */
