/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hamiltonian.c
 *
 * Code generation for function 'Hamiltonian'
 *
 */

/* Include files */
#include "Hamiltonian.h"
#include "H0_fun.h"
#include "S_fun.h"
#include "objfunSTM_S_time_data.h"
#include "objfunSTM_S_time_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo gj_emlrtRSI = {
    18,                                                      /* lineNo */
    "Hamiltonian",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Hamiltonian.m" /* pathName */
};

static emlrtRSInfo hj_emlrtRSI = {
    19,                                                      /* lineNo */
    "Hamiltonian",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Hamiltonian.m" /* pathName */
};

static emlrtRSInfo ij_emlrtRSI = {
    23,                                                      /* lineNo */
    "Hamiltonian",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Hamiltonian.m" /* pathName */
};

static emlrtRSInfo jj_emlrtRSI = {
    25,                                                      /* lineNo */
    "Hamiltonian",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Hamiltonian.m" /* pathName */
};

static emlrtRSInfo kj_emlrtRSI = {
    26,                                                      /* lineNo */
    "Hamiltonian",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Hamiltonian.m" /* pathName */
};

static emlrtRSInfo lj_emlrtRSI = {
    32,                                                      /* lineNo */
    "Hamiltonian",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Hamiltonian.m" /* pathName */
};

static emlrtRSInfo mj_emlrtRSI = {
    34,                                                      /* lineNo */
    "Hamiltonian",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Hamiltonian.m" /* pathName */
};

static emlrtRSInfo nj_emlrtRSI = {
    35,                                                      /* lineNo */
    "Hamiltonian",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Hamiltonian.m" /* pathName */
};

static emlrtRSInfo tj_emlrtRSI = {
    12,                                                 /* lineNo */
    "uS_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_fun.m" /* pathName */
};

static emlrtBCInfo uf_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    11,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in1",                                               /* aName */
    "uS_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    10,                                                  /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "uS_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    9,                                                   /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "uS_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_fun.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    8,                                                   /* lineNo */
    10,                                                  /* colNo */
    "in2",                                               /* aName */
    "uS_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\uS_fun.m", /* pName */
    0                                                    /* checkKind */
};

/* Function Definitions */
real_T Hamiltonian(const emlrtStack *sp, const emxArray_real_T *x,
                   const emxArray_real_T *p, real_T S, real_T physical_Tmax,
                   real_T physical_c, real_T physical_shoot,
                   real_T physical_EPS)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *p_data;
  const real_T *x_data;
  real_T H;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p_data = p->data;
  x_data = x->data;
  /*  Definition of the Hamiltonian function H */
  /*  Definition of the Hamiltonian function H with evaluation of the */
  /*  matlabFunction H0_fun and S_fun at the numerical values x and p (if EPS >
   * 0, S_fun is replaced by uS_fun) */
  /*  Input: */
  /*  x: state vector [NSTATEx1] */
  /*  p: costate vector [NSTATEx1] */
  /*  S: Switching function */
  /*  physical: structure of physical variables and functions */
  if (physical_EPS > 0.0) {
    if ((S < physical_EPS * physical_Tmax / physical_c) &&
        (S > -physical_EPS * physical_Tmax / physical_c)) {
      real_T H0;
      real_T b_x;
      st.site = &gj_emlrtRSI;
      H0 = H0_fun(&st, x, p);
      st.site = &hj_emlrtRSI;
      /* uS_fun */
      /*     uSsym = uS_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
      /*     This function was generated by the Symbolic Math Toolbox
       * version 9.2. */
      /*     01-Sep-2024 17:11:52 */
      if (p->size[0] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, p->size[0], &xf_emlrtBCI, &st);
      }
      if (p->size[0] < 4) {
        emlrtDynamicBoundsCheckR2012b(4, 1, p->size[0], &wf_emlrtBCI, &st);
      }
      if (p->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, p->size[0], &vf_emlrtBCI, &st);
      }
      if (x->size[0] < 5) {
        emlrtDynamicBoundsCheckR2012b(5, 1, x->size[0], &uf_emlrtBCI, &st);
      }
      b_st.site = &tj_emlrtRSI;
      b_x = p_data[2] * p_data[2] + p_data[3] * p_data[3];
      if (b_x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &h_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      b_x = muDoubleScalarSqrt(b_x);
      H = H0 + -physical_Tmax * (p_data[4] / physical_c - b_x / x_data[4]);
    } else if (muDoubleScalarSign(S) != physical_shoot) {
      st.site = &ij_emlrtRSI;
      H = H0_fun(&st, x, p);
    } else {
      real_T H0;
      st.site = &jj_emlrtRSI;
      H0 = H0_fun(&st, x, p);
      st.site = &kj_emlrtRSI;
      S = S_fun(&st, x, p, physical_Tmax, physical_c);
      H = H0 + S;
    }
  } else if (muDoubleScalarSign(S) != physical_shoot) {
    st.site = &lj_emlrtRSI;
    H = H0_fun(&st, x, p);
  } else {
    real_T H0;
    st.site = &mj_emlrtRSI;
    H0 = H0_fun(&st, x, p);
    st.site = &nj_emlrtRSI;
    S = S_fun(&st, x, p, physical_Tmax, physical_c);
    H = H0 + S;
  }
  return H;
}

/* End of code generation (Hamiltonian.c) */
