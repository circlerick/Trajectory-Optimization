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
#include "mtimes.h"
#include "ntrp89.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "rt_nonfinite.h"
#include "stopNOG.h"
#include "stopfuel.h"
#include "mwmathutil.h"
#include <math.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo al_emlrtRSI = {
    29,        /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo bl_emlrtRSI = {
    60,        /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo cl_emlrtRSI = {
    72,        /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo dl_emlrtRSI = {
    106,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo el_emlrtRSI = {
    107,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo fl_emlrtRSI = {
    158,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo gl_emlrtRSI = {
    159,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo hl_emlrtRSI = {
    160,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo il_emlrtRSI = {
    161,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRSInfo jl_emlrtRSI = {
    167,       /* lineNo */
    "odezero", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pathName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    48,        /* lineNo */
    27,        /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    158,       /* lineNo */
    5,         /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo if_emlrtRTEI = {
    159,       /* lineNo */
    5,         /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = {
    160,       /* lineNo */
    5,         /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = {
    159,       /* lineNo */
    30,        /* colNo */
    "odezero", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\odezero"
    ".m" /* pName */
};

/* Function Definitions */
void b_odezero(const emlrtStack *sp, real_T v, real_T t, const real_T y_data[],
               int32_T y_size, real_T tnew, const real_T ynew_data[],
               int32_T ynew_size, real_T t0, real_T h, const real_T f_data[],
               const int32_T f_size[2], int32_T *nout, emxArray_real_T *tout,
               emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
               boolean_T *stop)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int8_T *y;
  real_T yinterp_data[243];
  real_T yR_data[121];
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
  int32_T b_i;
  int32_T exponent;
  int32_T i;
  int32_T *iout_data;
  char_T lastmoved;
  int8_T *b_y_data;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  *nout = 0;
  tout->size[0] = 1;
  tout->size[1] = 0;
  yout->size[0] = y_size;
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
  st.site = &al_emlrtRSI;
  b_st.site = &tm_emlrtRSI;
  *vnew = stopfuel(&b_st, ynew_data, ynew_size);
  tR = tnew;
  exponent = ynew_size;
  if (ynew_size - 1 >= 0) {
    memcpy(&yR_data[0], &ynew_data[0], (uint32_T)ynew_size * sizeof(real_T));
  }
  vR = *vnew;
  vtry = 0.0;
  ttry = tnew;
  lastmoved = 'N';
  emxInit_int8_T(sp, &y, &kf_emlrtRTEI);
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
          st.site = &fl_emlrtRSI;
          b_i = tout->size[0] * tout->size[1];
          tout->size[0] = 1;
          tout->size[1] = 1;
          emxEnsureCapacity_real_T(&st, tout, b_i, &hf_emlrtRTEI);
          tout_data = tout->data;
          st.site = &gl_emlrtRSI;
          b_i = y->size[0] * y->size[1];
          y->size[0] = y_size;
          y->size[1] = 1;
          emxEnsureCapacity_int8_T(&st, y, b_i, &sc_emlrtRTEI);
          b_y_data = y->data;
          for (i = 0; i < y_size; i++) {
            b_y_data[i] = 0;
          }
          b_i = yout->size[0] * yout->size[1];
          yout->size[0] = y->size[0];
          yout->size[1] = 1;
          emxEnsureCapacity_real_T(sp, yout, b_i, &if_emlrtRTEI);
          yout_data = yout->data;
          i = y->size[0];
          for (b_i = 0; b_i < i; b_i++) {
            yout_data[b_i] = 0.0;
          }
          st.site = &hl_emlrtRSI;
          b_i = iout->size[0] * iout->size[1];
          iout->size[0] = 1;
          iout->size[1] = 1;
          emxEnsureCapacity_int32_T(&st, iout, b_i, &jf_emlrtRTEI);
          iout_data = iout->data;
          st.site = &il_emlrtRSI;
          tout_data[0] = tR;
          iout_data[0] = 1;
          for (b_i = 0; b_i < exponent; b_i++) {
            yout_data[b_i] = yR_data[b_i];
          }
          *nout = 1;
          st.site = &jl_emlrtRSI;
          *stop = (tL != t0);
          exitg1 = 1;
        } else {
          real_T sp_data[243];
          real_T b[14];
          boolean_T guard2 = false;
          guard2 = false;
          if (tL == t) {
            st.site = &bl_emlrtRSI;
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
            st.site = &cl_emlrtRSI;
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
          st.site = &dl_emlrtRSI;
          if (y_size - 1 >= 0) {
            memcpy(&yinterp_data[0], &y_data[0],
                   (uint32_T)y_size * sizeof(real_T));
          }
          absx = (ttry - t) / h;
          delta = absx * absx;
          for (i = 0; i < 14; i++) {
            b[i] = ((((((dv1[i] * absx + dv2[i]) * absx + dv3[i]) * absx +
                       dv4[i]) *
                          absx +
                      dv5[i]) *
                         absx +
                     dv6[i]) *
                        absx +
                    dv7[i]) *
                   delta;
          }
          b[0] += absx;
          k_mtimes(f_data, f_size, b, sp_data, &i);
          if (y_size == i) {
            for (b_i = 0; b_i < y_size; b_i++) {
              yinterp_data[b_i] = y_data[b_i] + h * sp_data[b_i];
            }
          } else {
            v_binary_expand_op(yinterp_data, y_data, &y_size, h, sp_data, &i);
          }
          st.site = &el_emlrtRSI;
          b_st.site = &tm_emlrtRSI;
          vtry = stopfuel(&b_st, yinterp_data, y_size);
          if ((d != muDoubleScalarSign(vtry)) && (0.0 * (vtry - vL) >= 0.0)) {
            absx = tR;
            tR = ttry;
            ttry = absx;
            exponent = y_size;
            if (y_size - 1 >= 0) {
              memcpy(&yR_data[0], &yinterp_data[0],
                     (uint32_T)y_size * sizeof(real_T));
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
    emlrtErrorWithMessageIdR2018a(sp, &t_emlrtRTEI, "MATLAB:odezero:LostEvent",
                                  "MATLAB:odezero:LostEvent", 0);
  }
  emxFree_int8_T(sp, &y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void c_odezero(const emlrtStack *sp, real_T v, real_T t, const real_T y_data[],
               int32_T y_size, real_T tnew, const real_T ynew_data[],
               int32_T ynew_size, real_T t0, real_T h, const real_T f_data[],
               const int32_T f_size[2], int32_T *nout, emxArray_real_T *tout,
               emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
               boolean_T *stop)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T yR_data[243];
  real_T ytry_data[243];
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
  yout->size[0] = y_size;
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
  st.site = &al_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  *vnew = stopfuel(&b_st, ynew_data, ynew_size);
  tR = tnew;
  exponent = ynew_size;
  if (ynew_size - 1 >= 0) {
    memcpy(&yR_data[0], &ynew_data[0], (uint32_T)ynew_size * sizeof(real_T));
  }
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
          st.site = &fl_emlrtRSI;
          i = tout->size[0] * tout->size[1];
          tout->size[0] = 1;
          tout->size[1] = 1;
          emxEnsureCapacity_real_T(&st, tout, i, &hf_emlrtRTEI);
          tout_data = tout->data;
          st.site = &gl_emlrtRSI;
          i = yout->size[0] * yout->size[1];
          yout->size[0] = y_size;
          yout->size[1] = 1;
          emxEnsureCapacity_real_T(&st, yout, i, &sc_emlrtRTEI);
          yout_data = yout->data;
          for (i = 0; i < y_size; i++) {
            yout_data[i] = 0.0;
          }
          st.site = &hl_emlrtRSI;
          i = iout->size[0] * iout->size[1];
          iout->size[0] = 1;
          iout->size[1] = 1;
          emxEnsureCapacity_int32_T(&st, iout, i, &jf_emlrtRTEI);
          iout_data = iout->data;
          st.site = &il_emlrtRSI;
          tout_data[0] = tR;
          iout_data[0] = 1;
          for (i = 0; i < exponent; i++) {
            yout_data[i] = yR_data[i];
          }
          *nout = 1;
          st.site = &jl_emlrtRSI;
          *stop = (tL != t0);
          exitg1 = 1;
        } else {
          real_T sp_data[243];
          real_T b[14];
          boolean_T guard2 = false;
          guard2 = false;
          if (tL == t) {
            st.site = &bl_emlrtRSI;
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
            st.site = &cl_emlrtRSI;
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
          st.site = &dl_emlrtRSI;
          if (y_size - 1 >= 0) {
            memcpy(&ytry_data[0], &y_data[0],
                   (uint32_T)y_size * sizeof(real_T));
          }
          absx = (ttry - t) / h;
          delta = absx * absx;
          for (i = 0; i < 14; i++) {
            b[i] = ((((((dv1[i] * absx + dv2[i]) * absx + dv3[i]) * absx +
                       dv4[i]) *
                          absx +
                      dv5[i]) *
                         absx +
                     dv6[i]) *
                        absx +
                    dv7[i]) *
                   delta;
          }
          b[0] += absx;
          k_mtimes(f_data, f_size, b, sp_data, &i);
          if (y_size == i) {
            for (i = 0; i < y_size; i++) {
              ytry_data[i] = y_data[i] + h * sp_data[i];
            }
          } else {
            v_binary_expand_op(ytry_data, y_data, &y_size, h, sp_data, &i);
          }
          st.site = &el_emlrtRSI;
          b_st.site = &kn_emlrtRSI;
          vtry = stopfuel(&b_st, ytry_data, y_size);
          if ((d != muDoubleScalarSign(vtry)) && (0.0 * (vtry - vL) >= 0.0)) {
            absx = tR;
            tR = ttry;
            ttry = absx;
            exponent = y_size;
            if (y_size - 1 >= 0) {
              memcpy(&yR_data[0], &ytry_data[0],
                     (uint32_T)y_size * sizeof(real_T));
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
    emlrtErrorWithMessageIdR2018a(sp, &t_emlrtRTEI, "MATLAB:odezero:LostEvent",
                                  "MATLAB:odezero:LostEvent", 0);
  }
}

void odezero(const emlrtStack *sp, real_T v, real_T t, const real_T y_data[],
             int32_T y_size, real_T tnew, const real_T ynew_data[],
             int32_T ynew_size, real_T t0, real_T h, const real_T f_data[],
             const int32_T f_size[2], int32_T *nout, emxArray_real_T *tout,
             emxArray_real_T *yout, emxArray_int32_T *iout, real_T *vnew,
             boolean_T *stop)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int8_T *y;
  real_T yinterp_data[243];
  real_T yR_data[121];
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
  int32_T b_i;
  int32_T exponent;
  int32_T i;
  int32_T *iout_data;
  char_T lastmoved;
  int8_T *b_y_data;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  *nout = 0;
  tout->size[0] = 1;
  tout->size[1] = 0;
  yout->size[0] = y_size;
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
  st.site = &al_emlrtRSI;
  b_st.site = &kj_emlrtRSI;
  *vnew = stopNOG(&b_st, ynew_data, ynew_size);
  tR = tnew;
  exponent = ynew_size;
  if (ynew_size - 1 >= 0) {
    memcpy(&yR_data[0], &ynew_data[0], (uint32_T)ynew_size * sizeof(real_T));
  }
  vR = *vnew;
  vtry = 0.0;
  ttry = tnew;
  lastmoved = 'N';
  emxInit_int8_T(sp, &y, &kf_emlrtRTEI);
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
          st.site = &fl_emlrtRSI;
          b_i = tout->size[0] * tout->size[1];
          tout->size[0] = 1;
          tout->size[1] = 1;
          emxEnsureCapacity_real_T(&st, tout, b_i, &hf_emlrtRTEI);
          tout_data = tout->data;
          st.site = &gl_emlrtRSI;
          b_i = y->size[0] * y->size[1];
          y->size[0] = y_size;
          y->size[1] = 1;
          emxEnsureCapacity_int8_T(&st, y, b_i, &sc_emlrtRTEI);
          b_y_data = y->data;
          for (i = 0; i < y_size; i++) {
            b_y_data[i] = 0;
          }
          b_i = yout->size[0] * yout->size[1];
          yout->size[0] = y->size[0];
          yout->size[1] = 1;
          emxEnsureCapacity_real_T(sp, yout, b_i, &if_emlrtRTEI);
          yout_data = yout->data;
          i = y->size[0];
          for (b_i = 0; b_i < i; b_i++) {
            yout_data[b_i] = 0.0;
          }
          st.site = &hl_emlrtRSI;
          b_i = iout->size[0] * iout->size[1];
          iout->size[0] = 1;
          iout->size[1] = 1;
          emxEnsureCapacity_int32_T(&st, iout, b_i, &jf_emlrtRTEI);
          iout_data = iout->data;
          st.site = &il_emlrtRSI;
          tout_data[0] = tR;
          iout_data[0] = 1;
          for (b_i = 0; b_i < exponent; b_i++) {
            yout_data[b_i] = yR_data[b_i];
          }
          *nout = 1;
          st.site = &jl_emlrtRSI;
          *stop = (tL != t0);
          exitg1 = 1;
        } else {
          real_T sp_data[243];
          real_T b[14];
          boolean_T guard2 = false;
          guard2 = false;
          if (tL == t) {
            st.site = &bl_emlrtRSI;
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
            st.site = &cl_emlrtRSI;
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
          st.site = &dl_emlrtRSI;
          if (y_size - 1 >= 0) {
            memcpy(&yinterp_data[0], &y_data[0],
                   (uint32_T)y_size * sizeof(real_T));
          }
          absx = (ttry - t) / h;
          delta = absx * absx;
          for (i = 0; i < 14; i++) {
            b[i] = ((((((dv1[i] * absx + dv2[i]) * absx + dv3[i]) * absx +
                       dv4[i]) *
                          absx +
                      dv5[i]) *
                         absx +
                     dv6[i]) *
                        absx +
                    dv7[i]) *
                   delta;
          }
          b[0] += absx;
          k_mtimes(f_data, f_size, b, sp_data, &i);
          if (y_size == i) {
            for (b_i = 0; b_i < y_size; b_i++) {
              yinterp_data[b_i] = y_data[b_i] + h * sp_data[b_i];
            }
          } else {
            v_binary_expand_op(yinterp_data, y_data, &y_size, h, sp_data, &i);
          }
          st.site = &el_emlrtRSI;
          b_st.site = &kj_emlrtRSI;
          vtry = stopNOG(&b_st, yinterp_data, y_size);
          if ((d != muDoubleScalarSign(vtry)) && (0.0 * (vtry - vL) >= 0.0)) {
            absx = tR;
            tR = ttry;
            ttry = absx;
            exponent = y_size;
            if (y_size - 1 >= 0) {
              memcpy(&yR_data[0], &yinterp_data[0],
                     (uint32_T)y_size * sizeof(real_T));
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
    emlrtErrorWithMessageIdR2018a(sp, &t_emlrtRTEI, "MATLAB:odezero:LostEvent",
                                  "MATLAB:odezero:LostEvent", 0);
  }
  emxFree_int8_T(sp, &y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (odezero.c) */
