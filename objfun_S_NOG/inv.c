/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * inv.c
 *
 * Code generation for function 'inv'
 *
 */

/* Include files */
#include "inv.h"
#include "eml_int_forloop_overflow_check.h"
#include "flt2str.h"
#include "norm.h"
#include "objfun_S_NOG.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo wd_emlrtRSI = {
    21,    /* lineNo */
    "inv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo xd_emlrtRSI = {
    22,    /* lineNo */
    "inv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo yd_emlrtRSI = {
    173,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo ae_emlrtRSI = {
    174,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo be_emlrtRSI = {
    177,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo ce_emlrtRSI = {
    180,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo de_emlrtRSI = {
    183,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo ee_emlrtRSI = {
    190,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo fe_emlrtRSI = {
    27,       /* lineNo */
    "xgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI = {
    58,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI = {
    28,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo je_emlrtRSI =
    {
        28,      /* lineNo */
        "colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo ke_emlrtRSI =
    {
        82,      /* lineNo */
        "colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo le_emlrtRSI =
    {
        148,                            /* lineNo */
        "eml_integer_colon_dispatcher", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo me_emlrtRSI =
    {
        176,                        /* lineNo */
        "eml_signed_integer_colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo oe_emlrtRSI = {
    23,       /* lineNo */
    "ixamax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\ixamax.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = {
    24,       /* lineNo */
    "ixamax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\ixamax.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = {
    45,      /* lineNo */
    "xgeru", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru."
    "m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI =
    {
        45,     /* lineNo */
        "xger", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "blas\\xger.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI = {
    15,     /* lineNo */
    "xger", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xger.m" /* pathName */
};

static emlrtRSInfo te_emlrtRSI = {
    41,      /* lineNo */
    "xgerx", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgerx.m" /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = {
    14,              /* lineNo */
    "eml_ipiv2perm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_"
    "ipiv2perm.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = {
    67,      /* lineNo */
    "xtrsm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm."
    "m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    81,           /* lineNo */
    "xtrsm_blas", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm."
    "m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = {
    42,          /* lineNo */
    "checkcond", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo ye_emlrtRSI = {
    46,          /* lineNo */
    "checkcond", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo ef_emlrtRSI = {
    30,       /* lineNo */
    "xgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pathName */
};

static emlrtRSInfo ff_emlrtRSI = {
    36,        /* lineNo */
    "xzgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgetrf.m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI = {
    50,        /* lineNo */
    "xzgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgetrf.m" /* pathName */
};

static emlrtRSInfo hf_emlrtRSI = {
    58,        /* lineNo */
    "xzgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgetrf.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI = {
    54,      /* lineNo */
    "xgerx", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgerx.m" /* pathName */
};

static emlrtRSInfo jf_emlrtRSI = {
    59,      /* lineNo */
    "xtrsm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm."
    "m" /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = {
    51,      /* lineNo */
    "xtrsm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xtrsm.m" /* pathName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    14,    /* lineNo */
    15,    /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo p_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    19,    /* lineNo */
    5,     /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    21,    /* lineNo */
    5,     /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo ae_emlrtRTEI = {
    1,        /* lineNo */
    37,       /* colNo */
    "xgetrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pName */
};

static emlrtRTEInfo be_emlrtRTEI = {
    58,       /* lineNo */
    29,       /* colNo */
    "xgetrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = {
    89,       /* lineNo */
    27,       /* colNo */
    "xgetrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pName */
};

static emlrtRTEInfo de_emlrtRTEI =
    {
        172,     /* lineNo */
        20,      /* colNo */
        "colon", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo ee_emlrtRTEI = {
    174,   /* lineNo */
    1,     /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo fe_emlrtRTEI = {
    1,     /* lineNo */
    14,    /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo ge_emlrtRTEI = {
    58,       /* lineNo */
    5,        /* colNo */
    "xgetrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pName */
};

/* Function Definitions */
void b_inv(const emlrtStack *sp, const real_T x[16], real_T y[16])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T b_x[16];
  real_T n1x;
  real_T n1xinv;
  real_T s;
  real_T smax;
  int32_T b_i;
  int32_T i;
  int32_T j;
  int32_T jA;
  int32_T jBcol;
  int32_T jp1j;
  int32_T k;
  int8_T ipiv[4];
  int8_T p[4];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wd_emlrtRSI;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  memset(&y[0], 0, 16U * sizeof(real_T));
  b_st.site = &yd_emlrtRSI;
  memcpy(&b_x[0], &x[0], 16U * sizeof(real_T));
  c_st.site = &ef_emlrtRSI;
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  for (j = 0; j < 3; j++) {
    int32_T b_tmp;
    b_tmp = j * 5;
    jp1j = b_tmp + 2;
    jA = 4 - j;
    d_st.site = &ff_emlrtRSI;
    e_st.site = &oe_emlrtRSI;
    jBcol = 0;
    smax = muDoubleScalarAbs(b_x[b_tmp]);
    f_st.site = &pe_emlrtRSI;
    for (k = 2; k <= jA; k++) {
      s = muDoubleScalarAbs(b_x[(b_tmp + k) - 1]);
      if (s > smax) {
        jBcol = k - 1;
        smax = s;
      }
    }
    if (b_x[b_tmp + jBcol] != 0.0) {
      if (jBcol != 0) {
        jA = j + jBcol;
        ipiv[j] = (int8_T)(jA + 1);
        smax = b_x[j];
        b_x[j] = b_x[jA];
        b_x[jA] = smax;
        smax = b_x[j + 4];
        b_x[j + 4] = b_x[jA + 4];
        b_x[jA + 4] = smax;
        smax = b_x[j + 8];
        b_x[j + 8] = b_x[jA + 8];
        b_x[jA + 8] = smax;
        smax = b_x[j + 12];
        b_x[j + 12] = b_x[jA + 12];
        b_x[jA + 12] = smax;
      }
      i = (b_tmp - j) + 4;
      d_st.site = &gf_emlrtRSI;
      for (b_i = jp1j; b_i <= i; b_i++) {
        b_x[b_i - 1] /= b_x[b_tmp];
      }
    }
    i = 2 - j;
    d_st.site = &hf_emlrtRSI;
    e_st.site = &qe_emlrtRSI;
    f_st.site = &re_emlrtRSI;
    g_st.site = &se_emlrtRSI;
    jA = b_tmp + 6;
    h_st.site = &te_emlrtRSI;
    for (jp1j = 0; jp1j <= i; jp1j++) {
      smax = b_x[(b_tmp + (jp1j << 2)) + 4];
      if (smax != 0.0) {
        jBcol = (jA - j) + 2;
        h_st.site = &if_emlrtRSI;
        if ((jA <= jBcol) && (jBcol > 2147483646)) {
          i_st.site = &ne_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        for (b_i = jA; b_i <= jBcol; b_i++) {
          b_x[b_i - 1] += b_x[((b_tmp + b_i) - jA) + 1] * -smax;
        }
      }
      jA += 4;
    }
  }
  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 4;
  if (ipiv[0] > 1) {
    jA = p[ipiv[0] - 1];
    p[ipiv[0] - 1] = 1;
    p[0] = (int8_T)jA;
  }
  if (ipiv[1] > 2) {
    jA = p[ipiv[1] - 1];
    p[ipiv[1] - 1] = p[1];
    p[1] = (int8_T)jA;
  }
  if (ipiv[2] > 3) {
    jA = p[ipiv[2] - 1];
    p[ipiv[2] - 1] = p[2];
    p[2] = (int8_T)jA;
  }
  for (k = 0; k < 4; k++) {
    jp1j = (p[k] - 1) << 2;
    y[k + jp1j] = 1.0;
    for (j = k + 1; j < 5; j++) {
      i = (j + jp1j) - 1;
      if (y[i] != 0.0) {
        jBcol = j + 1;
        for (b_i = jBcol; b_i < 5; b_i++) {
          jA = (b_i + jp1j) - 1;
          y[jA] -= y[i] * b_x[(b_i + ((j - 1) << 2)) - 1];
        }
      }
    }
  }
  b_st.site = &ee_emlrtRSI;
  c_st.site = &jf_emlrtRSI;
  for (j = 0; j < 4; j++) {
    jBcol = j << 2;
    for (k = 3; k >= 0; k--) {
      jA = k << 2;
      i = k + jBcol;
      smax = y[i];
      if (smax != 0.0) {
        y[i] = smax / b_x[k + jA];
        d_st.site = &kf_emlrtRSI;
        for (b_i = 0; b_i < k; b_i++) {
          jp1j = b_i + jBcol;
          y[jp1j] -= y[i] * b_x[b_i + jA];
        }
      }
    }
  }
  st.site = &xd_emlrtRSI;
  n1x = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    jA = j << 2;
    s = ((muDoubleScalarAbs(x[jA]) + muDoubleScalarAbs(x[jA + 1])) +
         muDoubleScalarAbs(x[jA + 2])) +
        muDoubleScalarAbs(x[jA + 3]);
    if (muDoubleScalarIsNaN(s)) {
      n1x = rtNaN;
      exitg1 = true;
    } else {
      if (s > n1x) {
        n1x = s;
      }
      j++;
    }
  }
  n1xinv = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    jA = j << 2;
    s = ((muDoubleScalarAbs(y[jA]) + muDoubleScalarAbs(y[jA + 1])) +
         muDoubleScalarAbs(y[jA + 2])) +
        muDoubleScalarAbs(y[jA + 3]);
    if (muDoubleScalarIsNaN(s)) {
      n1xinv = rtNaN;
      exitg1 = true;
    } else {
      if (s > n1xinv) {
        n1xinv = s;
      }
      j++;
    }
  }
  smax = 1.0 / (n1x * n1xinv);
  if ((n1x == 0.0) || (n1xinv == 0.0) || (smax == 0.0)) {
    b_st.site = &xe_emlrtRSI;
    warning(&b_st);
  } else if (muDoubleScalarIsNaN(smax) || (smax < 2.2204460492503131E-16)) {
    char_T cv[14];
    b_st.site = &ye_emlrtRSI;
    flt2str(&b_st, smax, cv);
    b_st.site = &ye_emlrtRSI;
    b_warning(&b_st, cv);
  }
}

void inv(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  static const char_T fname[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 't', 'r', 'f',
                                   '_', 'w', 'o', 'r', 'k'};
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  ptrdiff_t *ipiv_t_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_int32_T *p;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_real_T *b_x;
  const mxArray *m;
  const real_T *x_data;
  real_T n1x;
  real_T *b_x_data;
  real_T *y_data;
  int32_T b_i;
  int32_T b_n;
  int32_T i;
  int32_T k;
  int32_T *ipiv_data;
  int32_T *p_data;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (x->size[0] != x->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &o_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    int32_T yk;
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &xd_emlrtRTEI);
    y_data = y->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y_data[i] = x_data[i];
    }
  } else {
    real_T n1xinv;
    real_T rc;
    int32_T n;
    int32_T yk;
    st.site = &wd_emlrtRSI;
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &yd_emlrtRTEI);
    y_data = y->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y_data[i] = 0.0;
    }
    b_st.site = &yd_emlrtRSI;
    emxInit_real_T(&b_st, &b_x, 2, &fe_emlrtRTEI);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&b_st, b_x, i, &ae_emlrtRTEI);
    b_x_data = b_x->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      b_x_data[i] = x_data[i];
    }
    c_st.site = &fe_emlrtRSI;
    d_st.site = &he_emlrtRSI;
    m = NULL;
    e_st.site = &ie_emlrtRSI;
    emxInit_ptrdiff_t(&d_st, &ipiv_t, &ge_emlrtRTEI);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = muIntScalarMin_sint32(n, n);
    emxEnsureCapacity_ptrdiff_t(&d_st, ipiv_t, i, &be_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    emlrtDestroyArray(&m);
    emlrt_checkEscapedGlobals();
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)x->size[0],
                                 (ptrdiff_t)x->size[0], &b_x_data[0],
                                 (ptrdiff_t)x->size[0], &ipiv_t_data[0]);
    emxInit_int32_T(&c_st, &ipiv, &fe_emlrtRTEI);
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&c_st, ipiv, i, &ce_emlrtRTEI);
    ipiv_data = ipiv->data;
    d_st.site = &ge_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&d_st, &p_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&d_st, &q_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &fname[0], 12, (int32_T)info_t);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (k = 0; k <= i; k++) {
      ipiv_data[k] = (int32_T)ipiv_t_data[k];
    }
    emxFree_ptrdiff_t(&c_st, &ipiv_t);
    b_st.site = &ae_emlrtRSI;
    c_st.site = &ue_emlrtRSI;
    d_st.site = &je_emlrtRSI;
    e_st.site = &ke_emlrtRSI;
    f_st.site = &le_emlrtRSI;
    b_n = x->size[0];
    emxInit_int32_T(&f_st, &p, &ee_emlrtRTEI);
    i = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = x->size[0];
    emxEnsureCapacity_int32_T(&f_st, p, i, &de_emlrtRTEI);
    p_data = p->data;
    p_data[0] = 1;
    yk = 1;
    g_st.site = &me_emlrtRSI;
    if (x->size[0] > 2147483646) {
      h_st.site = &ne_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }
    for (k = 2; k <= b_n; k++) {
      yk++;
      p_data[k - 1] = yk;
    }
    i = ipiv->size[1];
    for (k = 0; k < i; k++) {
      yk = ipiv_data[k];
      if (yk > k + 1) {
        b_n = p_data[yk - 1];
        p_data[yk - 1] = p_data[k];
        p_data[k] = b_n;
      }
    }
    emxFree_int32_T(&b_st, &ipiv);
    b_st.site = &be_emlrtRSI;
    for (k = 0; k < n; k++) {
      i = p_data[k];
      y_data[k + y->size[0] * (i - 1)] = 1.0;
      b_st.site = &ce_emlrtRSI;
      if ((k + 1 <= n) && (n > 2147483646)) {
        c_st.site = &ne_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (b_n = k + 1; b_n <= n; b_n++) {
        if (y_data[(b_n + y->size[0] * (i - 1)) - 1] != 0.0) {
          yk = b_n + 1;
          b_st.site = &de_emlrtRSI;
          for (b_i = yk; b_i <= n; b_i++) {
            y_data[(b_i + y->size[0] * (i - 1)) - 1] -=
                y_data[(b_n + y->size[0] * (i - 1)) - 1] *
                b_x_data[(b_i + b_x->size[0] * (b_n - 1)) - 1];
          }
        }
      }
    }
    emxFree_int32_T(&st, &p);
    b_st.site = &ee_emlrtRSI;
    c_st.site = &ve_emlrtRSI;
    d_st.site = &we_emlrtRSI;
    n1x = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)x->size[0];
    n_t = (ptrdiff_t)x->size[0];
    lda_t = (ptrdiff_t)x->size[0];
    ldb_t = (ptrdiff_t)x->size[0];
    emlrt_checkEscapedGlobals();
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &n1x, &b_x_data[0],
          &lda_t, &y_data[0], &ldb_t);
    emxFree_real_T(&d_st, &b_x);
    st.site = &xd_emlrtRSI;
    n1x = b_norm(x);
    n1xinv = b_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      b_st.site = &xe_emlrtRSI;
      warning(&b_st);
    } else if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
      char_T cv[14];
      b_st.site = &ye_emlrtRSI;
      flt2str(&b_st, rc, cv);
      b_st.site = &ye_emlrtRSI;
      b_warning(&b_st, cv);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (inv.c) */
