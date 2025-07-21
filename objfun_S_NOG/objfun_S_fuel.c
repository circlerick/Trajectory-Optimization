/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_fuel.c
 *
 * Code generation for function 'objfun_S_fuel'
 *
 */

/* Include files */
#include "objfun_S_fuel.h"
#include "HamiltonianFirstDerivatives.h"
#include "S_fun.h"
#include "S_p_fun.h"
#include "S_x_fun.h"
#include "Switching_Function.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_mexutil.h"
#include "objfun_S_NOG_types.h"
#include "ode89.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo an_emlrtRSI = {
    94,                                                        /* lineNo */
    "objfun_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pathName */
};

static emlrtRSInfo bn_emlrtRSI = {
    73,                                                        /* lineNo */
    "objfun_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pathName */
};

static emlrtRSInfo cn_emlrtRSI = {
    59,                                                        /* lineNo */
    "objfun_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pathName */
};

static emlrtRSInfo dn_emlrtRSI = {
    56,                                                        /* lineNo */
    "objfun_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pathName */
};

static emlrtRSInfo en_emlrtRSI = {
    35,                                                        /* lineNo */
    "objfun_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pathName */
};

static emlrtRSInfo fn_emlrtRSI = {
    59,                                                        /* lineNo */
    "@(t,s)derivatives_S(s,physical,SIGN)",                    /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pathName */
};

