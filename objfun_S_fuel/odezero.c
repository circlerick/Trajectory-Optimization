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
#include "objfun_S_fuel_data.h"
#include "objfun_S_fuel_emxutil.h"
#include "objfun_S_fuel_types.h"
#include "rt_nonfinite.h"
#include "stopfuel.h"
#include "mwmathutil.h"
#include <math.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo sd_emlrtRSI = {
    29,        /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    107,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    48,        /* lineNo */
    27,        /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    158,       /* lineNo */
    5,         /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    160,       /* lineNo */
    5,         /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

/* Function Definitions */
void odezero(const emlrtStack *sp, real_T v, real_T t, const real_T y[11],
             real_T tnew, const real_T ynew[11], real_T t0, real_T h,
             const real_T f[154], int32_T *nout, emxArray_real_T *tout,
             emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
             boolean_T *stop)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T yR[11];
  real_T ytry[11];
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
  real_T *tout_data;
  real_T *yout_data;
  int32_T exponent;
  int32_T i;
  int32_T *iout_data;
  char_T lastmoved;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  *nout = 0;
  tout->size[0] = 1;
  tout->size[1] = 0;
  yout->size[0] = 11;
  yout->size[1] = 0;
  iout->size[0] = 1;
  iout->size[1] = 0;
  absx = muDoubleScalarAbs(t);
  if (muDoubleScalarIsInf(absx) || muDoubleScalarIsNaN(absx)) {
    delta = rtNaN;
  } else if (absx < 4.4501477170144028E-308) {
    delta = 4.94065645841247E-324;
  } else {
    frexp(absx, &i);
    delta = ldexp(1.0, i - 53);
  }
  absx = muDoubleScalarAbs(tnew);
  if (muDoubleScalarIsInf(absx) || muDoubleScalarIsNaN(absx)) {
    absx = rtNaN;
  } else if (absx < 4.4501477170144028E-308) {
    absx = 4.94065645841247E-324;
  } else {
    frexp(absx, &exponent);
    absx = ldexp(1.0, exponent - 53);
  }
  tol_tmp = tnew - t;
  tol = muDoubleScalarMin(128.0 * muDoubleScalarMax(delta, absx),
                          muDoubleScalarAbs(tol_tmp));
  tdir = muDoubleScalarSign(tol_tmp);
  *stop = false;
  tL = t;
  vL = v;
  st.site = &sd_emlrtRSI;
  b_st.site = &sc_emlrtRSI;
  *vnew = stopfuel(&b_st, ynew);
  tR = tnew;
  memcpy(&yR[0], &ynew[0], 11U * sizeof(real_T));
  vR = *vnew;
  vtry = 0.0;
  ttry = tnew;
  lastmoved = 'N';
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
          exponent = tout->size[0] * tout->size[1];
          tout->size[0] = 1;
          tout->size[1] = 1;
          emxEnsureCapacity_real_T(sp, tout, exponent, &kb_emlrtRTEI);
          tout_data = tout->data;
          exponent = yout->size[0] * yout->size[1];
          yout->size[0] = 11;
          yout->size[1] = 1;
          emxEnsureCapacity_real_T(sp, yout, exponent, &s_emlrtRTEI);
          yout_data = yout->data;
          exponent = iout->size[0] * iout->size[1];
          iout->size[0] = 1;
          iout->size[1] = 1;
          emxEnsureCapacity_int32_T(sp, iout, exponent, &lb_emlrtRTEI);
          iout_data = iout->data;
          for (i = 0; i < 11; i++) {
            yout_data[i] = 0.0;
          }
          tout_data[0] = tR;
          iout_data[0] = 1;
          for (exponent = 0; exponent < 11; exponent++) {
            yout_data[exponent] = yR[exponent];
          }
          *nout = 1;
          *stop = (tL != t0);
          exitg1 = 1;
        } else {
          real_T b[14];
          if ((tL == t) && (vL == 0.0) && (vR != 0.0)) {
            ttry = tL + tdir * 0.5 * tol;
          } else {
            real_T change;
            change = 1.0;
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
          absx = (ttry - t) / h;
          delta = absx * absx;
          for (i = 0; i < 14; i++) {
            b[i] =
                ((((((dv[i] * absx + dv1[i]) * absx + dv2[i]) * absx + dv3[i]) *
                       absx +
                   dv4[i]) *
                      absx +
                  dv5[i]) *
                     absx +
                 dv6[i]) *
                delta;
          }
          b[0] += absx;
          for (exponent = 0; exponent < 11; exponent++) {
            absx = 0.0;
            for (i = 0; i < 14; i++) {
              absx += f[exponent + 11 * i] * b[i];
            }
            ytry[exponent] = y[exponent] + h * absx;
          }
          st.site = &td_emlrtRSI;
          b_st.site = &sc_emlrtRSI;
          vtry = stopfuel(&b_st, ytry);
          if ((d != muDoubleScalarSign(vtry)) && (0.0 * (vtry - vL) >= 0.0)) {
            absx = tR;
            tR = ttry;
            ttry = absx;
            memcpy(&yR[0], &ytry[0], 11U * sizeof(real_T));
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
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI, "MATLAB:odezero:LostEvent",
                                  "MATLAB:odezero:LostEvent", 0);
  }
}

/* End of code generation (odezero.c) */