static emlrtRSInfo gn_emlrtRSI = {
    10,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo hn_emlrtRSI = {
    11,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo in_emlrtRSI = {
    26,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo jn_emlrtRSI = {
    29,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo ln_emlrtRSI = {
    20,    /* lineNo */
    "sum", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m" /* pathName
                                                                        */
};

static emlrtRSInfo mn_emlrtRSI = {
    99,        /* lineNo */
    "sumprod", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumpro"
    "d.m" /* pathName */
};

static emlrtRSInfo nn_emlrtRSI = {
    74,                      /* lineNo */
    "combineVectorElements", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" /* pathName */
};

static emlrtRSInfo on_emlrtRSI = {
    107,                /* lineNo */
    "blockedSummation", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" /* pathName */
};

static emlrtRSInfo pn_emlrtRSI = {
    22,                    /* lineNo */
    "sumMatrixIncludeNaN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo qn_emlrtRSI = {
    42,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtMCInfo e_emlrtMCI = {
    27,                                                        /* lineNo */
    5,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtECInfo dd_emlrtECI = {
    -1,                                                        /* nDims */
    65,                                                        /* lineNo */
    9,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtBCInfo nk_emlrtBCI = {
    1,                                                          /* iFirst */
    1000000,                                                    /* iLast */
    65,                                                         /* lineNo */
    24,                                                         /* colNo */
    "tempt",                                                    /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo ok_emlrtBCI = {
    1,                                                          /* iFirst */
    1000000,                                                    /* iLast */
    65,                                                         /* lineNo */
    15,                                                         /* colNo */
    "tempt",                                                    /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo ed_emlrtECI = {
    -1,                                                        /* nDims */
    64,                                                        /* lineNo */
    9,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtBCInfo pk_emlrtBCI = {
    1,                                                          /* iFirst */
    1000000,                                                    /* iLast */
    64,                                                         /* lineNo */
    24,                                                         /* colNo */
    "temps",                                                    /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo qk_emlrtBCI = {
    1,                                                          /* iFirst */
    1000000,                                                    /* iLast */
    64,                                                         /* lineNo */
    15,                                                         /* colNo */
    "temps",                                                    /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo fd_emlrtECI = {
    -1,                                                        /* nDims */
    49,                                                        /* lineNo */
    5,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtECInfo gd_emlrtECI = {
    1,                                                         /* nDims */
    87,                                                        /* lineNo */
    18,                                                        /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtECInfo hd_emlrtECI = {
    1,                                                         /* nDims */
    86,                                                        /* lineNo */
    20,                                                        /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtBCInfo rk_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    84,                                                         /* lineNo */
    22,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo mf_emlrtDCI = {
    84,                                                         /* lineNo */
    22,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo sk_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    84,                                                         /* lineNo */
    13,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo nf_emlrtDCI = {
    84,                                                         /* lineNo */
    13,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo tk_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    84,                                                         /* lineNo */
    9,                                                          /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo uk_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    83,                                                         /* lineNo */
    15,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo of_emlrtDCI = {
    83,                                                         /* lineNo */
    15,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo vk_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    83,                                                         /* lineNo */
    9,                                                          /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo wk_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    73,                                                         /* lineNo */
    64,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo pf_emlrtDCI = {
    73,                                                         /* lineNo */
    64,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo xk_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    73,                                                         /* lineNo */
    55,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo qf_emlrtDCI = {
    73,                                                         /* lineNo */
    55,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo yk_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    73,                                                         /* lineNo */
    44,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo rf_emlrtDCI = {
    73,                                                         /* lineNo */
    44,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtECInfo id_emlrtECI = {
    -1,                                                        /* nDims */
    71,                                                        /* lineNo */
    9,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtBCInfo al_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    71,                                                         /* lineNo */
    16,                                                         /* colNo */
    "temp",                                                     /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo bl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    71,                                                         /* lineNo */
    26,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo jd_emlrtECI = {
    1,                                                         /* nDims */
    56,                                                        /* lineNo */
    74,                                                        /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtBCInfo cl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    56,                                                         /* lineNo */
    86,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo sf_emlrtDCI = {
    56,                                                         /* lineNo */
    86,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtECInfo kd_emlrtECI = {
    1,                                                         /* nDims */
    56,                                                        /* lineNo */
    28,                                                        /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtBCInfo dl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    56,                                                         /* lineNo */
    40,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo tf_emlrtDCI = {
    56,                                                         /* lineNo */
    40,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtDCInfo uf_emlrtDCI = {
    48,                                                         /* lineNo */
    23,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtDCInfo vf_emlrtDCI = {
    48,                                                         /* lineNo */
    23,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    4                                                           /* checkKind */
};

static emlrtDCInfo wf_emlrtDCI = {
    48,                                                         /* lineNo */
    5,                                                          /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo el_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    89,                                                         /* lineNo */
    7,                                                          /* colNo */
    "tt",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo fl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    60,                                                         /* lineNo */
    15,                                                         /* colNo */
    "tt",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo gl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    69,                                                         /* lineNo */
    11,                                                         /* colNo */
    "tt",                                                       /* aName */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo hl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    10,                                                         /* lineNo */
    11,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo xf_emlrtDCI = {
    10,                                                         /* lineNo */
    13,                                                         /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo il_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    10,                                                         /* lineNo */
    13,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo yf_emlrtDCI = {
    11,                                                         /* lineNo */
    11,                                                         /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo jl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    11,                                                         /* lineNo */
    11,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo ag_emlrtDCI = {
    11,                                                         /* lineNo */
    20,                                                         /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo kl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    11,                                                         /* lineNo */
    20,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo ll_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    27,                                                         /* lineNo */
    22,                                                         /* colNo */
    "H_p",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo ml_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    27,                                                         /* lineNo */
    6,                                                          /* colNo */
    "xd",                                                       /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo ld_emlrtECI = {
    -1,                                                        /* nDims */
    27,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo nl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    28,                                                         /* lineNo */
    6,                                                          /* colNo */
    "pd",                                                       /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo md_emlrtECI = {
    -1,                                                        /* nDims */
    28,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo ol_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    30,                                                         /* lineNo */
    7,                                                          /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo nd_emlrtECI = {
    -1,                                                        /* nDims */
    30,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo pl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    31,                                                         /* lineNo */
    5,                                                          /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo ql_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    31,                                                         /* lineNo */
    14,                                                         /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo od_emlrtECI = {
    -1,                                                        /* nDims */
    31,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtDCInfo bg_emlrtDCI = {
    25,                                                         /* lineNo */
    1,                                                          /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtDCInfo cg_emlrtDCI = {
    25,                                                         /* lineNo */
    1,                                                          /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    4                                                           /* checkKind */
};

static emlrtDCInfo dg_emlrtDCI = {
    59,                                                         /* lineNo */
    21,                                                         /* colNo */
    "objfun_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo rl_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    32,                                                         /* lineNo */
    5,                                                          /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtRTEInfo gg_emlrtRTEI = {
    18,                                                        /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = {
    19,                                                        /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = {
    22,                                                        /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = {
    23,                                                        /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = {
    48,                                                        /* lineNo */
    5,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = {
    97,                                                        /* lineNo */
    5,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = {
    98,                                                        /* lineNo */
    5,                                                         /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = {
    10,                                                        /* lineNo */
    4,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo og_emlrtRTEI = {
    11,                                                        /* lineNo */
    4,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = {
    25,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = {
    25,                                                        /* lineNo */
    20,                                                        /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = {
    59,                                                        /* lineNo */
    21,                                                        /* colNo */
    "objfun_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pName */
};

static emlrtRSInfo un_emlrtRSI = {
    27,                                                        /* lineNo */
    "objfun_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m" /* pathName */
};

/* Function Declarations */
static void ab_binary_expand_op(real_T in1_data[], int32_T *in1_size,
                                const real_T in2[20], const real_T in3_data[],
                                const int32_T *in3_size, const real_T in4[5],
                                real_T in5);

static void cb_binary_expand_op(real_T in1[2], const real_T in2[2],
                                const real_T in3_data[], int32_T in4);

/* Function Definitions */
static void ab_binary_expand_op(real_T in1_data[], int32_T *in1_size,
                                const real_T in2[20], const real_T in3_data[],
                                const int32_T *in3_size, const real_T in4[5],
                                real_T in5)
{
  real_T in3[5];
  int32_T i;
  int32_T stride_0_0;
  stride_0_0 = (*in3_size != 1);
  for (i = 0; i < 5; i++) {
    in3[i] = in3_data[i * stride_0_0] - in4[i];
  }
  *in1_size = 5;
  for (i = 0; i < 4; i++) {
    real_T d;
    d = 0.0;
    for (stride_0_0 = 0; stride_0_0 < 5; stride_0_0++) {
      d += in2[stride_0_0 + 5 * i] * in3[stride_0_0];
    }
    in1_data[i] = d;
  }
  in1_data[4] = in5;
}

static void cb_binary_expand_op(real_T in1[2], const real_T in2[2],
                                const real_T in3_data[], int32_T in4)
{
  in1[0] = in2[0] - in3_data[0];
  in1[1] = in2[1] - in3_data[in4 != 1];
}

void objfun_S_fuel(objfun_S_NOGStackData *SD, const emlrtStack *sp,
                   const real_T lam0_data[], int32_T lam0_size,
                   const real_T X0_data[], int32_T X0_size,
                   real_T physical_Tmax, real_T physical_RE, real_T physical_RM,
                   real_T physical_c, const real_T physical_Earth[2],
                   const real_T physical_Moon[2], real_T physical_NSTATE,
                   real_T physical_shoot, const real_T physical_g0_x[5],
                   real_T physical_EPS, real_T boundary_T0,
                   real_T boundary_Tfin, const real_T boundary_Xf[5],
                   const real_T boundary_Sigma[5],
                   const real_T boundary_Pigreco[20], real_T *obj,
                   emxArray_real_T *states, emxArray_real_T *times)
{
  static const int32_T iv[2] = {1, 55};
  static const char_T u[55] = {
      'E', 'r', 'r', 'o', 'r', ':', ' ', 'E', 'P', 'S', ' ', 'm', 'u', 's',
      't', ' ', 'b', 'e', ' ', 's', 'e', 't', ' ', 't', 'o', ' ', '0', ' ',
      'i', 'n', ' ', 't', 'h', 'e', ' ', 'm', 'i', 'n', 'i', 'm', 'u', 'm',
      ' ', 'f', 'u', 'e', 'l', ' ', 'p', 'r', 'o', 'b', 'l', 'e', 'm'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_real_T b_X0_data;
  emxArray_real_T b_lam0_data;
  emxArray_real_T b_pf_data;
  emxArray_real_T c_temp_data;
  emxArray_real_T *temps;
  emxArray_real_T *tt;
  emxArray_real_T *xx;
  const mxArray *m;
  const mxArray *y;
  real_T b_temp_data[243];
  real_T pf_data[243];
  real_T temp_data[243];
  real_T val_data[5];
  real_T x[2];
  real_T S;
  real_T SIGN;
  real_T *states_data;
  real_T *temps_data;
  real_T *tt_data;
  int32_T iv1[2];
  int32_T iv2[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i3;
  int32_T loop_ub;
  int32_T pf_size;
  int32_T temp_size;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  compute the objective function for a minimum fuel */
  /*  problem */
  /*  Inputs: */
  /*  lam0: initial costates vector [NSTATEx1] */
  /*  X0: initial states vector [NSTATEx1] */
  /*  physical: structure for physical variables */
  /*  boundary: structure for control problem inputs */
  /*  Output: */
  /*  obj: objective function residual */
  /*  states: matrix of states and costates during the propagation */
  /*  times: vector of times during the propagation  */
  /*  initialize outputs and constants */
  *obj = 1000.0;
  i = states->size[0] * states->size[1];
  states->size[0] = 1;
  states->size[1] = 1;
  emxEnsureCapacity_real_T(sp, states, i, &gg_emlrtRTEI);
  states_data = states->data;
  states_data[0] = 0.0;
  i = times->size[0];
  times->size[0] = 1;
  emxEnsureCapacity_real_T(sp, times, i, &hg_emlrtRTEI);
  states_data = times->data;
  states_data[0] = 0.0;
  emxInit_real_T(sp, &xx, 2, &ig_emlrtRTEI);
  i = xx->size[0] * xx->size[1];
  xx->size[0] = 1;
  xx->size[1] = 1;
  emxEnsureCapacity_real_T(sp, xx, i, &ig_emlrtRTEI);
  states_data = xx->data;
  states_data[0] = 0.0;
  emxInit_real_T(sp, &tt, 1, &jg_emlrtRTEI);
  i = tt->size[0];
  tt->size[0] = 1;
  emxEnsureCapacity_real_T(sp, tt, i, &jg_emlrtRTEI);
  tt_data = tt->data;
  tt_data[0] = 0.0;
  if (physical_EPS != 0.0) {
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 55, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &un_emlrtRSI;
    disp(&st, y, &e_emlrtMCI);
  } else {
    real_T absxk_tmp_tmp;
    real_T index1;
    real_T index2;
    real_T told;
    int32_T loop_ub_tmp;
    boolean_T exitg1;
    told = boundary_T0;
    st.site = &en_emlrtRSI;
    /*  Computes switching Function and its derivatives */
    /*  Definition of the Switching function and its derivatives with evaluation
     * of the */
    /*  matlabFunction S_fun, S_x_fun, S_p_fun, S_xx_fun, S_pp_fun, S_xp_fun */
    /*  Input: */
    /*  x: state vector [NSTATEx1] */
    /*  p: costate vector [NSTATEx1] */
    /*  physical: structure of physical variables and functions */
    /*  Output: */
    /*  S: switching function */
    /*  Sd: switching function first derivatives */
    /*  Sdd: switching function second derivatives */
    b_X0_data.data = (real_T *)&X0_data[0];
    b_X0_data.size = &X0_size;
    b_X0_data.allocatedSize = -1;
    b_X0_data.numDimensions = 1;
    b_X0_data.canFreeData = false;
    b_lam0_data.data = (real_T *)&lam0_data[0];
    b_lam0_data.size = &lam0_size;
    b_lam0_data.allocatedSize = -1;
    b_lam0_data.numDimensions = 1;
    b_lam0_data.canFreeData = false;
    b_st.site = &tb_emlrtRSI;
    S = S_fun(&b_st, &b_X0_data, &b_lam0_data, physical_Tmax, physical_c);
    if (muDoubleScalarSign(S) != physical_shoot) {
      i = -1;
    } else {
      i = 1;
    }
    SIGN = physical_shoot * (real_T)i;
    loop_ub_tmp = (X0_size + lam0_size) + 1;
    loop_ub = X0_size;
    for (i = 0; i < loop_ub; i++) {
      temp_data[i] = X0_data[i];
    }
    loop_ub = lam0_size;
    for (i = 0; i < loop_ub; i++) {
      temp_data[i + X0_size] = lam0_data[i];
    }
    temp_data[X0_size + lam0_size] = S;
    /*  initial state, costate and switching function */
    memset(&SD->f0.tempt[0], 0, 1000000U * sizeof(real_T));
    emxInit_real_T(sp, &temps, 2, &kg_emlrtRTEI);
    i = temps->size[0] * temps->size[1];
    temps->size[0] = 1000000;
    emxEnsureCapacity_real_T(sp, temps, i, &kg_emlrtRTEI);
    absxk_tmp_tmp = 2.0 * physical_NSTATE + 1.0;
    if (!(absxk_tmp_tmp >= 0.0)) {
      emlrtNonNegativeCheckR2012b(absxk_tmp_tmp, &vf_emlrtDCI,
                                  (emlrtConstCTX)sp);
    }
    S = (int32_T)muDoubleScalarFloor(absxk_tmp_tmp);
    if (absxk_tmp_tmp != S) {
      emlrtIntegerCheckR2012b(absxk_tmp_tmp, &uf_emlrtDCI, (emlrtConstCTX)sp);
    }
    i = temps->size[0] * temps->size[1];
    temps->size[1] = (int32_T)absxk_tmp_tmp;
    emxEnsureCapacity_real_T(sp, temps, i, &kg_emlrtRTEI);
    temps_data = temps->data;
    if (absxk_tmp_tmp != S) {
      emlrtIntegerCheckR2012b(absxk_tmp_tmp, &wf_emlrtDCI, (emlrtConstCTX)sp);
    }
    loop_ub = 1000000 * (int32_T)absxk_tmp_tmp;
    for (i = 0; i < loop_ub; i++) {
      temps_data[i] = 0.0;
    }
    iv1[0] = 1;
    iv1[1] = (int32_T)absxk_tmp_tmp;
    iv2[0] = 1;
    iv2[1] = loop_ub_tmp;
    emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &iv2[0], 2, &fd_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub_tmp; i++) {
      temps_data[1000000 * i] = temp_data[i];
    }
    SD->f0.tempt[0] = boundary_T0;
    index1 = 1.0;
    index2 = 0.0;
    /*  integration */
    exitg1 = false;
    while ((!exitg1) && (told != boundary_Tfin)) {
      real_T b_y;
      real_T scale;
      real_T t;
      S = muDoubleScalarRound(physical_NSTATE / 2.0);
      if (S - 1.0 < 1.0) {
        i = 0;
      } else {
        if (S - 1.0 != (int32_T)(S - 1.0)) {
          emlrtIntegerCheckR2012b(S - 1.0, &tf_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)(S - 1.0) < 1) || ((int32_T)(S - 1.0) > loop_ub_tmp)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(S - 1.0), 1, loop_ub_tmp,
                                        &dl_emlrtBCI, (emlrtConstCTX)sp);
        }
        i = (int32_T)(S - 1.0);
      }
      iv1[0] = 1;
      iv1[1] = i;
      st.site = &dn_emlrtRSI;
      indexShapeCheck(&st, loop_ub_tmp, iv1);
      if ((i != 2) && (i != 1)) {
        emlrtDimSizeImpxCheckR2021b(2, i, &kd_emlrtECI, (emlrtConstCTX)sp);
      }
      if (i == 2) {
        x[0] = physical_Earth[0] - temp_data[0];
        x[1] = physical_Earth[1] - temp_data[1];
      } else {
        cb_binary_expand_op(x, physical_Earth, temp_data, 1);
      }
      scale = 3.3121686421112381E-170;
      absxk_tmp_tmp = muDoubleScalarAbs(x[0]);
      if (absxk_tmp_tmp > 3.3121686421112381E-170) {
        b_y = 1.0;
        scale = absxk_tmp_tmp;
      } else {
        t = absxk_tmp_tmp / 3.3121686421112381E-170;
        b_y = t * t;
      }
      absxk_tmp_tmp = muDoubleScalarAbs(x[1]);
      if (absxk_tmp_tmp > scale) {
        t = scale / absxk_tmp_tmp;
        b_y = b_y * t * t + 1.0;
        scale = absxk_tmp_tmp;
      } else {
        t = absxk_tmp_tmp / scale;
        b_y += t * t;
      }
      b_y = scale * muDoubleScalarSqrt(b_y);
      if (b_y >= physical_RE) {
        if (S - 1.0 < 1.0) {
          i = 0;
        } else {
          if (S - 1.0 != (int32_T)(S - 1.0)) {
            emlrtIntegerCheckR2012b(S - 1.0, &sf_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)(S - 1.0) < 1) || ((int32_T)(S - 1.0) > loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(S - 1.0), 1, loop_ub_tmp,
                                          &cl_emlrtBCI, (emlrtConstCTX)sp);
          }
          i = (int32_T)(S - 1.0);
        }
        iv1[0] = 1;
        iv1[1] = i;
        st.site = &dn_emlrtRSI;
        indexShapeCheck(&st, loop_ub_tmp, iv1);
        if ((i != 2) && (i != 1)) {
          emlrtDimSizeImpxCheckR2021b(2, i, &jd_emlrtECI, (emlrtConstCTX)sp);
        }
        if (i == 2) {
          x[0] = physical_Moon[0] - temp_data[0];
          x[1] = physical_Moon[1] - temp_data[1];
        } else {
          cb_binary_expand_op(x, physical_Moon, temp_data, 1);
        }
        scale = 3.3121686421112381E-170;
        absxk_tmp_tmp = muDoubleScalarAbs(x[0]);
        if (absxk_tmp_tmp > 3.3121686421112381E-170) {
          b_y = 1.0;
          scale = absxk_tmp_tmp;
        } else {
          t = absxk_tmp_tmp / 3.3121686421112381E-170;
          b_y = t * t;
        }
        absxk_tmp_tmp = muDoubleScalarAbs(x[1]);
        if (absxk_tmp_tmp > scale) {
          t = scale / absxk_tmp_tmp;
          b_y = b_y * t * t + 1.0;
          scale = absxk_tmp_tmp;
        } else {
          t = absxk_tmp_tmp / scale;
          b_y += t * t;
        }
        b_y = scale * muDoubleScalarSqrt(b_y);
        if (b_y >= physical_RM) {
          real_T b_told[2];
          int32_T i2;
          /*  integration with switching time detection */
          b_told[0] = told;
          b_told[1] = boundary_Tfin;
          st.site = &cn_emlrtRSI;
          c_ode89(&st, physical_Tmax, physical_c, physical_NSTATE,
                  physical_shoot, physical_EPS, SIGN, b_told, temp_data,
                  loop_ub_tmp, tt, xx);
          states_data = xx->data;
          tt_data = tt->data;
          if (tt->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0],
                                          &fl_emlrtBCI, (emlrtConstCTX)sp);
          }
          told = tt_data[tt->size[0] - 1];
          index2 = (index1 + (real_T)tt->size[0]) - 1.0;
          if (xx->size[0] < 2) {
            i = 0;
            i1 = 0;
          } else {
            i = 1;
            i1 = xx->size[0];
          }
          if (index1 + 1.0 > index2) {
            i2 = 0;
            i3 = 0;
          } else {
            if (((int32_T)(index1 + 1.0) < 1) ||
                ((int32_T)(index1 + 1.0) > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
                                            &qk_emlrtBCI, (emlrtConstCTX)sp);
            }
            i2 = (int32_T)(index1 + 1.0) - 1;
            if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
                                            &pk_emlrtBCI, (emlrtConstCTX)sp);
            }
            i3 = (int32_T)index2;
          }
          iv1[0] = i3 - i2;
          iv1[1] = temps->size[1];
          loop_ub = i1 - i;
          iv2[0] = loop_ub;
          iv2[1] = xx->size[1];
          emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &iv2[0], 2, &ed_emlrtECI,
                                        (emlrtCTX)sp);
          b_loop_ub = xx->size[1];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            for (i3 = 0; i3 < loop_ub; i3++) {
              temps_data[(i2 + i3) + 1000000 * i1] =
                  states_data[(i + i3) + xx->size[0] * i1];
            }
          }
          if (tt->size[0] < 2) {
            i = 0;
            i1 = 0;
          } else {
            i = 1;
            i1 = tt->size[0];
          }
          if (index1 + 1.0 > index2) {
            i2 = 0;
            i3 = 0;
          } else {
            if (((int32_T)(index1 + 1.0) < 1) ||
                ((int32_T)(index1 + 1.0) > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
                                            &ok_emlrtBCI, (emlrtConstCTX)sp);
            }
            i2 = (int32_T)(index1 + 1.0) - 1;
            if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
                                            &nk_emlrtBCI, (emlrtConstCTX)sp);
            }
            i3 = (int32_T)index2;
          }
          i3 -= i2;
          loop_ub = i1 - i;
          if (i3 != loop_ub) {
            emlrtSubAssignSizeCheck1dR2017a(i3, loop_ub, &dd_emlrtECI,
                                            (emlrtConstCTX)sp);
          }
          for (i1 = 0; i1 < loop_ub; i1++) {
            SD->f0.tempt[i2 + i1] = tt_data[i + i1];
          }
          index1 = index2;
          if (tt->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0],
                                          &gl_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (tt_data[tt->size[0] - 1] != boundary_Tfin) {
            x[0] = loop_ub_tmp;
            x[1] = 1.0;
            if (loop_ub_tmp - 1 >= 0) {
              memset(&temp_data[0], 0, (uint32_T)loop_ub_tmp * sizeof(real_T));
            }
            if (x[0] < 1.0) {
              emlrtDynamicBoundsCheckR2012b((int32_T)x[0], 1, (int32_T)x[0],
                                            &al_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &bl_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (loop_ub_tmp != xx->size[1]) {
              emlrtSubAssignSizeCheck1dR2017a((int32_T)x[0], xx->size[1],
                                              &id_emlrtECI, (emlrtConstCTX)sp);
            }
            for (i = 0; i < loop_ub_tmp; i++) {
              temp_data[i] = states_data[(xx->size[0] + xx->size[0] * i) - 1];
            }
            if (physical_NSTATE < 1.0) {
              loop_ub = 0;
            } else {
              if (physical_NSTATE !=
                  (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
                emlrtIntegerCheckR2012b(physical_NSTATE, &rf_emlrtDCI,
                                        (emlrtConstCTX)sp);
              }
              if (((int32_T)physical_NSTATE < 1) ||
                  ((int32_T)physical_NSTATE > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1,
                                              loop_ub_tmp, &yk_emlrtBCI,
                                              (emlrtConstCTX)sp);
              }
              loop_ub = (int32_T)physical_NSTATE;
            }
            iv1[0] = 1;
            iv1[1] = loop_ub;
            st.site = &bn_emlrtRSI;
            indexShapeCheck(&st, loop_ub_tmp, iv1);
            absxk_tmp_tmp = 2.0 * physical_NSTATE;
            if (physical_NSTATE + 1.0 > absxk_tmp_tmp) {
              i = 0;
              i1 = 0;
            } else {
              if (physical_NSTATE + 1.0 !=
                  (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
                emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &qf_emlrtDCI,
                                        (emlrtConstCTX)sp);
              }
              if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
                  ((int32_T)(physical_NSTATE + 1.0) > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0),
                                              1, loop_ub_tmp, &xk_emlrtBCI,
                                              (emlrtConstCTX)sp);
              }
              i = (int32_T)(physical_NSTATE + 1.0) - 1;
              if (absxk_tmp_tmp !=
                  (int32_T)muDoubleScalarFloor(absxk_tmp_tmp)) {
                emlrtIntegerCheckR2012b(absxk_tmp_tmp, &pf_emlrtDCI,
                                        (emlrtConstCTX)sp);
              }
              if (((int32_T)absxk_tmp_tmp < 1) ||
                  ((int32_T)absxk_tmp_tmp > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)absxk_tmp_tmp, 1,
                                              loop_ub_tmp, &wk_emlrtBCI,
                                              (emlrtConstCTX)sp);
              }
              i1 = (int32_T)absxk_tmp_tmp;
            }
            iv1[0] = 1;
            b_loop_ub = i1 - i;
            iv1[1] = b_loop_ub;
            st.site = &bn_emlrtRSI;
            indexShapeCheck(&st, loop_ub_tmp, iv1);
            pf_size = loop_ub;
            if (loop_ub - 1 >= 0) {
              memcpy(&pf_data[0], &temp_data[0],
                     (uint32_T)loop_ub * sizeof(real_T));
            }
            temp_size = b_loop_ub;
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              b_temp_data[i1] = temp_data[i + i1];
            }
            b_pf_data.data = &pf_data[0];
            b_pf_data.size = &pf_size;
            b_pf_data.allocatedSize = 243;
            b_pf_data.numDimensions = 1;
            b_pf_data.canFreeData = false;
            c_temp_data.data = &b_temp_data[0];
            c_temp_data.size = &temp_size;
            c_temp_data.allocatedSize = 243;
            c_temp_data.numDimensions = 1;
            c_temp_data.canFreeData = false;
            st.site = &bn_emlrtRSI;
            b_Switching_Function(&st, &b_pf_data, &c_temp_data, physical_Tmax,
                                 physical_c, physical_NSTATE, physical_shoot,
                                 physical_EPS, &S, &SIGN);
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        } else {
          exitg1 = true;
        }
      } else {
        exitg1 = true;
      }
    }
    /*  final values */
    if (physical_NSTATE < 1.0) {
      loop_ub = 0;
    } else {
      if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
        emlrtIntegerCheckR2012b(physical_NSTATE, &of_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)physical_NSTATE < 1) ||
          ((int32_T)physical_NSTATE > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, xx->size[1],
                                      &uk_emlrtBCI, (emlrtConstCTX)sp);
      }
      loop_ub = (int32_T)physical_NSTATE;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &vk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (i = 0; i < loop_ub; i++) {
      temp_data[i] = states_data[(xx->size[0] + xx->size[0] * i) - 1];
    }
    absxk_tmp_tmp = 2.0 * physical_NSTATE;
    if (physical_NSTATE + 1.0 > absxk_tmp_tmp) {
      i = 0;
      i1 = 0;
    } else {
      if (physical_NSTATE + 1.0 !=
          (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
        emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &nf_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
          ((int32_T)(physical_NSTATE + 1.0) > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1,
                                      xx->size[1], &sk_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)(physical_NSTATE + 1.0) - 1;
      if (absxk_tmp_tmp != (int32_T)muDoubleScalarFloor(absxk_tmp_tmp)) {
        emlrtIntegerCheckR2012b(absxk_tmp_tmp, &mf_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)absxk_tmp_tmp < 1) ||
          ((int32_T)absxk_tmp_tmp > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)absxk_tmp_tmp, 1, xx->size[1],
                                      &rk_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = (int32_T)absxk_tmp_tmp;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &tk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_loop_ub = i1 - i;
    pf_size = b_loop_ub;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      pf_data[i1] = states_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
    }
    if ((loop_ub != 5) && (loop_ub != 1)) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, 5, &hd_emlrtECI, (emlrtConstCTX)sp);
    }
    if ((pf_size != 5) && (pf_size != 1)) {
      emlrtDimSizeImpxCheckR2021b(pf_size, 5, &gd_emlrtECI, (emlrtConstCTX)sp);
    }
    if (pf_size == 5) {
      S = 0.0;
      for (i = 0; i < 5; i++) {
        S += boundary_Sigma[i] * (pf_data[i] + physical_g0_x[i]);
      }
    } else {
      S = bb_binary_expand_op(boundary_Sigma, pf_data, &pf_size, physical_g0_x);
    }
    if (loop_ub == 5) {
      real_T temp[5];
      for (i = 0; i < 5; i++) {
        temp[i] = temp_data[i] - boundary_Xf[i];
      }
      b_loop_ub = 5;
      for (i = 0; i < 4; i++) {
        absxk_tmp_tmp = 0.0;
        for (i1 = 0; i1 < 5; i1++) {
          absxk_tmp_tmp += boundary_Pigreco[i1 + 5 * i] * temp[i1];
        }
        val_data[i] = absxk_tmp_tmp;
      }
      val_data[4] = S;
    } else {
      ab_binary_expand_op(val_data, &b_loop_ub, boundary_Pigreco, temp_data,
                          &loop_ub, boundary_Xf, S);
    }
    if (tt->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0], &el_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (tt_data[tt->size[0] - 1] < boundary_Tfin * 0.99) {
      b_loop_ub = 1;
      val_data[0] = 100.0;
    }
    /*  objective function */
    st.site = &an_emlrtRSI;
    b_st.site = &vb_emlrtRSI;
    for (i = 0; i < b_loop_ub; i++) {
      S = val_data[i];
      val_data[i] = S * S;
    }
    st.site = &an_emlrtRSI;
    b_st.site = &ln_emlrtRSI;
    c_st.site = &mn_emlrtRSI;
    d_st.site = &nn_emlrtRSI;
    e_st.site = &on_emlrtRSI;
    f_st.site = &pn_emlrtRSI;
    g_st.site = &qn_emlrtRSI;
    *obj = sumColumnB(&g_st, val_data, b_loop_ub);
    if (index2 < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)index2;
    }
    i = states->size[0] * states->size[1];
    states->size[0] = loop_ub;
    states->size[1] = temps->size[1];
    emxEnsureCapacity_real_T(sp, states, i, &lg_emlrtRTEI);
    states_data = states->data;
    b_loop_ub = temps->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        states_data[i1 + states->size[0] * i] = temps_data[i1 + 1000000 * i];
      }
    }
    emxFree_real_T(sp, &temps);
    if (index2 < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)index2;
    }
    i = times->size[0];
    times->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, times, i, &mg_emlrtRTEI);
    states_data = times->data;
    for (i = 0; i < loop_ub; i++) {
      states_data[i] = SD->f0.tempt[i];
    }
  }
  emxFree_real_T(sp, &tt);
  emxFree_real_T(sp, &xx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfun_S_fuel_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                            real_T physical_c, real_T physical_NSTATE,
                            real_T physical_shoot, real_T physical_EPS,
                            real_T SIGN, const emxArray_real_T *s,
                            emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *p;
  emxArray_real_T *pd;
  emxArray_real_T *x;
  emxArray_real_T *xd;
  real_T S_x[5];
  real_T b_S_p[5];
  const real_T *s_data;
  real_T S_p;
  real_T a__1;
  real_T *H_p_data;
  real_T *H_x_data;
  real_T *pd_data;
  real_T *varargout_1_data;
  real_T *x_data;
  int32_T b_physical_NSTATE[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  s_data = s->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &fn_emlrtRSI;
  /*  computation of equations of motion and switching function derivative */
  /*  3 inputs case:  */
  /*  inp1: states and costates vector [NSTATEx1], inp2: structure for physical
   * variables */
  /*  and functions, inp3: switching function */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &hl_emlrtBCI, &st);
    }
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &xf_emlrtDCI, &st);
    }
    if (((int32_T)physical_NSTATE < 1) ||
        ((int32_T)physical_NSTATE > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, s->size[0],
                                    &il_emlrtBCI, &st);
    }
    loop_ub = (int32_T)physical_NSTATE;
  }
  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = loop_ub;
  b_st.site = &gn_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x, 1, &ng_emlrtRTEI);
  i = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, x, i, &ng_emlrtRTEI);
  x_data = x->data;
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = s_data[i];
  }
  a__1 = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > a__1) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &yf_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1,
                                    s->size[0], &jl_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (a__1 != (int32_T)muDoubleScalarFloor(a__1)) {
      emlrtIntegerCheckR2012b(a__1, &ag_emlrtDCI, &st);
    }
    if (((int32_T)a__1 < 1) || ((int32_T)a__1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)a__1, 1, s->size[0], &kl_emlrtBCI,
                                    &st);
    }
    i1 = (int32_T)a__1;
  }
  b_physical_NSTATE[0] = 1;
  loop_ub = i1 - i;
  b_physical_NSTATE[1] = loop_ub;
  b_st.site = &hn_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &p, 1, &og_emlrtRTEI);
  i1 = p->size[0];
  p->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, p, i1, &og_emlrtRTEI);
  x_data = p->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    x_data[i1] = s_data[i + i1];
  }
  emxInit_real_T(&st, &xd, 1, &pg_emlrtRTEI);
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &cg_emlrtDCI, &st);
  }
  a__1 = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != a__1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &bg_emlrtDCI, &st);
  }
  i = xd->size[0];
  xd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, xd, i, &pg_emlrtRTEI);
  x_data = xd->data;
  if (physical_NSTATE != a__1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &bg_emlrtDCI, &st);
  }
  loop_ub = (int32_T)physical_NSTATE;
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = 0.0;
  }
  emxInit_real_T(&st, &pd, 1, &qg_emlrtRTEI);
  i = pd->size[0];
  pd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd, i, &qg_emlrtRTEI);
  pd_data = pd->data;
  loop_ub = (int32_T)physical_NSTATE;
  for (i = 0; i < loop_ub; i++) {
    pd_data[i] = 0.0;
  }
  a__1 = 2.0 * physical_NSTATE + 1.0;
  S_p = (int32_T)muDoubleScalarFloor(a__1);
  if (a__1 != S_p) {
    emlrtIntegerCheckR2012b(a__1, &dg_emlrtDCI, &st);
  }
  i = varargout_1->size[0];
  loop_ub = (int32_T)a__1;
  varargout_1->size[0] = (int32_T)a__1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &rg_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  if (a__1 != S_p) {
    emlrtIntegerCheckR2012b(a__1, &dg_emlrtDCI, &st);
  }
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i] = 0.0;
  }
  emxInit_real_T(&st, &H_x, 1, &rg_emlrtRTEI);
  emxInit_real_T(&st, &H_p, 1, &rg_emlrtRTEI);
  b_st.site = &in_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x, p, SIGN, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
    i = 0;
  } else {
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5,
                                    &ll_emlrtBCI, &st);
    }
    loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &ml_emlrtBCI,
                                    &st);
    }
    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  emlrtSubAssignSizeCheckR2012b(&i, 1, &loop_ub, 1, &ld_emlrtECI, &st);
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = H_p_data[i];
  }
  /*  states derivatives [NSTATEx1] */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
    i = 0;
  } else {
    loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &nl_emlrtBCI,
                                    &st);
    }
    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  for (i1 = 0; i1 < loop_ub; i1++) {
    S_x[i1] = -H_x_data[i1];
  }
  emlrtSubAssignSizeCheckR2012b(&i, 1, &loop_ub, 1, &md_emlrtECI, &st);
  for (i = 0; i < loop_ub; i++) {
    pd_data[i] = S_x[i];
  }
  /*  costates derivatives [NSTATEx1] */
  b_st.site = &jn_emlrtRSI;
  /*  Computes switching Function and its derivatives */
  /*  Definition of the Switching function and its derivatives with evaluation
   * of the */
  /*  matlabFunction S_fun, S_x_fun, S_p_fun, S_xx_fun, S_pp_fun, S_xp_fun */
  /*  Input: */
  /*  x: state vector [NSTATEx1] */
  /*  p: costate vector [NSTATEx1] */
  /*  physical: structure of physical variables and functions */
  /*  Output: */
  /*  S: switching function */
  /*  Sd: switching function first derivatives */
  /*  Sdd: switching function second derivatives */
  c_st.site = &tb_emlrtRSI;
  a__1 = S_fun(&c_st, x, p, physical_Tmax, physical_c);
  c_st.site = &qm_emlrtRSI;
  S_x_fun(&c_st, x, p, physical_Tmax, S_x);
  c_st.site = &rm_emlrtRSI;
  S_p_fun(&c_st, x, p, physical_Tmax, physical_c, b_S_p);
  c_st.site = &sm_emlrtRSI;
  HamiltonianFirstDerivatives(&c_st, x, p, a__1, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  emxFree_real_T(&b_st, &p);
  emxFree_real_T(&b_st, &x);
  /*  Switching function derivative */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    i = ((int32_T)physical_NSTATE << 1) + 1;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > i)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1, i,
                                    &ol_emlrtBCI, &st);
    }
    loop_ub = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  if (loop_ub != xd->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, xd->size[0], &nd_emlrtECI, &st);
  }
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i] = x_data[i];
  }
  emxFree_real_T(&st, &xd);
  i = (int32_T)physical_NSTATE << 1;
  if ((int32_T)physical_NSTATE + 1 > i) {
    i1 = 0;
    i = 0;
  } else {
    if (((int32_T)physical_NSTATE + 1 < 1) ||
        ((int32_T)physical_NSTATE + 1 > varargout_1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE + 1, 1,
                                    varargout_1->size[0], &pl_emlrtBCI, &st);
    }
    i1 = (int32_T)physical_NSTATE;
    if ((i < 1) || (i > varargout_1->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, varargout_1->size[0], &ql_emlrtBCI,
                                    &st);
    }
  }
  loop_ub = i - i1;
  if (loop_ub != pd->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, pd->size[0], &od_emlrtECI, &st);
  }
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i1 + i] = pd_data[i];
  }
  emxFree_real_T(&st, &pd);
  a__1 = 0.0;
  S_p = 0.0;
  for (i = 0; i < 5; i++) {
    a__1 += S_x[i] * H_p_data[i];
    S_p += b_S_p[i] * H_x_data[i];
  }
  emxFree_real_T(&st, &H_p);
  emxFree_real_T(&st, &H_x);
  i = ((int32_T)physical_NSTATE << 1) + 1;
  if ((i < 1) || (i > varargout_1->size[0])) {
    emlrtDynamicBoundsCheckR2012b(i, 1, varargout_1->size[0], &rl_emlrtBCI,
                                  &st);
  }
  varargout_1_data[i - 1] = a__1 - S_p;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (objfun_S_fuel.c) */
