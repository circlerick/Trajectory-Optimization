/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_NOG.c
 *
 * Code generation for function 'objfun_S_NOG'
 *
 */

/* Include files */
#include "objfun_S_NOG.h"
#include "HamiltonianFirstDerivatives.h"
#include "HamiltonianSecondDerivatives.h"
#include "S_fun.h"
#include "Switching_Function.h"
#include "assertValidSizeArg.h"
#include "derivatives.h"
#include "derivatives_NOG_update.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "mtimes.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_mexutil.h"
#include "objfun_S_NOG_types.h"
#include "objfun_S_fuel.h"
#include "ode89.h"
#include "reshapeSizeChecks.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 208,   /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 192, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 170, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 169, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 168, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 167, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 159, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 158, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 155, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 152, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 151, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 149, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 148, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 146, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 145, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 144, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 143, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 141, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 140, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 139, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 136, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 134, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 124, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 123, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 121, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 120,/* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 119,/* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 118,/* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 117,/* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 112,/* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 88, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 75, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 74, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 72, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 71, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 70, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 69, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 68, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 62, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 41, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 40, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 39, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 38, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 33, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 62, /* lineNo */
  "@(t,s)derivatives_NOG_update(s,physical,SIGN_nom,Pigreco)",/* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 19, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 20, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 21, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 22, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 23, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 24, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 25, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 26, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 27, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 30, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 32, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 36, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 37, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 40, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 41, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 42, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 43, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 44, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 45, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 46, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 47, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 53, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 54, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 88, /* lineNo */
  "@(t,s)derivatives_NOG(s,physical,SIGN_nom)",/* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 19, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 20, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 21, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 22, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 23, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 24, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 25, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 26, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 27, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 33, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 34, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 37, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 38, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 39, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 40, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 41, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 42, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 43, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 44, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo om_emlrtRSI = { 47, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtRSInfo pm_emlrtRSI = { 48, /* lineNo */
  "derivatives_NOG",                   /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 21,    /* lineNo */
  5,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  195,                                 /* lineNo */
  13,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  1000000,                             /* iLast */
  195,                                 /* lineNo */
  28,                                  /* colNo */
  "tempt",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  195,                                 /* lineNo */
  19,                                  /* colNo */
  "tempt",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  93,                                  /* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  93,                                  /* lineNo */
  32,                                  /* colNo */
  "tempt",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  93,                                  /* lineNo */
  23,                                  /* colNo */
  "tempt",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  81,                                  /* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  81,                                  /* lineNo */
  32,                                  /* colNo */
  "tempt",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  81,                                  /* lineNo */
  23,                                  /* colNo */
  "tempt",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  194,                                 /* lineNo */
  13,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  194,                                 /* lineNo */
  28,                                  /* colNo */
  "temps",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  194,                                 /* lineNo */
  19,                                  /* colNo */
  "temps",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  92,                                  /* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  92,                                  /* lineNo */
  32,                                  /* colNo */
  "temps",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  92,                                  /* lineNo */
  23,                                  /* colNo */
  "temps",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  80,                                  /* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  80,                                  /* lineNo */
  32,                                  /* colNo */
  "temps",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  1000000,                             /* iLast */
  80,                                  /* lineNo */
  23,                                  /* colNo */
  "temps",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  50,                                  /* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 1,   /* nDims */
  206,                                 /* lineNo */
  30,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 1,   /* nDims */
  205,                                 /* lineNo */
  32,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  36,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 200,   /* lineNo */
  36,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  25,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 200, /* lineNo */
  25,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  21,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  199,                                 /* lineNo */
  36,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 199, /* lineNo */
  36,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  199,                                 /* lineNo */
  25,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 199, /* lineNo */
  25,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  199,                                 /* lineNo */
  21,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  194,                                 /* lineNo */
  51,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 194, /* lineNo */
  51,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  194,                                 /* lineNo */
  49,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  35,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 191, /* lineNo */
  35,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  24,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 191, /* lineNo */
  24,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  20,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  37,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 190, /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  26,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 190, /* lineNo */
  26,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  22,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  172,                                 /* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  22,                                  /* colNo */
  "s0",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  39,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 172, /* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  33,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  159,                                 /* lineNo */
  69,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 159, /* lineNo */
  69,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  159,                                 /* lineNo */
  58,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 159, /* lineNo */
  58,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { 1,   /* nDims */
  158,                                 /* lineNo */
  28,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { 2,   /* nDims */
  158,                                 /* lineNo */
  58,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { 1,   /* nDims */
  158,                                 /* lineNo */
  58,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { 2,   /* nDims */
  158,                                 /* lineNo */
  65,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { 1,   /* nDims */
  158,                                 /* lineNo */
  65,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  44,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 158, /* lineNo */
  44,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  35,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 158, /* lineNo */
  35,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  31,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { 1,   /* nDims */
  156,                                 /* lineNo */
  26,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  65,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 156, /* lineNo */
  65,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  54,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 156, /* lineNo */
  54,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  50,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  36,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 156, /* lineNo */
  36,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  30,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { 2,   /* nDims */
  152,                                 /* lineNo */
  27,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { 1,   /* nDims */
  152,                                 /* lineNo */
  27,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { 2,   /* nDims */
  152,                                 /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { 1,   /* nDims */
  152,                                 /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { 2,   /* nDims */
  151,                                 /* lineNo */
  27,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo v_emlrtECI = { 1,   /* nDims */
  151,                                 /* lineNo */
  27,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { 2,   /* nDims */
  151,                                 /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { 1,   /* nDims */
  151,                                 /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { 2,   /* nDims */
  149,                                 /* lineNo */
  27,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { 1,  /* nDims */
  149,                                 /* lineNo */
  27,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 2,  /* nDims */
  149,                                 /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { 1,  /* nDims */
  149,                                 /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { 2,  /* nDims */
  148,                                 /* lineNo */
  27,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { 1,  /* nDims */
  148,                                 /* lineNo */
  27,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 2,  /* nDims */
  148,                                 /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo gb_emlrtECI = { 1,  /* nDims */
  148,                                 /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  146,                                 /* lineNo */
  52,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  146,                                 /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 146, /* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  52,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 145, /* lineNo */
  52,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 145, /* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  50,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 144, /* lineNo */
  50,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 144, /* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  41,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 143, /* lineNo */
  41,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hb_emlrtECI = { 1,  /* nDims */
  141,                                 /* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  86,                                  /* colNo */
  "dydt_min",                          /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 141, /* lineNo */
  86,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  77,                                  /* colNo */
  "dydt_min",                          /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 141, /* lineNo */
  77,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  58,                                  /* colNo */
  "dydt_plus",                         /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 141,/* lineNo */
  58,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  49,                                  /* colNo */
  "dydt_plus",                         /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 141,/* lineNo */
  49,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo ib_emlrtECI = { 1,  /* nDims */
  140,                                 /* lineNo */
  38,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  69,                                  /* colNo */
  "dydt_min",                          /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 140,/* lineNo */
  69,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  67,                                  /* colNo */
  "dydt_min",                          /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  50,                                  /* colNo */
  "dydt_plus",                         /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 140,/* lineNo */
  50,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  48,                                  /* colNo */
  "dydt_plus",                         /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  139,                                 /* lineNo */
  50,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 139,/* lineNo */
  50,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  139,                                 /* lineNo */
  44,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  138,                                 /* lineNo */
  42,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  138,                                 /* lineNo */
  31,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 138,/* lineNo */
  31,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  138,                                 /* lineNo */
  27,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  49,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 134,/* lineNo */
  49,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  43,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  43,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 133,/* lineNo */
  43,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  34,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 133,/* lineNo */
  34,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  30,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  33,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 132,/* lineNo */
  33,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  27,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  124,                                 /* lineNo */
  70,                                  /* colNo */
  "s0",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 124,/* lineNo */
  70,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  124,                                 /* lineNo */
  59,                                  /* colNo */
  "s0",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 124,/* lineNo */
  59,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo jb_emlrtECI = { 1,  /* nDims */
  123,                                 /* lineNo */
  31,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { 2,  /* nDims */
  123,                                 /* lineNo */
  61,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { 1,  /* nDims */
  123,                                 /* lineNo */
  61,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo mb_emlrtECI = { 2,  /* nDims */
  123,                                 /* lineNo */
  68,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo nb_emlrtECI = { 1,  /* nDims */
  123,                                 /* lineNo */
  68,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  123,                                 /* lineNo */
  47,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 123,/* lineNo */
  47,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  123,                                 /* lineNo */
  38,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 123,/* lineNo */
  38,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  123,                                 /* lineNo */
  34,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { 1,  /* nDims */
  122,                                 /* lineNo */
  30,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  69,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 122,/* lineNo */
  69,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  58,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 122,/* lineNo */
  58,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  54,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  40,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 122,/* lineNo */
  40,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  34,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  120,                                 /* lineNo */
  52,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  120,                                 /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 120,/* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  52,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 119,/* lineNo */
  52,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 119,/* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  50,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 118,/* lineNo */
  50,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 118,/* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  41,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 117,/* lineNo */
  41,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  46,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  35,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 116,/* lineNo */
  35,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  31,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  89,                                  /* colNo */
  "s0",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 112,/* lineNo */
  89,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  78,                                  /* colNo */
  "s0",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 112,/* lineNo */
  78,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  65,                                  /* colNo */
  "s0",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 112,/* lineNo */
  65,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  54,                                  /* colNo */
  "s0",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 112,/* lineNo */
  54,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  44,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  40,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  105,                                 /* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  22,                                  /* colNo */
  "s0",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  32,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  64,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 92, /* lineNo */
  64,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  53,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 92, /* lineNo */
  53,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  64,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 80, /* lineNo */
  64,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  53,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 80, /* lineNo */
  53,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  95,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 75, /* lineNo */
  95,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  84,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 75, /* lineNo */
  84,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  68,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 75, /* lineNo */
  68,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  57,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 75, /* lineNo */
  57,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  55,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qb_emlrtECI = { -1, /* nDims */
  74,                                  /* lineNo */
  21,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  37,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 74, /* lineNo */
  37,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  26,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = { 74, /* lineNo */
  26,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  24,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo rb_emlrtECI = { 1,  /* nDims */
  74,                                  /* lineNo */
  50,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { 2,  /* nDims */
  74,                                  /* lineNo */
  78,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { 1,  /* nDims */
  74,                                  /* lineNo */
  78,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo ub_emlrtECI = { 2,  /* nDims */
  74,                                  /* lineNo */
  85,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtECInfo vb_emlrtECI = { 1,  /* nDims */
  74,                                  /* lineNo */
  85,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  64,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = { 74, /* lineNo */
  64,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  55,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = { 74, /* lineNo */
  55,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  53,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo wb_emlrtECI = { 1,  /* nDims */
  73,                                  /* lineNo */
  30,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  65,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = { 73, /* lineNo */
  65,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  54,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qc_emlrtDCI = { 73, /* lineNo */
  54,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  52,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  38,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rc_emlrtDCI = { 73, /* lineNo */
  38,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  34,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  52,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sc_emlrtDCI = { 71, /* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  52,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tc_emlrtDCI = { 70, /* lineNo */
  52,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo uc_emlrtDCI = { 70, /* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  50,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vc_emlrtDCI = { 69, /* lineNo */
  50,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wc_emlrtDCI = { 69, /* lineNo */
  39,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  41,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xc_emlrtDCI = { 68, /* lineNo */
  41,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  39,                                  /* colNo */
  "phif",                              /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  44,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  33,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yc_emlrtDCI = { 67, /* lineNo */
  33,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  31,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ad_emlrtDCI = { 49, /* lineNo */
  19,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo bd_emlrtDCI = { 49, /* lineNo */
  19,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  159,                                 /* lineNo */
  54,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cd_emlrtDCI = { 49, /* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  188,                                 /* lineNo */
  18,                                  /* colNo */
  "tspan",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  33,                                  /* colNo */
  "tspan",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  9,                                   /* colNo */
  "tspan",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  97,                                  /* lineNo */
  23,                                  /* colNo */
  "tt",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  19,                                  /* colNo */
  "tt",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  33,                                  /* colNo */
  "tspan",                             /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  24,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  26,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  56,                                  /* colNo */
  "xx",                                /* aName */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dd_emlrtDCI = { 35, /* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ed_emlrtDCI = { 35, /* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fd_emlrtDCI = { 23, /* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gd_emlrtDCI = { 19, /* lineNo */
  14,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  14,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hd_emlrtDCI = { 20, /* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo id_emlrtDCI = { 20, /* lineNo */
  21,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  21,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jd_emlrtDCI = { 21, /* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kd_emlrtDCI = { 21, /* lineNo */
  23,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  23,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ld_emlrtDCI = { 22, /* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo md_emlrtDCI = { 22, /* lineNo */
  23,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  23,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  18,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nd_emlrtDCI = { 24, /* lineNo */
  20,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  20,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo od_emlrtDCI = { 25, /* lineNo */
  18,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  18,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pd_emlrtDCI = { 25, /* lineNo */
  29,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  29,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qd_emlrtDCI = { 26, /* lineNo */
  18,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  18,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rd_emlrtDCI = { 26, /* lineNo */
  31,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  31,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sd_emlrtDCI = { 27, /* lineNo */
  18,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  18,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo td_emlrtDCI = { 27, /* lineNo */
  31,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  31,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo xb_emlrtECI = { 1,  /* nDims */
  31,                                  /* lineNo */
  10,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtECInfo yb_emlrtECI = { 1,  /* nDims */
  32,                                  /* lineNo */
  25,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtECInfo ac_emlrtECI = { 2,  /* nDims */
  32,                                  /* lineNo */
  25,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtECInfo bc_emlrtECI = { 1,  /* nDims */
  32,                                  /* lineNo */
  18,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtECInfo cc_emlrtECI = { 2,  /* nDims */
  32,                                  /* lineNo */
  18,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtECInfo dc_emlrtECI = { 1,  /* nDims */
  32,                                  /* lineNo */
  9,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  30,                                  /* colNo */
  "H_p_nom",                           /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ec_emlrtECI = { 2,  /* nDims */
  40,                                  /* lineNo */
  8,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtECInfo fc_emlrtECI = { 2,  /* nDims */
  41,                                  /* lineNo */
  8,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtECInfo gc_emlrtECI = { 2,  /* nDims */
  44,                                  /* lineNo */
  8,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtECInfo hc_emlrtECI = { 2,  /* nDims */
  45,                                  /* lineNo */
  8,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  10,                                  /* colNo */
  "xd_nom",                            /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ic_emlrtECI = { -1, /* nDims */
  38,                                  /* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  10,                                  /* colNo */
  "pd_nom",                            /* aName */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jc_emlrtECI = { -1, /* nDims */
  39,                                  /* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtDCInfo le_emlrtDCI = { 32, /* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo me_emlrtDCI = { 32, /* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ne_emlrtDCI = { 23, /* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo oe_emlrtDCI = { 19, /* lineNo */
  14,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ij_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  14,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pe_emlrtDCI = { 20, /* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qe_emlrtDCI = { 20, /* lineNo */
  21,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  21,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo re_emlrtDCI = { 21, /* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo se_emlrtDCI = { 21, /* lineNo */
  23,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  23,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo te_emlrtDCI = { 22, /* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  12,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ue_emlrtDCI = { 22, /* lineNo */
  23,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  23,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  18,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ve_emlrtDCI = { 24, /* lineNo */
  20,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  20,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo we_emlrtDCI = { 25, /* lineNo */
  18,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  18,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xe_emlrtDCI = { 25, /* lineNo */
  29,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  29,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ye_emlrtDCI = { 26, /* lineNo */
  18,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  18,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo af_emlrtDCI = { 26, /* lineNo */
  31,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  31,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bf_emlrtDCI = { 27, /* lineNo */
  18,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  18,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cf_emlrtDCI = { 27, /* lineNo */
  31,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  31,                                  /* colNo */
  "phi",                               /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  11,                                  /* colNo */
  "inp1",                              /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  30,                                  /* colNo */
  "H_p_nom",                           /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo sc_emlrtECI = { 2,  /* nDims */
  37,                                  /* lineNo */
  8,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtECInfo tc_emlrtECI = { 2,  /* nDims */
  38,                                  /* lineNo */
  8,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtECInfo uc_emlrtECI = { 2,  /* nDims */
  41,                                  /* lineNo */
  8,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtECInfo vc_emlrtECI = { 2,  /* nDims */
  42,                                  /* lineNo */
  8,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtBCInfo ak_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  10,                                  /* colNo */
  "xd_nom",                            /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo wc_emlrtECI = { -1, /* nDims */
  35,                                  /* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtBCInfo bk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  10,                                  /* colNo */
  "pd_nom",                            /* aName */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo xc_emlrtECI = { -1, /* nDims */
  36,                                  /* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 17,/* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 29,/* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 49,/* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 213,/* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 214,/* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 70,/* lineNo */
  21,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 141,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 72,/* lineNo */
  26,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 143,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 119,/* lineNo */
  21,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 74,/* lineNo */
  78,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 74,/* lineNo */
  85,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 144,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 121,/* lineNo */
  26,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 123,/* lineNo */
  61,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 145,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 123,/* lineNo */
  68,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 146,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 86,/* lineNo */
  13,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 148,/* lineNo */
  36,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 148,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 149,/* lineNo */
  36,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 149,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 151,/* lineNo */
  36,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 151,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 152,/* lineNo */
  36,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 155,/* lineNo */
  22,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 152,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 158,/* lineNo */
  65,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 158,/* lineNo */
  28,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 172,/* lineNo */
  29,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 72,/* lineNo */
  21,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 139,/* lineNo */
  17,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 3,/* lineNo */
  31,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 72,/* lineNo */
  30,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 74,/* lineNo */
  90,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 74,/* lineNo */
  84,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 74,/* lineNo */
  109,                                 /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 21,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 23,/* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 24,/* lineNo */
  14,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 25,/* lineNo */
  14,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 26,/* lineNo */
  14,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 30,/* lineNo */
  6,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 35,/* lineNo */
  25,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 44,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 45,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 62,/* lineNo */
  33,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 30,/* lineNo */
  10,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 32,/* lineNo */
  24,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 32,/* lineNo */
  49,                                  /* colNo */
  "derivatives_NOG_update",            /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 21,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 23,/* lineNo */
  12,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 24,/* lineNo */
  14,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 25,/* lineNo */
  14,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 26,/* lineNo */
  14,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 27,/* lineNo */
  14,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 32,/* lineNo */
  25,                                  /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 38,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "derivatives_NOG",                   /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 88,/* lineNo */
  33,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 158,/* lineNo */
  58,                                  /* colNo */
  "objfun_S_NOG",                      /* fName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pName */
};

static emlrtRSInfo tn_emlrtRSI = { 21, /* lineNo */
  "objfun_S_NOG",                      /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_NOG.m"/* pathName */
};

static emlrtRSInfo xn_emlrtRSI = { 76, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo yn_emlrtRSI = { 31, /* lineNo */
  "derivatives_NOG_update",            /* fcnName */
  "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_NOG_update.m"/* pathName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2);
static void b_plus(const emlrtStack *sp, emxArray_real_T *in1, const
                   emxArray_real_T *in2);
static void binary_expand_op(real_T in1_data[], int32_T in1_size[2], const
  emxArray_real_T *in2, int32_T in3, int32_T in4, int32_T in5, const
  emxArray_real_T *in6);
static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, int32_T in3, int32_T in4, int32_T in6, int32_T in7,
  const real_T in8[2], const emxArray_real_T *in9);
static void d_binary_expand_op(real_T in1_data[], int32_T *in1_size, const
  real_T in2_data[], const int32_T *in2_size, const emxArray_real_T *in3,
  int32_T in4, int32_T in5, int32_T in6);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[46]);
static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, int32_T in3, int32_T in5, int32_T in6, const real_T in7
  [2], const emxArray_real_T *in8);
static void g_binary_expand_op(real_T in1_data[], int32_T *in1_size, const
  real_T in2_data[], const int32_T *in2_size, const emxArray_real_T *in3,
  int32_T in4, int32_T in5);
static void h_binary_expand_op(const emlrtStack *sp, const emlrtRSInfo in1,
  const emxArray_real_T *in2, int32_T in3, int32_T in4, int32_T in5, int32_T in6,
  const emxArray_real_T *in7, const struct0_T *in8, real_T *out1, real_T *out2);
static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, int32_T in3, int32_T in5, int32_T in6, const real_T in7
  [2], const emxArray_real_T *in8);
static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, const emxArray_real_T *in3, real_T in4);
static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, int32_T in3, int32_T in5, const real_T in6[2], const
  emxArray_real_T *in7);
static void n_binary_expand_op(real_T in1[5], const struct1_T *in2, const real_T
  in3_data[], const int32_T *in3_size, const real_T in4_data[], const int32_T
  *in4_size, const struct0_T *in5);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2)
{
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  real_T *b_in2_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 2, &ib_emlrtRTEI);
  i = b_in2->size[0] * b_in2->size[1];
  if (in1->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in1->size[0];
  }

  if (in1->size[1] == 1) {
    b_in2->size[1] = in2->size[1];
  } else {
    b_in2->size[1] = in1->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_in2, i, &ib_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_1_1 = (in1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1->size[1] == 1) {
    loop_ub = in2->size[1];
  } else {
    loop_ub = in1->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    i1 = in1->size[0];
    if (i1 == 1) {
      b_loop_ub = in2->size[0];
    } else {
      b_loop_ub = i1;
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_in2_data[i1 + b_in2->size[0] * i] = in2_data[i1 * stride_0_0 + in2->
        size[0] * aux_0_1] + in1_data[i1 * stride_1_0 + in1->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_in2->size[0];
  in1->size[1] = b_in2->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &ib_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in2->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_in2->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in2_data[i1 + b_in2->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void b_plus(const emlrtStack *sp, emxArray_real_T *in1, const
                   emxArray_real_T *in2)
{
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  real_T *b_in2_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 2, &bc_emlrtRTEI);
  i = b_in2->size[0] * b_in2->size[1];
  if (in1->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in1->size[0];
  }

  if (in1->size[1] == 1) {
    b_in2->size[1] = in2->size[1];
  } else {
    b_in2->size[1] = in1->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_in2, i, &bc_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in1->size[0] != 1);
  stride_1_1 = (in1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1->size[1] == 1) {
    loop_ub = in2->size[1];
  } else {
    loop_ub = in1->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    i1 = in1->size[0];
    if (i1 == 1) {
      b_loop_ub = in2->size[0];
    } else {
      b_loop_ub = i1;
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_in2_data[i1 + b_in2->size[0] * i] = in2_data[i1 * stride_0_0 + in2->
        size[0] * aux_0_1] + in1_data[i1 * stride_1_0 + in1->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_in2->size[0];
  in1->size[1] = b_in2->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &bc_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in2->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_in2->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in2_data[i1 + b_in2->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op(real_T in1_data[], int32_T in1_size[2], const
  emxArray_real_T *in2, int32_T in3, int32_T in4, int32_T in5, const
  emxArray_real_T *in6)
{
  const real_T *in2_data;
  const real_T *in6_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in6_data = in6->data;
  in2_data = in2->data;
  in1_size[0] = 1;
  if (in6->size[0] == 1) {
    in1_size[1] = in5 - in4;
  } else {
    in1_size[1] = in6->size[0];
  }

  stride_0_1 = (in5 - in4 != 1);
  stride_1_1 = (in6->size[0] != 1);
  if (in6->size[0] == 1) {
    loop_ub = in5 - in4;
  } else {
    loop_ub = in6->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2_data[in3 + in2->size[0] * (in4 + i * stride_0_1)] +
      in6_data[i * stride_1_1];
  }
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, int32_T in3, int32_T in4, int32_T in6, int32_T in7,
  const real_T in8[2], const emxArray_real_T *in9)
{
  real_T b_in2_data[120];
  const real_T *in2_data;
  const real_T *in9_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T in8_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in9_data = in9->data;
  in2_data = in2->data;
  loop_ub = in7 - in6;
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[in3 + in2->size[0] * ((in4 + in6) + i)];
  }

  in8_idx_0 = (int32_T)in8[0];
  loop_ub = (int32_T)in8[1];
  i = in1->size[0] * in1->size[1];
  if (in9->size[0] == 1) {
    in1->size[0] = in8_idx_0;
  } else {
    in1->size[0] = in9->size[0];
  }

  if (in9->size[1] == 1) {
    in1->size[1] = loop_ub;
  } else {
    in1->size[1] = in9->size[1];
  }

  emxEnsureCapacity_real_T(sp, in1, i, &jb_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in8_idx_0 != 1);
  stride_0_1 = (loop_ub != 1);
  stride_1_0 = (in9->size[0] != 1);
  stride_1_1 = (in9->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in9->size[1] != 1) {
    loop_ub = in9->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    int32_T b_loop_ub;
    i1 = in9->size[0];
    if (i1 == 1) {
      b_loop_ub = in8_idx_0;
    } else {
      b_loop_ub = i1;
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in2_data[i1 * stride_0_0 + in8_idx_0 *
        aux_0_1] + in9_data[i1 * stride_1_0 + in9->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void d_binary_expand_op(real_T in1_data[], int32_T *in1_size, const
  real_T in2_data[], const int32_T *in2_size, const emxArray_real_T *in3,
  int32_T in4, int32_T in5, int32_T in6)
{
  const real_T *in3_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in3_data = in3->data;
  if (in6 - in5 == 1) {
    *in1_size = *in2_size;
  } else {
    *in1_size = in6 - in5;
  }

  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (in6 - in5 != 1);
  if (in6 - in5 == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = in6 - in5;
  }

  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2_data[i * stride_0_0] + in3_data[in4 + in3->size[0] * (in5
      + i * stride_1_0)];
  }
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[46])
{
  static const int32_T iv[2] = { 1, 46 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 46, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, int32_T in3, int32_T in5, int32_T in6, const real_T in7
  [2], const emxArray_real_T *in8)
{
  real_T b_in2_data[120];
  const real_T *in2_data;
  const real_T *in8_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_in2;
  int32_T i;
  int32_T i1;
  int32_T in7_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in8_data = in8->data;
  in2_data = in2->data;
  b_in2 = in2->size[0];
  loop_ub = in6 - in5;
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[(b_in2 + in2->size[0] * ((in3 + in5) + i)) - 1];
  }

  in7_idx_0 = (int32_T)in7[0];
  b_in2 = (int32_T)in7[1];
  i = in1->size[0] * in1->size[1];
  if (in8->size[0] == 1) {
    in1->size[0] = in7_idx_0;
  } else {
    in1->size[0] = in8->size[0];
  }

  if (in8->size[1] == 1) {
    in1->size[1] = b_in2;
  } else {
    in1->size[1] = in8->size[1];
  }

  emxEnsureCapacity_real_T(sp, in1, i, &ob_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in7_idx_0 != 1);
  stride_0_1 = (b_in2 != 1);
  stride_1_0 = (in8->size[0] != 1);
  stride_1_1 = (in8->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in8->size[1] == 1) {
    loop_ub = b_in2;
  } else {
    loop_ub = in8->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    i1 = in8->size[0];
    if (i1 == 1) {
      b_in2 = in7_idx_0;
    } else {
      b_in2 = i1;
    }

    for (i1 = 0; i1 < b_in2; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in2_data[i1 * stride_0_0 + in7_idx_0 *
        aux_0_1] + in8_data[i1 * stride_1_0 + in8->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void g_binary_expand_op(real_T in1_data[], int32_T *in1_size, const
  real_T in2_data[], const int32_T *in2_size, const emxArray_real_T *in3,
  int32_T in4, int32_T in5)
{
  const real_T *in3_data;
  int32_T b_in3;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in3_data = in3->data;
  b_in3 = in3->size[0];
  if (in5 - in4 == 1) {
    *in1_size = *in2_size;
  } else {
    *in1_size = in5 - in4;
  }

  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (in5 - in4 != 1);
  if (in5 - in4 == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = in5 - in4;
  }

  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2_data[i * stride_0_0] + in3_data[(b_in3 + in3->size[0] *
      (in4 + i * stride_1_0)) - 1];
  }
}

static void h_binary_expand_op(const emlrtStack *sp, const emlrtRSInfo in1,
  const emxArray_real_T *in2, int32_T in3, int32_T in4, int32_T in5, int32_T in6,
  const emxArray_real_T *in7, const struct0_T *in8, real_T *out1, real_T *out2)
{
  emlrtStack st;
  emxArray_real_T d_in2_data;
  emxArray_real_T *d_in2;
  real_T b_in2_data[121];
  const real_T *in2_data;
  const real_T *in7_data;
  real_T *c_in2_data;
  int32_T b_in2;
  int32_T c_in2;
  int32_T i;
  int32_T in2_size;
  int32_T loop_ub;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in7_data = in7->data;
  in2_data = in2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  i = in2->size[0];
  b_in2 = in2->size[0];
  if ((b_in2 < 1) || (b_in2 > i)) {
    emlrtDynamicBoundsCheckR2012b(b_in2, 1, i, &cf_emlrtBCI, (emlrtConstCTX)sp);
  }

  c_in2 = in2->size[0];
  loop_ub = in4 - in3;
  in2_size = loop_ub + 1;
  for (i = 0; i <= loop_ub; i++) {
    b_in2_data[i] = in2_data[(b_in2 + in2->size[0] * (in3 + i)) - 1];
  }

  emxInit_real_T(sp, &d_in2, 1, &cc_emlrtRTEI);
  i = d_in2->size[0];
  if (in7->size[0] == 1) {
    d_in2->size[0] = in6 - in5;
  } else {
    d_in2->size[0] = in7->size[0];
  }

  emxEnsureCapacity_real_T(sp, d_in2, i, &cc_emlrtRTEI);
  c_in2_data = d_in2->data;
  b_in2 = (in6 - in5 != 1);
  stride_1_0 = (in7->size[0] != 1);
  if (in7->size[0] == 1) {
    loop_ub = in6 - in5;
  } else {
    loop_ub = in7->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    c_in2_data[i] = in2_data[(c_in2 + in2->size[0] * (in5 + i * b_in2)) - 1] +
      in7_data[i * stride_1_0];
  }

  d_in2_data.data = &b_in2_data[0];
  d_in2_data.size = &in2_size;
  d_in2_data.allocatedSize = 121;
  d_in2_data.numDimensions = 1;
  d_in2_data.canFreeData = false;
  st.site = (emlrtRSInfo *)&in1;
  b_Switching_Function(&st, &d_in2_data, d_in2, in8->Tmax, in8->c, in8->NSTATE,
                       in8->shoot, in8->EPS, out1, out2);
  emxFree_real_T(sp, &d_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void i_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, int32_T in3, int32_T in5, int32_T in6, const real_T in7
  [2], const emxArray_real_T *in8)
{
  real_T b_in2_data[120];
  const real_T *in2_data;
  const real_T *in8_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_in2;
  int32_T i;
  int32_T i1;
  int32_T in7_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in8_data = in8->data;
  in2_data = in2->data;
  b_in2 = in2->size[0];
  loop_ub = in6 - in5;
  for (i = 0; i <= loop_ub; i++) {
    b_in2_data[i] = in2_data[(b_in2 + in2->size[0] * ((in3 + in5) + i)) - 1];
  }

  in7_idx_0 = (int32_T)in7[0];
  b_in2 = (int32_T)in7[1];
  i = in1->size[0] * in1->size[1];
  if (in8->size[0] == 1) {
    in1->size[0] = in7_idx_0;
  } else {
    in1->size[0] = in8->size[0];
  }

  if (in8->size[1] == 1) {
    in1->size[1] = b_in2;
  } else {
    in1->size[1] = in8->size[1];
  }

  emxEnsureCapacity_real_T(sp, in1, i, &ac_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in7_idx_0 != 1);
  stride_0_1 = (b_in2 != 1);
  stride_1_0 = (in8->size[0] != 1);
  stride_1_1 = (in8->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in8->size[1] == 1) {
    loop_ub = b_in2;
  } else {
    loop_ub = in8->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    i1 = in8->size[0];
    if (i1 == 1) {
      b_in2 = in7_idx_0;
    } else {
      b_in2 = i1;
    }

    for (i1 = 0; i1 < b_in2; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in2_data[i1 * stride_0_0 + in7_idx_0 *
        aux_0_1] - in8_data[i1 * stride_1_0 + in8->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, const emxArray_real_T *in3, real_T in4)
{
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in3_data = in3->data;
  in2_data = in2->data;
  i = in1->size[0] * in1->size[1];
  if (in3->size[0] == 1) {
    in1->size[0] = in2->size[0];
  } else {
    in1->size[0] = in3->size[0];
  }

  if (in3->size[1] == 1) {
    in1->size[1] = in2->size[1];
  } else {
    in1->size[1] = in3->size[1];
  }

  emxEnsureCapacity_real_T(sp, in1, i, &xb_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in3->size[0] != 1);
  stride_1_1 = (in3->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in3->size[1] == 1) {
    loop_ub = in2->size[1];
  } else {
    loop_ub = in3->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    int32_T b_loop_ub;
    i1 = in3->size[0];
    if (i1 == 1) {
      b_loop_ub = in2->size[0];
    } else {
      b_loop_ub = i1;
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = (in2_data[i1 * stride_0_0 + in2->size[0]
        * aux_0_1] - in3_data[i1 * stride_1_0 + in3->size[0] * aux_1_1]) / in4;
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, const
  emxArray_real_T *in2, int32_T in3, int32_T in5, const real_T in6[2], const
  emxArray_real_T *in7)
{
  real_T b_in2_data[120];
  const real_T *in2_data;
  const real_T *in7_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_in2;
  int32_T i;
  int32_T i1;
  int32_T in6_idx_0;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in7_data = in7->data;
  in2_data = in2->data;
  b_in2 = in2->size[0];
  for (i = 0; i <= in5; i++) {
    b_in2_data[i] = in2_data[(b_in2 + in2->size[0] * (in3 + i)) - 1];
  }

  in6_idx_0 = (int32_T)in6[0];
  b_in2 = (int32_T)in6[1];
  i = in1->size[0] * in1->size[1];
  if (in7->size[0] == 1) {
    in1->size[0] = in6_idx_0;
  } else {
    in1->size[0] = in7->size[0];
  }

  if (in7->size[1] == 1) {
    in1->size[1] = b_in2;
  } else {
    in1->size[1] = in7->size[1];
  }

  emxEnsureCapacity_real_T(sp, in1, i, &sb_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in6_idx_0 != 1);
  stride_0_1 = (b_in2 != 1);
  stride_1_0 = (in7->size[0] != 1);
  stride_1_1 = (in7->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in7->size[1] != 1) {
    b_in2 = in7->size[1];
  }

  for (i = 0; i < b_in2; i++) {
    int32_T loop_ub;
    i1 = in7->size[0];
    if (i1 == 1) {
      loop_ub = in6_idx_0;
    } else {
      loop_ub = i1;
    }

    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in2_data[i1 * stride_0_0 + in6_idx_0 *
        aux_0_1] - in7_data[i1 * stride_1_0 + in7->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void n_binary_expand_op(real_T in1[5], const struct1_T *in2, const real_T
  in3_data[], const int32_T *in3_size, const real_T in4_data[], const int32_T
  *in4_size, const struct0_T *in5)
{
  real_T in3[5];
  real_T b_in2;
  int32_T b_stride_0_0;
  int32_T i;
  int32_T stride_0_0;
  stride_0_0 = (*in3_size != 1);
  b_stride_0_0 = (*in4_size != 1);
  b_in2 = 0.0;
  for (i = 0; i < 5; i++) {
    in3[i] = in3_data[i * stride_0_0] - in2->Xf[i];
    b_in2 += in2->Sigma[i] * (in4_data[i * b_stride_0_0] + in5->g0_x[i]);
  }

  for (i = 0; i < 4; i++) {
    real_T d;
    d = 0.0;
    for (stride_0_0 = 0; stride_0_0 < 5; stride_0_0++) {
      d += in2->Pigreco[stride_0_0 + 5 * i] * in3[stride_0_0];
    }

    in1[i] = d;
  }

  in1[4] = b_in2;
}

void emlrt_checkEscapedGlobals(void)
{
  boundary_dirty |= boundary_dirty >> 1U;
  physical_dirty |= physical_dirty >> 1U;
}

void objfun_S_NOG(objfun_S_NOGStackData *SD, const emlrtStack *sp, const real_T
                  lam0[5], const real_T X0[5], const struct0_T *b_physical,
                  const struct1_T *b_boundary, const struct2_T *NOG, real_T *obj,
                  emxArray_real_T *states, emxArray_real_T *times)
{
  static const char_T cv[46] = { 'E', 'r', 'r', 'o', 'r', ':', ' ', 'E', 'P',
    'S', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 's', 'e', 't', ' ', 't',
    'o', ' ', '0', ' ', 't', 'o', ' ', 'u', 's', 'e', ' ', 't', 'h', 'i', 's',
    ' ', 's', 'c', 'r', 'i', 'p', 't' };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T b_deltaX_data;
  emxArray_real_T b_pf_data;
  emxArray_real_T b_tmp_data;
  emxArray_real_T c_deltaX_data;
  emxArray_real_T c_pf_data;
  emxArray_real_T c_s0_data;
  emxArray_real_T c_tmp_data;
  emxArray_real_T d_deltaX_data;
  emxArray_real_T d_pf_data;
  emxArray_real_T d_s0_data;
  emxArray_real_T d_tmp_data;
  emxArray_real_T d_xx_data;
  emxArray_real_T e_deltaX_data;
  emxArray_real_T e_tmp_data;
  emxArray_real_T e_xx_data;
  emxArray_real_T f_deltaX_data;
  emxArray_real_T f_xx_data;
  emxArray_real_T g_deltaX_data;
  emxArray_real_T g_tmp_data;
  emxArray_real_T g_xx_data;
  emxArray_real_T h_tmp_data;
  emxArray_real_T *QN;
  emxArray_real_T *UN_plus;
  emxArray_real_T *Un;
  emxArray_real_T *Un_min;
  emxArray_real_T *Un_plus;
  emxArray_real_T *VN_min;
  emxArray_real_T *VN_plus;
  emxArray_real_T *Vn_min;
  emxArray_real_T *Vn_plus;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_tt;
  emxArray_real_T *b_y;
  emxArray_real_T *b_y_tmp;
  emxArray_real_T *c_y;
  emxArray_real_T *d_xx;
  emxArray_real_T *d_y;
  emxArray_real_T *deltax;
  emxArray_real_T *dydt_plus;
  emxArray_real_T *e_y;
  emxArray_real_T *f_y;
  emxArray_real_T *r;
  emxArray_real_T *temps;
  emxArray_real_T *tt;
  emxArray_real_T *xx;
  emxArray_real_T *y;
  emxArray_real_T *y_tmp;
  real_T b_s0_data[121];
  real_T c_xx_data[121];
  real_T deltaX_data[121];
  real_T f_tmp_data[121];
  real_T pf_data[121];
  real_T s0_data[121];
  real_T b_xx_data[120];
  real_T tmp_data[120];
  real_T val[5];
  real_T SIGN_per;
  real_T Snew;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T dSdt;
  real_T *QN_data;
  real_T *UN_plus_data;
  real_T *Un_plus_data;
  real_T *Vn_plus_data;
  real_T *a_data;
  real_T *deltax_data;
  real_T *states_data;
  real_T *temps_data;
  real_T *tt_data;
  real_T *xx_data;
  real_T *y_data;
  int32_T b_tmp_size[2];
  int32_T b_xx[2];
  int32_T b_xx_size[2];
  int32_T c_xx[2];
  int32_T tmp_size[2];
  int32_T b_s0_size;
  int32_T deltaX_size;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T maxdimlen;
  int32_T nx;
  int32_T pf_size;
  int32_T xx_size;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);

  /*  Real-time NOG algorithm: updates the costate of the perturbed trajectory */
  /*  in real time during the propagation */
  /*  Inputs */
  /*  lam0: costate at perturbation time [NSTATEx1] */
  /*  X0: state at perturbation time [NSTATEx1] */
  /*  physical, boundary, NOG: structures of values */
  /*  Outputs */
  /*  obj: sum of square residual values of the objective function */
  /*  states: matrix of propagation states */
  /*  times: vector of propagation times */
  /*  initialize outputs and constant values */
  *obj = 1000.0;
  i = states->size[0] * states->size[1];
  states->size[0] = 1;
  states->size[1] = 1;
  emxEnsureCapacity_real_T(sp, states, i, &v_emlrtRTEI);
  states_data = states->data;
  states_data[0] = 0.0;
  i = times->size[0];
  times->size[0] = 1;
  emxEnsureCapacity_real_T(sp, times, i, &w_emlrtRTEI);
  states_data = times->data;
  states_data[0] = 0.0;
  if (b_physical->EPS != 0.0) {
    st.site = &tn_emlrtRSI;
    disp(&st, emlrt_marshallOut(&st, cv), &emlrtMCI);
  } else {
    real_T b_dv[2];
    real_T b_dv1[2];
    real_T b_dv2[2];
    real_T told[2];
    real_T NSTATE;
    real_T SIGN_nom;
    real_T b_told;
    real_T d;
    real_T d1;
    real_T d2;
    real_T index1;
    real_T index2;
    real_T told_tmp;
    int32_T num_idx_0_tmp_tmp;
    int32_T s0_size;
    uint32_T b_i;
    NSTATE = b_physical->NSTATE;
    emxInit_real_T(sp, &xx, 2, &x_emlrtRTEI);
    i = xx->size[0] * xx->size[1];
    xx->size[0] = 1;
    xx->size[1] = 1;
    emxEnsureCapacity_real_T(sp, xx, i, &x_emlrtRTEI);
    xx_data = xx->data;
    xx_data[0] = 0.0;

    /*  Compute perturbed switch and extrapolate nominal switch */
    st.site = &sb_emlrtRSI;
    Snew = Switching_Function(&st, X0, lam0, b_physical->Tmax, b_physical->c);
    SIGN_per = muDoubleScalarSign(Snew);
    SIGN_nom = muDoubleScalarSign(NOG->Sw_nom);

    /*  extrapolate U and V and convert to vectors */
    st.site = &rb_emlrtRSI;
    told_tmp = b_physical->NSTATE * b_physical->NSTATE;
    told[0] = told_tmp;
    told[1] = 1.0;
    st.site = &rb_emlrtRSI;
    b_st.site = &xb_emlrtRSI;
    assertValidSizeArg(&b_st, told);
    num_idx_0_tmp_tmp = (int32_T)told_tmp;
    if ((int32_T)told_tmp > 25) {
      emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if ((int32_T)told_tmp < 0) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
        "MATLAB:checkDimCommon:nonnegativeSize",
        "MATLAB:checkDimCommon:nonnegativeSize", 0);
    }

    if ((int32_T)told_tmp != 25) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    st.site = &qb_emlrtRSI;
    b_dv[0] = told_tmp;
    b_dv[1] = 1.0;
    st.site = &qb_emlrtRSI;
    b_st.site = &xb_emlrtRSI;
    assertValidSizeArg(&b_st, b_dv);
    if ((int32_T)told_tmp > 25) {
      emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if ((int32_T)told_tmp < 0) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
        "MATLAB:checkDimCommon:nonnegativeSize",
        "MATLAB:checkDimCommon:nonnegativeSize", 0);
    }

    if ((int32_T)told_tmp != 25) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    st.site = &pb_emlrtRSI;
    b_dv1[0] = told_tmp;
    b_dv1[1] = 1.0;
    st.site = &pb_emlrtRSI;
    b_st.site = &xb_emlrtRSI;
    assertValidSizeArg(&b_st, b_dv1);
    if ((int32_T)told_tmp > 25) {
      emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if ((int32_T)told_tmp < 0) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
        "MATLAB:checkDimCommon:nonnegativeSize",
        "MATLAB:checkDimCommon:nonnegativeSize", 0);
    }

    if ((int32_T)told_tmp != 25) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    st.site = &ob_emlrtRSI;
    b_dv2[0] = told_tmp;
    b_dv2[1] = 1.0;
    st.site = &ob_emlrtRSI;
    b_st.site = &xb_emlrtRSI;
    assertValidSizeArg(&b_st, b_dv2);
    if ((int32_T)told_tmp > 25) {
      emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
        "Coder:toolbox:reshape_emptyReshapeLimit",
        "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }

    if ((int32_T)told_tmp < 0) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
        "MATLAB:checkDimCommon:nonnegativeSize",
        "MATLAB:checkDimCommon:nonnegativeSize", 0);
    }

    if ((int32_T)told_tmp != 25) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    /*  Define initial state of ode */
    i = (((int32_T)told_tmp + (int32_T)told_tmp) + (int32_T)told_tmp) + (int32_T)
      told_tmp;
    s0_size = i + 21;
    for (i1 = 0; i1 < 5; i1++) {
      s0_data[i1] = NOG->x_nom[i1];
      s0_data[i1 + 5] = NOG->lam_nom[i1];
      s0_data[i1 + 10] = X0[i1];
      s0_data[i1 + 15] = lam0[i1];
    }

    if (num_idx_0_tmp_tmp - 1 >= 0) {
      memcpy(&s0_data[20], &NOG->UN[0], (uint32_T)num_idx_0_tmp_tmp * sizeof
             (real_T));
    }

    for (i1 = 0; i1 < num_idx_0_tmp_tmp; i1++) {
      s0_data[(i1 + (int32_T)told_tmp) + 20] = NOG->VN[i1];
    }

    for (i1 = 0; i1 < num_idx_0_tmp_tmp; i1++) {
      s0_data[((i1 + (int32_T)told_tmp) + (int32_T)told_tmp) + 20] = NOG->Un[i1];
    }

    for (i1 = 0; i1 < num_idx_0_tmp_tmp; i1++) {
      s0_data[(((i1 + (int32_T)told_tmp) + (int32_T)told_tmp) + (int32_T)
               told_tmp) + 20] = NOG->Vn[i1];
    }

    s0_data[i + 20] = Snew;

    /*  Initialize loop index and output values */
    b_told = b_boundary->T0;
    b_i = 1U;
    memset(&SD->f1.tempt[0], 0, 1000000U * sizeof(real_T));
    emxInit_real_T(sp, &temps, 2, &y_emlrtRTEI);
    i1 = temps->size[0] * temps->size[1];
    temps->size[0] = 1000000;
    emxEnsureCapacity_real_T(sp, temps, i1, &y_emlrtRTEI);
    d = 2.0 * b_physical->NSTATE;
    if (!(d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d, &bd_emlrtDCI, (emlrtConstCTX)sp);
    }

    d1 = (int32_T)muDoubleScalarFloor(d);
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &ad_emlrtDCI, (emlrtConstCTX)sp);
    }

    i1 = temps->size[0] * temps->size[1];
    temps->size[1] = (int32_T)d;
    emxEnsureCapacity_real_T(sp, temps, i1, &y_emlrtRTEI);
    temps_data = temps->data;
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &cd_emlrtDCI, (emlrtConstCTX)sp);
    }

    loop_ub = 1000000 * (int32_T)d;
    for (i1 = 0; i1 < loop_ub; i1++) {
      temps_data[i1] = 0.0;
    }

    b_xx[0] = 1;
    b_xx[1] = (int32_T)d;
    c_xx[0] = 1;
    c_xx[1] = 10;
    emlrtSubAssignSizeCheckR2012b(&b_xx[0], 2, &c_xx[0], 2, &g_emlrtECI,
      (emlrtCTX)sp);
    for (i1 = 0; i1 < 5; i1++) {
      temps_data[1000000 * i1] = X0[i1];
      temps_data[1000000 * (i1 + 5)] = lam0[i1];
    }

    SD->f1.tempt[0] = b_boundary->T0;
    index1 = 1.0;
    index2 = 0.0;
    emxInit_real_T(sp, &QN, 2, &ec_emlrtRTEI);
    emxInit_real_T(sp, &dydt_plus, 1, &fc_emlrtRTEI);
    emxInit_real_T(sp, &deltax, 1, &db_emlrtRTEI);
    emxInit_real_T(sp, &VN_min, 2, &kb_emlrtRTEI);
    emxInit_real_T(sp, &Un_min, 2, &nb_emlrtRTEI);
    emxInit_real_T(sp, &Vn_min, 2, &pb_emlrtRTEI);
    emxInit_real_T(sp, &UN_plus, 2, &sb_emlrtRTEI);
    emxInit_real_T(sp, &VN_plus, 2, &ub_emlrtRTEI);
    emxInit_real_T(sp, &Un_plus, 2, &wb_emlrtRTEI);
    emxInit_real_T(sp, &Vn_plus, 2, &ac_emlrtRTEI);
    emxInit_real_T(sp, &tt, 1, &hc_emlrtRTEI);
    emxInit_real_T(sp, &Un, 2, &ic_emlrtRTEI);
    emxInit_real_T(sp, &r, 2, &gc_emlrtRTEI);
    emxInit_real_T(sp, &a, 2, &fb_emlrtRTEI);
    emxInit_real_T(sp, &b, 2, &jc_emlrtRTEI);
    emxInit_real_T(sp, &y, 2, &kc_emlrtRTEI);
    emxInit_real_T(sp, &b_y, 2, &lc_emlrtRTEI);
    emxInit_real_T(sp, &c_y, 2, &mc_emlrtRTEI);
    emxInit_real_T(sp, &d_y, 2, &mc_emlrtRTEI);
    emxInit_real_T(sp, &e_y, 2, &lc_emlrtRTEI);
    emxInit_real_T(sp, &f_y, 2, &lc_emlrtRTEI);
    emxInit_real_T(sp, &y_tmp, 2, &qb_emlrtRTEI);
    emxInit_real_T(sp, &b_y_tmp, 2, &qb_emlrtRTEI);
    while (b_i <= (uint32_T)NOG->tspan->size[0]) {
      real_T b_b[16];
      real_T h_y[16];
      int32_T b_nx_tmp;
      int32_T nx_tmp;
      boolean_T out;

      /*  2 possible propagation type depending of switch sign of */
      /*  nominal and perturbed trajectories */
      d2 = SIGN_nom * SIGN_per;
      if (d2 > 0.0) {
        /*  switches with same sign: propagation with costate update */
        told[0] = b_told;
        if ((int32_T)b_i > NOG->tspan->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, NOG->tspan->size[0],
            &ff_emlrtBCI, (emlrtConstCTX)sp);
        }

        told[1] = NOG->tspan->data[(int32_T)b_i - 1];
        st.site = &nb_emlrtRSI;
        ode89(&st, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
              b_physical->shoot, b_physical->EPS, SIGN_nom, b_boundary->Pigreco,
              told, s0_data, i + 21, tt, xx);
        xx_data = xx->data;
        tt_data = tt->data;

        /*  Compute switch and costate during the leg of trajectory */
        /*  with update */
        i1 = tt->size[0];
        if (tt->size[0] - 1 >= 0) {
          d3 = 4.0 * NSTATE + 1.0;
          d4 = told_tmp;
          d5 = 2.0 * told_tmp;
          d6 = d5 + 1.0;
          d7 = 3.0 * told_tmp;
          d8 = d7 + 1.0;
          d9 = 2.0 * NSTATE + 1.0;
          d10 = 3.0 * NSTATE;
          d11 = d;
          d12 = 3.0 * NSTATE + 1.0;
          d13 = 4.0 * NSTATE;
          d14 = 2.0 * NSTATE + 1.0;
          d15 = 4.0 * NSTATE;
        }

        if (i1 - 1 >= 0) {
          tmp_size[0] = 1;
          told[0] = NSTATE;
          told[1] = NSTATE;
          loop_ub_tmp = (int32_T)NSTATE * (int32_T)NSTATE;
        }

        for (nx = 0; nx < i1; nx++) {
          if (d3 > (real_T)xx->size[1] - 1.0) {
            i2 = 0;
            i3 = 0;
          } else {
            if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
              emlrtIntegerCheckR2012b(d3, &yc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d3 < 1) || ((int32_T)d3 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d3, 1, xx->size[1],
                &af_emlrtBCI, (emlrtConstCTX)sp);
            }

            i2 = (int32_T)d3 - 1;
            if ((xx->size[1] - 1 < 1) || (xx->size[1] - 1 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b(xx->size[1] - 1, 1, xx->size[1],
                &ye_emlrtBCI, (emlrtConstCTX)sp);
            }

            i3 = xx->size[1] - 1;
          }

          if (nx + 1 > xx->size[0]) {
            emlrtDynamicBoundsCheckR2012b(nx + 1, 1, xx->size[0], &bf_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          st.site = &mb_emlrtRSI;
          if (d4 < 1.0) {
            loop_ub = 0;
          } else {
            i4 = i3 - i2;
            if (i4 < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i4, &xe_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            if (d4 != (int32_T)muDoubleScalarFloor(d4)) {
              emlrtIntegerCheckR2012b(d4, &xc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d4 < 1) || ((int32_T)d4 > i4)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d4, 1, i4, &we_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            loop_ub = (int32_T)d4;
          }

          tmp_size[1] = loop_ub;
          for (i4 = 0; i4 < loop_ub; i4++) {
            tmp_data[i4] = xx_data[nx + xx->size[0] * (i2 + i4)];
          }

          st.site = &mb_emlrtRSI;
          b_st.site = &xb_emlrtRSI;
          assertValidSizeArg(&b_st, told);
          i4 = maxsize(tmp_size);
          if ((int32_T)NSTATE > muIntScalarMax_sint32(loop_ub, i4)) {
            emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
              "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }

          out = ((int32_T)NSTATE >= 0);
          if ((!out) || ((int32_T)NSTATE < 0)) {
            out = false;
          }

          if (!out) {
            emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
              "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
          }

          if (loop_ub_tmp != loop_ub) {
            emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
              "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }

          st.site = &lb_emlrtRSI;
          st.site = &lb_emlrtRSI;
          if (told_tmp + 1.0 > d5) {
            i4 = 0;
            i5 = 0;
          } else {
            i4 = i3 - i2;
            if (told_tmp + 1.0 != (int32_T)muDoubleScalarFloor(told_tmp + 1.0))
            {
              emlrtIntegerCheckR2012b(told_tmp + 1.0, &wc_emlrtDCI,
                (emlrtConstCTX)sp);
            }

            if (((int32_T)(told_tmp + 1.0) < 1) || ((int32_T)(told_tmp + 1.0) >
                 i4)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(told_tmp + 1.0), 1, i4,
                &ve_emlrtBCI, (emlrtConstCTX)sp);
            }

            i4 = (int32_T)(told_tmp + 1.0) - 1;
            i5 = i3 - i2;
            if (d5 != (int32_T)muDoubleScalarFloor(d5)) {
              emlrtIntegerCheckR2012b(d5, &vc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d5 < 1) || ((int32_T)d5 > i5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d5, 1, i5, &ue_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i5 = (int32_T)d5;
          }

          st.site = &lb_emlrtRSI;
          nx_tmp = i5 - i4;
          b_st.site = &xb_emlrtRSI;
          assertValidSizeArg(&b_st, told);
          b_xx_size[0] = 1;
          b_xx_size[1] = nx_tmp;
          maxdimlen = maxsize(b_xx_size);
          if ((int32_T)NSTATE > muIntScalarMax_sint32(nx_tmp, maxdimlen)) {
            emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
              "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }

          out = ((int32_T)NSTATE >= 0);
          if ((!out) || ((int32_T)NSTATE < 0)) {
            out = false;
          }

          if (!out) {
            emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
              "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
          }

          if (loop_ub_tmp != nx_tmp) {
            emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
              "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }

          st.site = &kb_emlrtRSI;
          st.site = &kb_emlrtRSI;
          if (d6 > d7) {
            i5 = 0;
            i6 = 0;
          } else {
            i5 = i3 - i2;
            if (d6 != (int32_T)muDoubleScalarFloor(d6)) {
              emlrtIntegerCheckR2012b(d6, &uc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d6 < 1) || ((int32_T)d6 > i5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d6, 1, i5, &te_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i5 = (int32_T)d6 - 1;
            i6 = i3 - i2;
            if (d7 != (int32_T)muDoubleScalarFloor(d7)) {
              emlrtIntegerCheckR2012b(d7, &tc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d7 < 1) || ((int32_T)d7 > i6)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d7, 1, i6, &se_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i6 = (int32_T)d7;
          }

          st.site = &kb_emlrtRSI;
          b_nx_tmp = i6 - i5;
          b_st.site = &xb_emlrtRSI;
          assertValidSizeArg(&b_st, told);
          b_xx_size[0] = 1;
          b_xx_size[1] = b_nx_tmp;
          i6 = maxsize(b_xx_size);
          if ((int32_T)NSTATE > muIntScalarMax_sint32(b_nx_tmp, i6)) {
            emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
              "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }

          out = ((int32_T)NSTATE >= 0);
          if ((!out) || ((int32_T)NSTATE < 0)) {
            out = false;
          }

          if (!out) {
            emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
              "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
          }

          if (loop_ub_tmp != b_nx_tmp) {
            emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
              "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }

          for (i6 = 0; i6 < b_nx_tmp; i6++) {
            b_xx_data[i6] = xx_data[nx + xx->size[0] * ((i2 + i5) + i6)];
          }

          i5 = Un->size[0] * Un->size[1];
          Un->size[0] = (int32_T)NSTATE;
          Un->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, Un, i5, &cb_emlrtRTEI);
          states_data = Un->data;
          for (i5 = 0; i5 < loop_ub_tmp; i5++) {
            states_data[i5] = b_xx_data[i5];
          }

          st.site = &jb_emlrtRSI;
          if (d8 > (real_T)((i3 - i2) - 1) + 1.0) {
            i5 = 0;
            i3 = 0;
          } else {
            i5 = i3 - i2;
            if (d8 != (int32_T)muDoubleScalarFloor(d8)) {
              emlrtIntegerCheckR2012b(d8, &sc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d8 < 1) || ((int32_T)d8 > i5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d8, 1, i5, &re_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i5 = (int32_T)d8 - 1;
            i6 = i3 - i2;
            i3 -= i2;
            if ((i3 < 1) || (i3 > i6)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, i6, &qe_emlrtBCI,
                (emlrtConstCTX)sp);
            }
          }

          st.site = &jb_emlrtRSI;
          b_nx_tmp = i3 - i5;
          b_st.site = &xb_emlrtRSI;
          assertValidSizeArg(&b_st, told);
          b_xx_size[0] = 1;
          b_xx_size[1] = b_nx_tmp;
          i6 = maxsize(b_xx_size);
          if ((int32_T)NSTATE > muIntScalarMax_sint32(b_nx_tmp, i6)) {
            emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
              "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }

          out = ((int32_T)NSTATE >= 0);
          if ((!out) || ((int32_T)NSTATE < 0)) {
            out = false;
          }

          if (!out) {
            emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
              "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
          }

          if (loop_ub_tmp != b_nx_tmp) {
            emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
              "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }

          st.site = &ib_emlrtRSI;
          for (i6 = 0; i6 < nx_tmp; i6++) {
            b_xx_data[i6] = xx_data[nx + xx->size[0] * ((i2 + i4) + i6)];
          }

          i4 = a->size[0] * a->size[1];
          a->size[0] = (int32_T)NSTATE;
          a->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(&st, a, i4, &fb_emlrtRTEI);
          a_data = a->data;
          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            a_data[i4] = -b_xx_data[i4];
          }

          b_xx[0] = (int32_T)NSTATE;
          b_xx[1] = (int32_T)NSTATE;
          b_tmp_data.data = &tmp_data[0];
          b_tmp_data.size = &b_xx[0];
          b_tmp_data.allocatedSize = 120;
          b_tmp_data.numDimensions = 2;
          b_tmp_data.canFreeData = false;
          b_st.site = &ib_emlrtRSI;
          inv(&b_st, &b_tmp_data, b);
          b_st.site = &bf_emlrtRSI;
          dynamic_size_checks(&b_st, a, b, a->size[1], b->size[0]);
          b_st.site = &af_emlrtRSI;
          mtimes(&b_st, a, b, QN);
          QN_data = QN->data;
          if (NSTATE < 1.0) {
            loop_ub = 0;
          } else {
            if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
              emlrtIntegerCheckR2012b(NSTATE, &rc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, xx->size[1],
                &oe_emlrtBCI, (emlrtConstCTX)sp);
            }

            loop_ub = (int32_T)NSTATE;
          }

          if (d9 > d10) {
            i4 = 0;
            i6 = 0;
          } else {
            if (d9 != (int32_T)muDoubleScalarFloor(d9)) {
              emlrtIntegerCheckR2012b(d9, &qc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d9 < 1) || ((int32_T)d9 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d9, 1, xx->size[1],
                &me_emlrtBCI, (emlrtConstCTX)sp);
            }

            i4 = (int32_T)d9 - 1;
            if (d10 != (int32_T)muDoubleScalarFloor(d10)) {
              emlrtIntegerCheckR2012b(d10, &pc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d10 < 1) || ((int32_T)d10 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d10, 1, xx->size[1],
                &le_emlrtBCI, (emlrtConstCTX)sp);
            }

            i6 = (int32_T)d10;
          }

          if (nx + 1 > xx->size[0]) {
            emlrtDynamicBoundsCheckR2012b(nx + 1, 1, xx->size[0], &pe_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          pf_size = loop_ub;
          for (i7 = 0; i7 < loop_ub; i7++) {
            pf_data[i7] = -xx_data[nx + xx->size[0] * i7];
          }

          if (nx + 1 > xx->size[0]) {
            emlrtDynamicBoundsCheckR2012b(nx + 1, 1, xx->size[0], &ne_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          i7 = i6 - i4;
          if ((pf_size != i7) && ((pf_size != 1) && (i7 != 1))) {
            emlrtDimSizeImpxCheckR2021b(pf_size, i7, &wb_emlrtECI,
              (emlrtConstCTX)sp);
          }

          if (pf_size == i7) {
            deltaX_size = pf_size;
            loop_ub = pf_size;
            for (i7 = 0; i7 < loop_ub; i7++) {
              deltaX_data[i7] = pf_data[i7] + xx_data[nx + xx->size[0] * (i4 +
                i7)];
            }
          } else {
            d_binary_expand_op(deltaX_data, &deltaX_size, pf_data, &pf_size, xx,
                               nx, i4, i6);
          }

          if (NSTATE + 1.0 > d11) {
            i7 = 0;
            i8 = 0;
          } else {
            if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
              emlrtIntegerCheckR2012b(NSTATE + 1.0, &oc_emlrtDCI, (emlrtConstCTX)
                sp);
            }

            if (((int32_T)(NSTATE + 1.0) < 1) || ((int32_T)(NSTATE + 1.0) >
                 xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1, xx->
                size[1], &je_emlrtBCI, (emlrtConstCTX)sp);
            }

            i7 = (int32_T)(NSTATE + 1.0) - 1;
            if (d11 != (int32_T)muDoubleScalarFloor(d11)) {
              emlrtIntegerCheckR2012b(d11, &nc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d11 < 1) || ((int32_T)d11 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d11, 1, xx->size[1],
                &ie_emlrtBCI, (emlrtConstCTX)sp);
            }

            i8 = (int32_T)d11;
          }

          st.site = &hb_emlrtRSI;
          b_st.site = &bf_emlrtRSI;
          dynamic_size_checks(&b_st, QN, Un, QN->size[1], (int32_T)NSTATE);
          b_st.site = &af_emlrtRSI;
          mtimes(&b_st, QN, Un, y);
          y_data = y->data;
          if (((int32_T)NSTATE != y->size[0]) && (((int32_T)NSTATE != 1) &&
               (y->size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, y->size[0],
              &vb_emlrtECI, (emlrtConstCTX)sp);
          }

          if (((int32_T)NSTATE != y->size[1]) && (((int32_T)NSTATE != 1) &&
               (y->size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, y->size[1],
              &ub_emlrtECI, (emlrtConstCTX)sp);
          }

          i9 = VN_min->size[0] * VN_min->size[1];
          VN_min->size[0] = QN->size[0];
          VN_min->size[1] = QN->size[1];
          emxEnsureCapacity_real_T(sp, VN_min, i9, &ib_emlrtRTEI);
          states_data = VN_min->data;
          loop_ub = QN->size[0] * QN->size[1];
          for (i9 = 0; i9 < loop_ub; i9++) {
            states_data[i9] = -QN_data[i9];
          }

          st.site = &hb_emlrtRSI;
          if (((int32_T)NSTATE == y->size[0]) && ((int32_T)NSTATE == y->size[1]))
          {
            for (i3 = 0; i3 < b_nx_tmp; i3++) {
              b_xx_data[i3] = xx_data[nx + xx->size[0] * ((i2 + i5) + i3)];
            }

            i2 = a->size[0] * a->size[1];
            a->size[0] = (int32_T)NSTATE;
            a->size[1] = (int32_T)NSTATE;
            emxEnsureCapacity_real_T(&st, a, i2, &jb_emlrtRTEI);
            a_data = a->data;
            for (i2 = 0; i2 < loop_ub_tmp; i2++) {
              a_data[i2] = b_xx_data[i2] + y_data[i2];
            }
          } else {
            b_st.site = &hb_emlrtRSI;
            c_binary_expand_op(&b_st, a, xx, nx, i2, i5, i3, told, y);
          }

          b_st.site = &bf_emlrtRSI;
          b_dynamic_size_checks(&b_st, a, a->size[1]);
          b_st.site = &af_emlrtRSI;
          b_mtimes(&b_st, a, b_boundary->Pigreco, b_y);
          st.site = &hb_emlrtRSI;
          b_xx[0] = (int32_T)NSTATE;
          b_xx[1] = (int32_T)NSTATE;
          c_tmp_data.data = &tmp_data[0];
          c_tmp_data.size = &b_xx[0];
          c_tmp_data.allocatedSize = 120;
          c_tmp_data.numDimensions = 2;
          c_tmp_data.canFreeData = false;
          b_st.site = &hb_emlrtRSI;
          inv(&b_st, &c_tmp_data, b);
          b_st.site = &bf_emlrtRSI;
          b_dynamic_size_checks(&b_st, b, b->size[0]);
          b_st.site = &af_emlrtRSI;
          c_mtimes(&b_st, b_boundary->Pigreco, b, c_y);
          st.site = &hb_emlrtRSI;
          b_st.site = &bf_emlrtRSI;
          c_dynamic_size_checks(&b_st, Un, c_y->size[1], (int32_T)NSTATE);
          b_st.site = &af_emlrtRSI;
          d_mtimes(&b_st, c_y, Un, d_y);
          y_data = d_y->data;
          st.site = &hb_emlrtRSI;
          b_st.site = &bf_emlrtRSI;
          if (d_y->size[1] != 5) {
            emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
              "MATLAB:innerdim", 0);
          }

          st.site = &hb_emlrtRSI;
          for (i2 = 0; i2 < 4; i2++) {
            for (i3 = 0; i3 < 4; i3++) {
              SIGN_per = 0.0;
              for (i5 = 0; i5 < 5; i5++) {
                SIGN_per += y_data[i2 + (i5 << 2)] * b_boundary->Pigreco[i5 + 5 *
                  i3];
              }

              h_y[i2 + (i3 << 2)] = SIGN_per;
            }
          }

          b_st.site = &hb_emlrtRSI;
          b_inv(&b_st, h_y, b_b);
          b_st.site = &af_emlrtRSI;
          e_mtimes(&b_st, b_y, b_b, e_y);
          st.site = &hb_emlrtRSI;
          b_st.site = &af_emlrtRSI;
          f_mtimes(&b_st, e_y, b_boundary->Pigreco, f_y);
          st.site = &hb_emlrtRSI;
          b_xx[0] = (int32_T)NSTATE;
          b_xx[1] = (int32_T)NSTATE;
          e_tmp_data.data = &tmp_data[0];
          e_tmp_data.size = &b_xx[0];
          e_tmp_data.allocatedSize = 120;
          e_tmp_data.numDimensions = 2;
          e_tmp_data.canFreeData = false;
          b_st.site = &hb_emlrtRSI;
          inv(&b_st, &e_tmp_data, b);
          b_st.site = &bf_emlrtRSI;
          b_dynamic_size_checks(&b_st, b, b->size[0]);
          b_st.site = &af_emlrtRSI;
          g_mtimes(&b_st, f_y, b, y);
          if ((VN_min->size[0] != y->size[0]) && ((VN_min->size[0] != 1) &&
               (y->size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b(VN_min->size[0], y->size[0],
              &tb_emlrtECI, (emlrtConstCTX)sp);
          }

          if ((VN_min->size[1] != y->size[1]) && ((VN_min->size[1] != 1) &&
               (y->size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b(VN_min->size[1], y->size[1],
              &sb_emlrtECI, (emlrtConstCTX)sp);
          }

          if (nx + 1 > xx->size[0]) {
            emlrtDynamicBoundsCheckR2012b(nx + 1, 1, xx->size[0], &ke_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          st.site = &hb_emlrtRSI;
          if ((VN_min->size[0] == y->size[0]) && (VN_min->size[1] == y->size[1]))
          {
            loop_ub = VN_min->size[0] * VN_min->size[1];
            i2 = y->size[0] * y->size[1];
            y->size[0] = VN_min->size[0];
            y->size[1] = VN_min->size[1];
            emxEnsureCapacity_real_T(&st, y, i2, &ib_emlrtRTEI);
            y_data = y->data;
            for (i2 = 0; i2 < loop_ub; i2++) {
              y_data[i2] += states_data[i2];
            }
          } else {
            b_st.site = &hb_emlrtRSI;
            b_binary_expand_op(&b_st, y, VN_min);
          }

          b_deltaX_data.data = &deltaX_data[0];
          b_deltaX_data.size = &deltaX_size;
          b_deltaX_data.allocatedSize = 121;
          b_deltaX_data.numDimensions = 1;
          b_deltaX_data.canFreeData = false;
          if (pf_size == 1) {
            i2 = i6 - i4;
          } else {
            i2 = pf_size;
          }

          b_st.site = &bf_emlrtRSI;
          d_dynamic_size_checks(&b_st, y, &b_deltaX_data, y->size[1], i2);
          c_deltaX_data.data = &deltaX_data[0];
          c_deltaX_data.size = &deltaX_size;
          c_deltaX_data.allocatedSize = 121;
          c_deltaX_data.numDimensions = 1;
          c_deltaX_data.canFreeData = false;
          b_st.site = &af_emlrtRSI;
          h_mtimes(&b_st, y, &c_deltaX_data, dydt_plus);
          states_data = dydt_plus->data;
          loop_ub = i8 - i7;
          if ((loop_ub != dydt_plus->size[0]) && ((loop_ub != 1) &&
               (dydt_plus->size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, dydt_plus->size[0],
              &rb_emlrtECI, (emlrtConstCTX)sp);
          }

          if (d12 > d13) {
            i2 = 0;
            i3 = 0;
          } else {
            if (d12 != (int32_T)muDoubleScalarFloor(d12)) {
              emlrtIntegerCheckR2012b(d12, &mc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d12 < 1) || ((int32_T)d12 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d12, 1, xx->size[1],
                &ge_emlrtBCI, (emlrtConstCTX)sp);
            }

            i2 = (int32_T)d12 - 1;
            if (d13 != (int32_T)muDoubleScalarFloor(d13)) {
              emlrtIntegerCheckR2012b(d13, &lc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d13 < 1) || ((int32_T)d13 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d13, 1, xx->size[1],
                &fe_emlrtBCI, (emlrtConstCTX)sp);
            }

            i3 = (int32_T)d13;
          }

          if (nx + 1 > xx->size[0]) {
            emlrtDynamicBoundsCheckR2012b(nx + 1, 1, xx->size[0], &he_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          if (loop_ub == dydt_plus->size[0]) {
            b_tmp_size[0] = 1;
            b_tmp_size[1] = loop_ub;
            for (i4 = 0; i4 < loop_ub; i4++) {
              f_tmp_data[i4] = xx_data[nx + xx->size[0] * (i7 + i4)] +
                states_data[i4];
            }
          } else {
            binary_expand_op(f_tmp_data, b_tmp_size, xx, nx, i7, i8, dydt_plus);
          }

          b_xx[0] = 1;
          b_xx[1] = i3 - i2;
          emlrtSubAssignSizeCheckR2012b(&b_xx[0], 2, &b_tmp_size[0], 2,
            &qb_emlrtECI, (emlrtCTX)sp);
          loop_ub = b_tmp_size[1];
          for (i3 = 0; i3 < loop_ub; i3++) {
            xx_data[nx + xx->size[0] * (i2 + i3)] = f_tmp_data[i3];
          }

          if (d14 > d10) {
            i2 = 0;
            i3 = 0;
          } else {
            if (d14 != (int32_T)muDoubleScalarFloor(d14)) {
              emlrtIntegerCheckR2012b(d14, &kc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d14 < 1) || ((int32_T)d14 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d14, 1, xx->size[1],
                &de_emlrtBCI, (emlrtConstCTX)sp);
            }

            i2 = (int32_T)d14 - 1;
            if (d10 != (int32_T)muDoubleScalarFloor(d10)) {
              emlrtIntegerCheckR2012b(d10, &jc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d10 < 1) || ((int32_T)d10 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d10, 1, xx->size[1],
                &ce_emlrtBCI, (emlrtConstCTX)sp);
            }

            i3 = (int32_T)d10;
          }

          if (d12 > d15) {
            i4 = 0;
            i5 = 0;
          } else {
            if (d12 != (int32_T)muDoubleScalarFloor(d12)) {
              emlrtIntegerCheckR2012b(d12, &ic_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d12 < 1) || ((int32_T)d12 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d12, 1, xx->size[1],
                &be_emlrtBCI, (emlrtConstCTX)sp);
            }

            i4 = (int32_T)d12 - 1;
            if (d15 != (int32_T)muDoubleScalarFloor(d15)) {
              emlrtIntegerCheckR2012b(d15, &hc_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d15 < 1) || ((int32_T)d15 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d15, 1, xx->size[1],
                &ae_emlrtBCI, (emlrtConstCTX)sp);
            }

            i5 = (int32_T)d15;
          }

          st.site = &gb_emlrtRSI;
          if (nx + 1 > xx->size[0]) {
            emlrtDynamicBoundsCheckR2012b(nx + 1, 1, xx->size[0], &ee_emlrtBCI,
              &st);
          }

          /*  Computes switching Function and its derivatives */
          /*  Definition of the Switching function and its derivatives with evaluation of the */
          /*  matlabFunction S_fun, S_x_fun, S_p_fun, S_xx_fun, S_pp_fun, S_xp_fun */
          /*  Input: */
          /*  x: state vector [NSTATEx1] */
          /*  p: costate vector [NSTATEx1] */
          /*  physical: structure of physical variables and functions */
          /*  Output: */
          /*  S: switching function */
          /*  Sd: switching function first derivatives */
          /*  Sdd: switching function second derivatives */
          loop_ub = i3 - i2;
          xx_size = loop_ub;
          for (i3 = 0; i3 < loop_ub; i3++) {
            c_xx_data[i3] = xx_data[nx + xx->size[0] * (i2 + i3)];
          }

          loop_ub = i5 - i4;
          pf_size = loop_ub;
          for (i2 = 0; i2 < loop_ub; i2++) {
            pf_data[i2] = xx_data[nx + xx->size[0] * (i4 + i2)];
          }

          if (nx + 1 > xx->size[0]) {
            emlrtDynamicBoundsCheckR2012b(nx + 1, 1, xx->size[0], &jf_emlrtBCI,
              &st);
          }

          if (xx->size[1] < 1) {
            emlrtDynamicBoundsCheckR2012b(xx->size[1], 1, xx->size[1],
              &kf_emlrtBCI, &st);
          }

          e_xx_data.data = &c_xx_data[0];
          e_xx_data.size = &xx_size;
          e_xx_data.allocatedSize = 121;
          e_xx_data.numDimensions = 1;
          e_xx_data.canFreeData = false;
          d_pf_data.data = &pf_data[0];
          d_pf_data.size = &pf_size;
          d_pf_data.allocatedSize = 121;
          d_pf_data.numDimensions = 1;
          d_pf_data.canFreeData = false;
          b_st.site = &tb_emlrtRSI;
          xx_data[nx + xx->size[0] * (xx->size[1] - 1)] = S_fun(&b_st,
            &e_xx_data, &d_pf_data, b_physical->Tmax, b_physical->c);
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }

        /*  Save states and times for output vector */
        index2 = (index1 + (real_T)tt->size[0]) - 1.0;
        if (xx->size[0] < 2) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = 1;
          i2 = xx->size[0];
        }

        SIGN_per = 2.0 * NSTATE + 1.0;
        Snew = 4.0 * NSTATE;
        if (SIGN_per > Snew) {
          i3 = 1;
          i4 = 0;
        } else {
          if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
            emlrtIntegerCheckR2012b(SIGN_per, &gc_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, xx->size[1],
              &yd_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = (int32_T)SIGN_per;
          if (Snew != (int32_T)muDoubleScalarFloor(Snew)) {
            emlrtIntegerCheckR2012b(Snew, &fc_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)Snew < 1) || ((int32_T)Snew > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)Snew, 1, xx->size[1],
              &xd_emlrtBCI, (emlrtConstCTX)sp);
          }

          i4 = (int32_T)Snew;
        }

        if (index1 + 1.0 > index2) {
          i5 = 0;
          i6 = 0;
        } else {
          if (((int32_T)(index1 + 1.0) < 1) || ((int32_T)(index1 + 1.0) >
               1000000)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
              &l_emlrtBCI, (emlrtConstCTX)sp);
          }

          i5 = (int32_T)(index1 + 1.0) - 1;
          if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
              &k_emlrtBCI, (emlrtConstCTX)sp);
          }

          i6 = (int32_T)index2;
        }

        b_xx[0] = i6 - i5;
        b_xx[1] = temps->size[1];
        nx = i2 - i1;
        c_xx[0] = nx;
        maxdimlen = i4 - i3;
        c_xx[1] = maxdimlen + 1;
        emlrtSubAssignSizeCheckR2012b(&b_xx[0], 2, &c_xx[0], 2, &f_emlrtECI,
          (emlrtCTX)sp);
        for (i2 = 0; i2 <= maxdimlen; i2++) {
          for (i4 = 0; i4 < nx; i4++) {
            temps_data[(i5 + i4) + 1000000 * i2] = xx_data[(i1 + i4) + xx->size
              [0] * ((i3 + i2) - 1)];
          }
        }

        if (tt->size[0] < 2) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = 1;
          i2 = tt->size[0];
        }

        if (index1 + 1.0 > index2) {
          i3 = 0;
          i4 = 0;
        } else {
          if (((int32_T)(index1 + 1.0) < 1) || ((int32_T)(index1 + 1.0) >
               1000000)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
              &f_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = (int32_T)(index1 + 1.0) - 1;
          if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
              &e_emlrtBCI, (emlrtConstCTX)sp);
          }

          i4 = (int32_T)index2;
        }

        i4 -= i3;
        loop_ub = i2 - i1;
        if (i4 != loop_ub) {
          emlrtSubAssignSizeCheck1dR2017a(i4, loop_ub, &c_emlrtECI,
            (emlrtConstCTX)sp);
        }

        for (i2 = 0; i2 < loop_ub; i2++) {
          SD->f1.tempt[i3 + i2] = tt_data[i1 + i2];
        }

        index1 = index2;
      } else {
        /*  switches with opposite sign: costate of perturbed */
        /*  trajectory is propagated using equations of motion */
        told[0] = b_told;
        if ((int32_T)b_i > NOG->tspan->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, NOG->tspan->size[0],
            &ff_emlrtBCI, (emlrtConstCTX)sp);
        }

        told[1] = NOG->tspan->data[(int32_T)b_i - 1];
        st.site = &fb_emlrtRSI;
        b_ode89(&st, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
                b_physical->shoot, b_physical->EPS, SIGN_nom, told, s0_data, i +
                21, tt, xx);
        xx_data = xx->data;
        tt_data = tt->data;

        /*  Save states and times for output vector */
        index2 = (index1 + (real_T)tt->size[0]) - 1.0;
        if (xx->size[0] < 2) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = 1;
          i2 = xx->size[0];
        }

        SIGN_per = 2.0 * NSTATE + 1.0;
        Snew = 4.0 * NSTATE;
        if (SIGN_per > Snew) {
          i3 = 1;
          i4 = 0;
        } else {
          if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
            emlrtIntegerCheckR2012b(SIGN_per, &ec_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, xx->size[1],
              &wd_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = (int32_T)SIGN_per;
          if (Snew != (int32_T)muDoubleScalarFloor(Snew)) {
            emlrtIntegerCheckR2012b(Snew, &dc_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)Snew < 1) || ((int32_T)Snew > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)Snew, 1, xx->size[1],
              &vd_emlrtBCI, (emlrtConstCTX)sp);
          }

          i4 = (int32_T)Snew;
        }

        if (index1 + 1.0 > index2) {
          i5 = 0;
          i6 = 0;
        } else {
          if (((int32_T)(index1 + 1.0) < 1) || ((int32_T)(index1 + 1.0) >
               1000000)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
              &j_emlrtBCI, (emlrtConstCTX)sp);
          }

          i5 = (int32_T)(index1 + 1.0) - 1;
          if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
              &i_emlrtBCI, (emlrtConstCTX)sp);
          }

          i6 = (int32_T)index2;
        }

        b_xx[0] = i6 - i5;
        b_xx[1] = temps->size[1];
        nx = i2 - i1;
        c_xx[0] = nx;
        maxdimlen = i4 - i3;
        c_xx[1] = maxdimlen + 1;
        emlrtSubAssignSizeCheckR2012b(&b_xx[0], 2, &c_xx[0], 2, &e_emlrtECI,
          (emlrtCTX)sp);
        for (i2 = 0; i2 <= maxdimlen; i2++) {
          for (i4 = 0; i4 < nx; i4++) {
            temps_data[(i5 + i4) + 1000000 * i2] = xx_data[(i1 + i4) + xx->size
              [0] * ((i3 + i2) - 1)];
          }
        }

        if (tt->size[0] < 2) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = 1;
          i2 = tt->size[0];
        }

        if (index1 + 1.0 > index2) {
          i3 = 0;
          i4 = 0;
        } else {
          if (((int32_T)(index1 + 1.0) < 1) || ((int32_T)(index1 + 1.0) >
               1000000)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
              &d_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = (int32_T)(index1 + 1.0) - 1;
          if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
              &c_emlrtBCI, (emlrtConstCTX)sp);
          }

          i4 = (int32_T)index2;
        }

        i4 -= i3;
        loop_ub = i2 - i1;
        if (i4 != loop_ub) {
          emlrtSubAssignSizeCheck1dR2017a(i4, loop_ub, &b_emlrtECI,
            (emlrtConstCTX)sp);
        }

        for (i2 = 0; i2 < loop_ub; i2++) {
          SD->f1.tempt[i3 + i2] = tt_data[i1 + i2];
        }

        index1 = index2;
      }

      if (tt->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0], &gf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      b_told = tt_data[tt->size[0] - 1];

      /*  When ode doesn't stop at a switching time of the nominal */
      /*  trajectory, the loop repeats using the previous final values */
      /*  as initial values (changing the perturbed switch sign only) */
      if (tt->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0], &hf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      if ((int32_T)b_i > NOG->tspan->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, NOG->tspan->size[0],
          &if_emlrtBCI, (emlrtConstCTX)sp);
      }

      if (tt_data[tt->size[0] - 1] != NOG->tspan->data[(int32_T)b_i - 1]) {
        /*  update od ode initial value */
        if (i + 21 < 1) {
          emlrtDynamicBoundsCheckR2012b(i + 21, 1, i + 21, &td_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &ud_emlrtBCI, (emlrtConstCTX)sp);
        }

        if (i + 21 != xx->size[1]) {
          emlrtSubAssignSizeCheck1dR2017a(i + 21, xx->size[1], &pb_emlrtECI,
            (emlrtConstCTX)sp);
        }

        for (i1 = 0; i1 < s0_size; i1++) {
          s0_data[i1] = xx_data[(xx->size[0] + xx->size[0] * i1) - 1];
        }

        if (d2 > 0.0) {
          /*  update of perturbed costate */
          if (muDoubleScalarAbs(s0_data[i + 20]) > 1.0E-9) {
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                &sd_emlrtBCI, (emlrtConstCTX)sp);
            }

            if (xx->size[1] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[1], 1, xx->size[1],
                &rd_emlrtBCI, (emlrtConstCTX)sp);
            }

            SIGN_per = muDoubleScalarSign(xx_data[(xx->size[0] + xx->size[0] *
              (xx->size[1] - 1)) - 1]);
          } else {
            d2 = 2.0 * NSTATE + 1.0;
            SIGN_per = 3.0 * NSTATE;
            if (d2 > SIGN_per) {
              i1 = 0;
              i2 = 0;
            } else {
              if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
                emlrtIntegerCheckR2012b(d2, &cc_emlrtDCI, (emlrtConstCTX)sp);
              }

              if (((int32_T)d2 < 1) || ((int32_T)d2 > i + 21)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i + 21,
                  &qd_emlrtBCI, (emlrtConstCTX)sp);
              }

              i1 = (int32_T)d2 - 1;
              if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
                emlrtIntegerCheckR2012b(SIGN_per, &bc_emlrtDCI, (emlrtConstCTX)
                  sp);
              }

              if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > i + 21)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, i + 21,
                  &pd_emlrtBCI, (emlrtConstCTX)sp);
              }

              i2 = (int32_T)SIGN_per;
            }

            b_xx[0] = 1;
            nx = i2 - i1;
            b_xx[1] = nx;
            st.site = &eb_emlrtRSI;
            indexShapeCheck(&st, i + 21, b_xx);
            d2 = 3.0 * NSTATE + 1.0;
            SIGN_per = 4.0 * NSTATE;
            if (d2 > SIGN_per) {
              i2 = 0;
              i3 = 0;
            } else {
              if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
                emlrtIntegerCheckR2012b(d2, &ac_emlrtDCI, (emlrtConstCTX)sp);
              }

              if (((int32_T)d2 < 1) || ((int32_T)d2 > i + 21)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i + 21,
                  &od_emlrtBCI, (emlrtConstCTX)sp);
              }

              i2 = (int32_T)d2 - 1;
              if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
                emlrtIntegerCheckR2012b(SIGN_per, &yb_emlrtDCI, (emlrtConstCTX)
                  sp);
              }

              if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > i + 21)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, i + 21,
                  &nd_emlrtBCI, (emlrtConstCTX)sp);
              }

              i3 = (int32_T)SIGN_per;
            }

            b_xx[0] = 1;
            maxdimlen = i3 - i2;
            b_xx[1] = maxdimlen;
            st.site = &eb_emlrtRSI;
            indexShapeCheck(&st, i + 21, b_xx);
            b_s0_size = nx;
            for (i3 = 0; i3 < nx; i3++) {
              b_s0_data[i3] = s0_data[i1 + i3];
            }

            pf_size = maxdimlen;
            for (i1 = 0; i1 < maxdimlen; i1++) {
              pf_data[i1] = s0_data[i2 + i1];
            }

            c_s0_data.data = &b_s0_data[0];
            c_s0_data.size = &b_s0_size;
            c_s0_data.allocatedSize = 121;
            c_s0_data.numDimensions = 1;
            c_s0_data.canFreeData = false;
            c_pf_data.data = &pf_data[0];
            c_pf_data.size = &pf_size;
            c_pf_data.allocatedSize = 121;
            c_pf_data.numDimensions = 1;
            c_pf_data.canFreeData = false;
            st.site = &eb_emlrtRSI;
            b_Switching_Function(&st, &c_s0_data, &c_pf_data, b_physical->Tmax,
                                 b_physical->c, b_physical->NSTATE,
                                 b_physical->shoot, b_physical->EPS, &Snew,
                                 &SIGN_per);
            SIGN_per = muDoubleScalarSign(SIGN_per);
          }
        } else {
          d2 = 4.0 * NSTATE + 1.0;
          if (d2 > (real_T)xx->size[1] - 1.0) {
            i1 = 0;
            i2 = 0;
          } else {
            if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
              emlrtIntegerCheckR2012b(d2, &xb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d2 < 1) || ((int32_T)d2 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, xx->size[1],
                &ld_emlrtBCI, (emlrtConstCTX)sp);
            }

            i1 = (int32_T)d2 - 1;
            if ((xx->size[1] - 1 < 1) || (xx->size[1] - 1 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b(xx->size[1] - 1, 1, xx->size[1],
                &kd_emlrtBCI, (emlrtConstCTX)sp);
            }

            i2 = xx->size[1] - 1;
          }

          if (xx->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
              &md_emlrtBCI, (emlrtConstCTX)sp);
          }

          st.site = &db_emlrtRSI;
          if (told_tmp < 1.0) {
            loop_ub = 0;
          } else {
            i3 = i2 - i1;
            if (i3 < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i3, &jd_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            if (told_tmp != (int32_T)muDoubleScalarFloor(told_tmp)) {
              emlrtIntegerCheckR2012b(told_tmp, &wb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)told_tmp < 1) || ((int32_T)told_tmp > i3)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)told_tmp, 1, i3,
                &id_emlrtBCI, (emlrtConstCTX)sp);
            }

            loop_ub = (int32_T)told_tmp;
          }

          tmp_size[0] = 1;
          tmp_size[1] = loop_ub;
          for (i3 = 0; i3 < loop_ub; i3++) {
            tmp_data[i3] = xx_data[(xx->size[0] + xx->size[0] * (i1 + i3)) - 1];
          }

          told[0] = NSTATE;
          told[1] = NSTATE;
          st.site = &db_emlrtRSI;
          b_st.site = &xb_emlrtRSI;
          assertValidSizeArg(&b_st, told);
          i3 = maxsize(tmp_size);
          if ((int32_T)NSTATE > muIntScalarMax_sint32(loop_ub, i3)) {
            emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
              "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }

          out = ((int32_T)NSTATE >= 0);
          if ((!out) || ((int32_T)NSTATE < 0)) {
            out = false;
          }

          if (!out) {
            emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
              "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
          }

          if ((int32_T)NSTATE * (int32_T)NSTATE != loop_ub) {
            emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
              "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }

          st.site = &cb_emlrtRSI;
          st.site = &cb_emlrtRSI;
          d2 = 2.0 * (NSTATE * NSTATE);
          if (NSTATE * NSTATE + 1.0 > d2) {
            i3 = 0;
            i4 = 0;
          } else {
            i3 = i2 - i1;
            SIGN_per = NSTATE * NSTATE + 1.0;
            if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
              emlrtIntegerCheckR2012b(SIGN_per, &vb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > i3)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, i3,
                &hd_emlrtBCI, (emlrtConstCTX)sp);
            }

            i3 = (int32_T)SIGN_per - 1;
            i4 = i2 - i1;
            if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
              emlrtIntegerCheckR2012b(d2, &ub_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d2 < 1) || ((int32_T)d2 > i4)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i4, &gd_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i4 = (int32_T)d2;
          }

          b_dv[0] = NSTATE;
          b_dv[1] = NSTATE;
          st.site = &cb_emlrtRSI;
          nx_tmp = i4 - i3;
          b_st.site = &xb_emlrtRSI;
          assertValidSizeArg(&b_st, b_dv);
          b_xx_size[0] = 1;
          b_xx_size[1] = nx_tmp;
          maxdimlen = maxsize(b_xx_size);
          if ((int32_T)NSTATE > muIntScalarMax_sint32(nx_tmp, maxdimlen)) {
            emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
              "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }

          out = ((int32_T)NSTATE >= 0);
          if ((!out) || ((int32_T)NSTATE < 0)) {
            out = false;
          }

          if (!out) {
            emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
              "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
          }

          if ((int32_T)NSTATE * (int32_T)NSTATE != nx_tmp) {
            emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
              "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }

          st.site = &bb_emlrtRSI;
          d2 = 2.0 * (NSTATE * NSTATE) + 1.0;
          st.site = &bb_emlrtRSI;
          SIGN_per = 3.0 * (NSTATE * NSTATE);
          if (d2 > SIGN_per) {
            i4 = 0;
            i5 = 0;
          } else {
            i4 = i2 - i1;
            if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
              emlrtIntegerCheckR2012b(d2, &tb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d2 < 1) || ((int32_T)d2 > i4)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i4, &fd_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i4 = (int32_T)d2 - 1;
            i5 = i2 - i1;
            if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
              emlrtIntegerCheckR2012b(SIGN_per, &sb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > i5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, i5,
                &ed_emlrtBCI, (emlrtConstCTX)sp);
            }

            i5 = (int32_T)SIGN_per;
          }

          b_dv1[0] = NSTATE;
          b_dv1[1] = NSTATE;
          st.site = &bb_emlrtRSI;
          b_nx_tmp = i5 - i4;
          b_st.site = &xb_emlrtRSI;
          assertValidSizeArg(&b_st, b_dv1);
          b_xx_size[0] = 1;
          b_xx_size[1] = b_nx_tmp;
          i5 = maxsize(b_xx_size);
          if ((int32_T)NSTATE > muIntScalarMax_sint32(b_nx_tmp, i5)) {
            emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
              "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }

          out = ((int32_T)NSTATE >= 0);
          if ((!out) || ((int32_T)NSTATE < 0)) {
            out = false;
          }

          if (!out) {
            emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
              "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
          }

          if ((int32_T)NSTATE * (int32_T)NSTATE != b_nx_tmp) {
            emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
              "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }

          for (i5 = 0; i5 < b_nx_tmp; i5++) {
            b_xx_data[i5] = xx_data[(xx->size[0] + xx->size[0] * ((i1 + i4) + i5))
              - 1];
          }

          i4 = Un->size[0] * Un->size[1];
          Un->size[0] = (int32_T)NSTATE;
          Un->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, Un, i4, &hb_emlrtRTEI);
          states_data = Un->data;
          nx = (int32_T)NSTATE * (int32_T)NSTATE;
          for (i4 = 0; i4 < nx; i4++) {
            states_data[i4] = b_xx_data[i4];
          }

          st.site = &ab_emlrtRSI;
          d2 = 3.0 * (NSTATE * NSTATE) + 1.0;
          if (d2 > (real_T)((i2 - i1) - 1) + 1.0) {
            i4 = 0;
            i2 = 0;
          } else {
            i4 = i2 - i1;
            if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
              emlrtIntegerCheckR2012b(d2, &rb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d2 < 1) || ((int32_T)d2 > i4)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i4, &dd_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i4 = (int32_T)d2 - 1;
            i5 = i2 - i1;
            i2 -= i1;
            if ((i2 < 1) || (i2 > i5)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i5, &cd_emlrtBCI,
                (emlrtConstCTX)sp);
            }
          }

          b_dv2[0] = NSTATE;
          b_dv2[1] = NSTATE;
          st.site = &ab_emlrtRSI;
          b_nx_tmp = i2 - i4;
          b_st.site = &xb_emlrtRSI;
          assertValidSizeArg(&b_st, b_dv2);
          b_xx_size[0] = 1;
          b_xx_size[1] = b_nx_tmp;
          i5 = maxsize(b_xx_size);
          if ((int32_T)NSTATE > muIntScalarMax_sint32(b_nx_tmp, i5)) {
            emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
              "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }

          out = ((int32_T)NSTATE >= 0);
          if ((!out) || ((int32_T)NSTATE < 0)) {
            out = false;
          }

          if (!out) {
            emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
              "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
          }

          if ((int32_T)NSTATE * (int32_T)NSTATE != b_nx_tmp) {
            emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
              "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }

          st.site = &y_emlrtRSI;
          for (i5 = 0; i5 < nx_tmp; i5++) {
            b_xx_data[i5] = xx_data[(xx->size[0] + xx->size[0] * ((i1 + i3) + i5))
              - 1];
          }

          i3 = a->size[0] * a->size[1];
          a->size[0] = (int32_T)NSTATE;
          a->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(&st, a, i3, &lb_emlrtRTEI);
          a_data = a->data;
          for (i3 = 0; i3 < nx; i3++) {
            a_data[i3] = -b_xx_data[i3];
          }

          b_xx[0] = (int32_T)NSTATE;
          b_xx[1] = (int32_T)NSTATE;
          d_tmp_data.data = &tmp_data[0];
          d_tmp_data.size = &b_xx[0];
          d_tmp_data.allocatedSize = 120;
          d_tmp_data.numDimensions = 2;
          d_tmp_data.canFreeData = false;
          b_st.site = &y_emlrtRSI;
          inv(&b_st, &d_tmp_data, b);
          b_st.site = &bf_emlrtRSI;
          dynamic_size_checks(&b_st, a, b, a->size[1], b->size[0]);
          b_st.site = &af_emlrtRSI;
          mtimes(&b_st, a, b, QN);
          QN_data = QN->data;
          if (NSTATE < 1.0) {
            loop_ub = 0;
          } else {
            if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
              emlrtIntegerCheckR2012b(NSTATE, &qb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, xx->size[1],
                &ad_emlrtBCI, (emlrtConstCTX)sp);
            }

            loop_ub = (int32_T)NSTATE;
          }

          d2 = 2.0 * NSTATE + 1.0;
          SIGN_per = 3.0 * NSTATE;
          if (d2 > SIGN_per) {
            i3 = 0;
            i5 = 0;
          } else {
            if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
              emlrtIntegerCheckR2012b(d2, &pb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d2 < 1) || ((int32_T)d2 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, xx->size[1],
                &xc_emlrtBCI, (emlrtConstCTX)sp);
            }

            i3 = (int32_T)d2 - 1;
            if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
              emlrtIntegerCheckR2012b(SIGN_per, &ob_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, xx->size[1],
                &wc_emlrtBCI, (emlrtConstCTX)sp);
            }

            i5 = (int32_T)SIGN_per;
          }

          if (xx->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
              &bd_emlrtBCI, (emlrtConstCTX)sp);
          }

          pf_size = loop_ub;
          for (i6 = 0; i6 < loop_ub; i6++) {
            pf_data[i6] = -xx_data[(xx->size[0] + xx->size[0] * i6) - 1];
          }

          if (xx->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
              &yc_emlrtBCI, (emlrtConstCTX)sp);
          }

          i6 = i5 - i3;
          if ((pf_size != i6) && ((pf_size != 1) && (i6 != 1))) {
            emlrtDimSizeImpxCheckR2021b(pf_size, i6, &ob_emlrtECI,
              (emlrtConstCTX)sp);
          }

          if (pf_size == i6) {
            deltaX_size = pf_size;
            loop_ub = pf_size;
            for (i6 = 0; i6 < loop_ub; i6++) {
              deltaX_data[i6] = pf_data[i6] + xx_data[(xx->size[0] + xx->size[0]
                * (i3 + i6)) - 1];
            }
          } else {
            g_binary_expand_op(deltaX_data, &deltaX_size, pf_data, &pf_size, xx,
                               i3, i5);
          }

          if (NSTATE + 1.0 > d) {
            i6 = 0;
            i7 = 0;
          } else {
            if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
              emlrtIntegerCheckR2012b(NSTATE + 1.0, &nb_emlrtDCI, (emlrtConstCTX)
                sp);
            }

            if (((int32_T)(NSTATE + 1.0) < 1) || ((int32_T)(NSTATE + 1.0) >
                 xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1, xx->
                size[1], &uc_emlrtBCI, (emlrtConstCTX)sp);
            }

            i6 = (int32_T)(NSTATE + 1.0) - 1;
            if (d != d1) {
              emlrtIntegerCheckR2012b(d, &mb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d < 1) || ((int32_T)d > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xx->size[1],
                &tc_emlrtBCI, (emlrtConstCTX)sp);
            }

            i7 = (int32_T)d;
          }

          st.site = &x_emlrtRSI;
          b_st.site = &bf_emlrtRSI;
          dynamic_size_checks(&b_st, QN, Un, QN->size[1], (int32_T)NSTATE);
          b_st.site = &af_emlrtRSI;
          mtimes(&b_st, QN, Un, y);
          y_data = y->data;
          if (((int32_T)NSTATE != y->size[0]) && (((int32_T)NSTATE != 1) &&
               (y->size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, y->size[0],
              &nb_emlrtECI, (emlrtConstCTX)sp);
          }

          if (((int32_T)NSTATE != y->size[1]) && (((int32_T)NSTATE != 1) &&
               (y->size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, y->size[1],
              &mb_emlrtECI, (emlrtConstCTX)sp);
          }

          i8 = VN_min->size[0] * VN_min->size[1];
          VN_min->size[0] = QN->size[0];
          VN_min->size[1] = QN->size[1];
          emxEnsureCapacity_real_T(sp, VN_min, i8, &mb_emlrtRTEI);
          states_data = VN_min->data;
          loop_ub = QN->size[0] * QN->size[1];
          for (i8 = 0; i8 < loop_ub; i8++) {
            states_data[i8] = -QN_data[i8];
          }

          st.site = &x_emlrtRSI;
          if (((int32_T)NSTATE == y->size[0]) && ((int32_T)NSTATE == y->size[1]))
          {
            for (i2 = 0; i2 < b_nx_tmp; i2++) {
              b_xx_data[i2] = xx_data[(xx->size[0] + xx->size[0] * ((i1 + i4) +
                i2)) - 1];
            }

            i1 = a->size[0] * a->size[1];
            a->size[0] = (int32_T)NSTATE;
            a->size[1] = (int32_T)NSTATE;
            emxEnsureCapacity_real_T(&st, a, i1, &ob_emlrtRTEI);
            a_data = a->data;
            for (i1 = 0; i1 < nx; i1++) {
              a_data[i1] = b_xx_data[i1] + y_data[i1];
            }
          } else {
            b_st.site = &x_emlrtRSI;
            f_binary_expand_op(&b_st, a, xx, i1, i4, i2, b_dv2, y);
          }

          b_st.site = &bf_emlrtRSI;
          b_dynamic_size_checks(&b_st, a, a->size[1]);
          b_st.site = &af_emlrtRSI;
          b_mtimes(&b_st, a, b_boundary->Pigreco, b_y);
          st.site = &x_emlrtRSI;
          b_xx[0] = (int32_T)NSTATE;
          b_xx[1] = (int32_T)NSTATE;
          g_tmp_data.data = &tmp_data[0];
          g_tmp_data.size = &b_xx[0];
          g_tmp_data.allocatedSize = 120;
          g_tmp_data.numDimensions = 2;
          g_tmp_data.canFreeData = false;
          b_st.site = &x_emlrtRSI;
          inv(&b_st, &g_tmp_data, b);
          b_st.site = &bf_emlrtRSI;
          b_dynamic_size_checks(&b_st, b, b->size[0]);
          b_st.site = &af_emlrtRSI;
          c_mtimes(&b_st, b_boundary->Pigreco, b, c_y);
          st.site = &x_emlrtRSI;
          b_st.site = &bf_emlrtRSI;
          c_dynamic_size_checks(&b_st, Un, c_y->size[1], (int32_T)NSTATE);
          b_st.site = &af_emlrtRSI;
          d_mtimes(&b_st, c_y, Un, d_y);
          y_data = d_y->data;
          st.site = &x_emlrtRSI;
          b_st.site = &bf_emlrtRSI;
          if (d_y->size[1] != 5) {
            emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
              "MATLAB:innerdim", 0);
          }

          st.site = &x_emlrtRSI;
          for (i1 = 0; i1 < 4; i1++) {
            for (i2 = 0; i2 < 4; i2++) {
              d2 = 0.0;
              for (i4 = 0; i4 < 5; i4++) {
                d2 += y_data[i1 + (i4 << 2)] * b_boundary->Pigreco[i4 + 5 * i2];
              }

              h_y[i1 + (i2 << 2)] = d2;
            }
          }

          b_st.site = &x_emlrtRSI;
          b_inv(&b_st, h_y, b_b);
          b_st.site = &af_emlrtRSI;
          e_mtimes(&b_st, b_y, b_b, e_y);
          st.site = &x_emlrtRSI;
          b_st.site = &af_emlrtRSI;
          f_mtimes(&b_st, e_y, b_boundary->Pigreco, f_y);
          st.site = &x_emlrtRSI;
          b_xx[0] = (int32_T)NSTATE;
          b_xx[1] = (int32_T)NSTATE;
          h_tmp_data.data = &tmp_data[0];
          h_tmp_data.size = &b_xx[0];
          h_tmp_data.allocatedSize = 120;
          h_tmp_data.numDimensions = 2;
          h_tmp_data.canFreeData = false;
          b_st.site = &x_emlrtRSI;
          inv(&b_st, &h_tmp_data, b);
          b_st.site = &bf_emlrtRSI;
          b_dynamic_size_checks(&b_st, b, b->size[0]);
          b_st.site = &af_emlrtRSI;
          g_mtimes(&b_st, f_y, b, y);
          if ((VN_min->size[0] != y->size[0]) && ((VN_min->size[0] != 1) &&
               (y->size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b(VN_min->size[0], y->size[0],
              &lb_emlrtECI, (emlrtConstCTX)sp);
          }

          if ((VN_min->size[1] != y->size[1]) && ((VN_min->size[1] != 1) &&
               (y->size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b(VN_min->size[1], y->size[1],
              &kb_emlrtECI, (emlrtConstCTX)sp);
          }

          if (xx->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
              &vc_emlrtBCI, (emlrtConstCTX)sp);
          }

          st.site = &x_emlrtRSI;
          if ((VN_min->size[0] == y->size[0]) && (VN_min->size[1] == y->size[1]))
          {
            loop_ub = VN_min->size[0] * VN_min->size[1];
            i1 = y->size[0] * y->size[1];
            y->size[0] = VN_min->size[0];
            y->size[1] = VN_min->size[1];
            emxEnsureCapacity_real_T(&st, y, i1, &mb_emlrtRTEI);
            y_data = y->data;
            for (i1 = 0; i1 < loop_ub; i1++) {
              y_data[i1] += states_data[i1];
            }
          } else {
            b_st.site = &x_emlrtRSI;
            b_binary_expand_op(&b_st, y, VN_min);
          }

          d_deltaX_data.data = &deltaX_data[0];
          d_deltaX_data.size = &deltaX_size;
          d_deltaX_data.allocatedSize = 121;
          d_deltaX_data.numDimensions = 1;
          d_deltaX_data.canFreeData = false;
          if (pf_size == 1) {
            i1 = i5 - i3;
          } else {
            i1 = pf_size;
          }

          b_st.site = &bf_emlrtRSI;
          d_dynamic_size_checks(&b_st, y, &d_deltaX_data, y->size[1], i1);
          e_deltaX_data.data = &deltaX_data[0];
          e_deltaX_data.size = &deltaX_size;
          e_deltaX_data.allocatedSize = 121;
          e_deltaX_data.numDimensions = 1;
          e_deltaX_data.canFreeData = false;
          b_st.site = &af_emlrtRSI;
          h_mtimes(&b_st, y, &e_deltaX_data, dydt_plus);
          states_data = dydt_plus->data;
          loop_ub = i7 - i6;
          if ((loop_ub != dydt_plus->size[0]) && ((loop_ub != 1) &&
               (dydt_plus->size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, dydt_plus->size[0],
              &jb_emlrtECI, (emlrtConstCTX)sp);
          }

          d2 = 2.0 * NSTATE + 1.0;
          SIGN_per = 3.0 * NSTATE;
          if (d2 > SIGN_per) {
            i1 = 0;
            i2 = 0;
          } else {
            if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
              emlrtIntegerCheckR2012b(d2, &lb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)d2 < 1) || ((int32_T)d2 > i + 21)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i + 21, &sc_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i1 = (int32_T)d2 - 1;
            if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
              emlrtIntegerCheckR2012b(SIGN_per, &kb_emlrtDCI, (emlrtConstCTX)sp);
            }

            if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > i + 21)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, i + 21,
                &rc_emlrtBCI, (emlrtConstCTX)sp);
            }

            i2 = (int32_T)SIGN_per;
          }

          b_xx[0] = 1;
          nx = i2 - i1;
          b_xx[1] = nx;
          st.site = &w_emlrtRSI;
          indexShapeCheck(&st, i + 21, b_xx);
          st.site = &w_emlrtRSI;

          /*  Computes switching Function and its derivatives */
          /*  Definition of the Switching function and its derivatives with evaluation of the */
          /*  matlabFunction S_fun, S_x_fun, S_p_fun, S_xx_fun, S_pp_fun, S_xp_fun */
          /*  Input: */
          /*  x: state vector [NSTATEx1] */
          /*  p: costate vector [NSTATEx1] */
          /*  physical: structure of physical variables and functions */
          /*  Output: */
          /*  S: switching function */
          /*  Sd: switching function first derivatives */
          /*  Sdd: switching function second derivatives */
          if (loop_ub == dydt_plus->size[0]) {
            b_s0_size = nx;
            for (i2 = 0; i2 < nx; i2++) {
              b_s0_data[i2] = s0_data[i1 + i2];
            }

            xx_size = loop_ub;
            for (i1 = 0; i1 < loop_ub; i1++) {
              c_xx_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i6 + i1)) -
                1] + states_data[i1];
            }

            d_s0_data.data = &b_s0_data[0];
            d_s0_data.size = &b_s0_size;
            d_s0_data.allocatedSize = 121;
            d_s0_data.numDimensions = 1;
            d_s0_data.canFreeData = false;
            f_xx_data.data = &c_xx_data[0];
            f_xx_data.size = &xx_size;
            f_xx_data.allocatedSize = 121;
            f_xx_data.numDimensions = 1;
            f_xx_data.canFreeData = false;
            b_st.site = &tb_emlrtRSI;
            SIGN_per = S_fun(&b_st, &d_s0_data, &f_xx_data, b_physical->Tmax,
                             b_physical->c);
          } else {
            b_st.site = &tb_emlrtRSI;
            SIGN_per = e_binary_expand_op(&b_st, tb_emlrtRSI, s0_data, i1, i2,
              xx, i6, i7, dydt_plus, b_physical);
          }

          SIGN_per = muDoubleScalarSign(SIGN_per);
        }
      } else {
        int32_T b_loop_ub;
        int32_T c_nx_tmp;

        /*  compute discontinuity jump */
        /*  extrapolate values befor jump */
        if (NSTATE < 1.0) {
          loop_ub = 0;
        } else {
          if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
            emlrtIntegerCheckR2012b(NSTATE, &jb_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, xx->size[1],
              &pc_emlrtBCI, (emlrtConstCTX)sp);
          }

          loop_ub = (int32_T)NSTATE;
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &qc_emlrtBCI, (emlrtConstCTX)sp);
        }

        if (NSTATE + 1.0 > d) {
          i1 = 0;
          i2 = 0;
        } else {
          if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
            emlrtIntegerCheckR2012b(NSTATE + 1.0, &ib_emlrtDCI, (emlrtConstCTX)
              sp);
          }

          if (((int32_T)(NSTATE + 1.0) < 1) || ((int32_T)(NSTATE + 1.0) >
               xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1, xx->size[1],
              &nc_emlrtBCI, (emlrtConstCTX)sp);
          }

          i1 = (int32_T)(NSTATE + 1.0) - 1;
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &hb_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d < 1) || ((int32_T)d > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xx->size[1],
              &mc_emlrtBCI, (emlrtConstCTX)sp);
          }

          i2 = (int32_T)d;
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &oc_emlrtBCI, (emlrtConstCTX)sp);
        }

        if (d < 1.0) {
          maxdimlen = 0;
        } else {
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &gb_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d < 1) || ((int32_T)d > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xx->size[1],
              &kc_emlrtBCI, (emlrtConstCTX)sp);
          }

          maxdimlen = (int32_T)d;
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &lc_emlrtBCI, (emlrtConstCTX)sp);
        }

        xx_size = maxdimlen;
        for (i3 = 0; i3 < maxdimlen; i3++) {
          c_xx_data[i3] = xx_data[(xx->size[0] + xx->size[0] * i3) - 1];
        }

        st.site = &v_emlrtRSI;
        derivatives(&st, c_xx_data, xx_size, b_physical->Tmax, b_physical->c,
                    b_physical->NSTATE, b_physical->shoot, b_physical->EPS,
                    SIGN_nom, tt);
        tt_data = tt->data;

        /*  extrapolate values after jump */
        xx_size = loop_ub;
        for (i3 = 0; i3 < loop_ub; i3++) {
          c_xx_data[i3] = xx_data[(xx->size[0] + xx->size[0] * i3) - 1];
        }

        loop_ub = i2 - i1;
        pf_size = loop_ub;
        for (i2 = 0; i2 < loop_ub; i2++) {
          pf_data[i2] = xx_data[(xx->size[0] + xx->size[0] * (i1 + i2)) - 1];
        }

        d_xx_data.data = &c_xx_data[0];
        d_xx_data.size = &xx_size;
        d_xx_data.allocatedSize = 121;
        d_xx_data.numDimensions = 1;
        d_xx_data.canFreeData = false;
        b_pf_data.data = &pf_data[0];
        b_pf_data.size = &pf_size;
        b_pf_data.allocatedSize = 121;
        b_pf_data.numDimensions = 1;
        b_pf_data.canFreeData = false;
        st.site = &u_emlrtRSI;
        b_Switching_Function(&st, &d_xx_data, &b_pf_data, b_physical->Tmax,
                             b_physical->c, b_physical->NSTATE,
                             b_physical->shoot, b_physical->EPS, &Snew, &dSdt);
        SIGN_nom = -SIGN_nom;
        d2 = 4.0 * NSTATE + 1.0;
        if (d2 > (real_T)xx->size[1] - 1.0) {
          i1 = 0;
          i2 = 0;
        } else {
          if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
            emlrtIntegerCheckR2012b(d2, &fb_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d2 < 1) || ((int32_T)d2 > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, xx->size[1],
              &ic_emlrtBCI, (emlrtConstCTX)sp);
          }

          i1 = (int32_T)d2 - 1;
          if ((xx->size[1] - 1 < 1) || (xx->size[1] - 1 > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b(xx->size[1] - 1, 1, xx->size[1],
              &hc_emlrtBCI, (emlrtConstCTX)sp);
          }

          i2 = xx->size[1] - 1;
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &jc_emlrtBCI, (emlrtConstCTX)sp);
        }

        if (d < 1.0) {
          loop_ub = 0;
        } else {
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &eb_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d < 1) || ((int32_T)d > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xx->size[1],
              &fc_emlrtBCI, (emlrtConstCTX)sp);
          }

          loop_ub = (int32_T)d;
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &gc_emlrtBCI, (emlrtConstCTX)sp);
        }

        xx_size = loop_ub;
        for (i3 = 0; i3 < loop_ub; i3++) {
          c_xx_data[i3] = xx_data[(xx->size[0] + xx->size[0] * i3) - 1];
        }

        st.site = &t_emlrtRSI;
        derivatives(&st, c_xx_data, xx_size, b_physical->Tmax, b_physical->c,
                    b_physical->NSTATE, b_physical->shoot, b_physical->EPS,
                    SIGN_nom, dydt_plus);
        states_data = dydt_plus->data;
        if (NSTATE < 1.0) {
          loop_ub = 0;
        } else {
          if (dydt_plus->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, dydt_plus->size[0], &ec_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
            emlrtIntegerCheckR2012b(NSTATE, &db_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > dydt_plus->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, dydt_plus->size[0],
              &dc_emlrtBCI, (emlrtConstCTX)sp);
          }

          loop_ub = (int32_T)NSTATE;
        }

        b_xx[0] = 1;
        b_xx[1] = loop_ub;
        st.site = &s_emlrtRSI;
        indexShapeCheck(&st, dydt_plus->size[0], b_xx);
        if (NSTATE < 1.0) {
          i3 = 0;
        } else {
          if (tt->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, tt->size[0], &cc_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
            emlrtIntegerCheckR2012b(NSTATE, &cb_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > tt->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, tt->size[0],
              &bc_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = (int32_T)NSTATE;
        }

        b_xx[0] = 1;
        b_xx[1] = i3;
        st.site = &s_emlrtRSI;
        indexShapeCheck(&st, tt->size[0], b_xx);
        if ((loop_ub != i3) && ((loop_ub != 1) && (i3 != 1))) {
          emlrtDimSizeImpxCheckR2021b(loop_ub, i3, &ib_emlrtECI, (emlrtConstCTX)
            sp);
        }

        Snew = muDoubleScalarSign(dSdt);
        if (loop_ub == i3) {
          i3 = deltax->size[0];
          deltax->size[0] = loop_ub;
          emxEnsureCapacity_real_T(sp, deltax, i3, &db_emlrtRTEI);
          deltax_data = deltax->data;
          for (i3 = 0; i3 < loop_ub; i3++) {
            deltax_data[i3] = Snew * (states_data[i3] - tt_data[i3]);
          }
        } else {
          st.site = &xn_emlrtRSI;
          m_binary_expand_op(&st, deltax, Snew, dydt_plus, loop_ub, tt, i3);
          deltax_data = deltax->data;
        }

        if (NSTATE + 1.0 > d) {
          i3 = 0;
          i4 = 0;
        } else {
          if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
            emlrtIntegerCheckR2012b(NSTATE + 1.0, &bb_emlrtDCI, (emlrtConstCTX)
              sp);
          }

          if (((int32_T)(NSTATE + 1.0) < 1) || ((int32_T)(NSTATE + 1.0) >
               dydt_plus->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1,
              dydt_plus->size[0], &ac_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = (int32_T)(NSTATE + 1.0) - 1;
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &ab_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d < 1) || ((int32_T)d > dydt_plus->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, dydt_plus->size[0],
              &yb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i4 = (int32_T)d;
        }

        b_xx[0] = 1;
        nx = i4 - i3;
        b_xx[1] = nx;
        st.site = &r_emlrtRSI;
        indexShapeCheck(&st, dydt_plus->size[0], b_xx);
        if (NSTATE + 1.0 > d) {
          i5 = 0;
          i6 = 0;
        } else {
          if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
            emlrtIntegerCheckR2012b(NSTATE + 1.0, &y_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)(NSTATE + 1.0) < 1) || ((int32_T)(NSTATE + 1.0) >
               tt->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1, tt->size[0],
              &xb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i5 = (int32_T)(NSTATE + 1.0) - 1;
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &x_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d < 1) || ((int32_T)d > tt->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, tt->size[0],
              &wb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i6 = (int32_T)d;
        }

        b_xx[0] = 1;
        maxdimlen = i6 - i5;
        b_xx[1] = maxdimlen;
        st.site = &r_emlrtRSI;
        indexShapeCheck(&st, tt->size[0], b_xx);
        if ((nx != maxdimlen) && ((nx != 1) && (maxdimlen != 1))) {
          emlrtDimSizeImpxCheckR2021b(nx, maxdimlen, &hb_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (nx == maxdimlen) {
          for (i4 = 0; i4 < nx; i4++) {
            tt_data[i4] = -Snew * (states_data[i3 + i4] - tt_data[i5 + i4]);
          }

          i3 = tt->size[0];
          tt->size[0] = nx;
          emxEnsureCapacity_real_T(sp, tt, i3, &eb_emlrtRTEI);
          tt_data = tt->data;
        } else {
          st.site = &xn_emlrtRSI;
          l_binary_expand_op(&st, tt, Snew, dydt_plus, i3, i4, i5, i6);
          tt_data = tt->data;
        }

        st.site = &q_emlrtRSI;
        if (told_tmp < 1.0) {
          loop_ub = 0;
        } else {
          i3 = i2 - i1;
          if (i3 < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i3, &vb_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          if (told_tmp != (int32_T)muDoubleScalarFloor(told_tmp)) {
            emlrtIntegerCheckR2012b(told_tmp, &w_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)told_tmp < 1) || ((int32_T)told_tmp > i3)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)told_tmp, 1, i3, &ub_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          loop_ub = (int32_T)told_tmp;
        }

        told[0] = NSTATE;
        told[1] = NSTATE;
        st.site = &q_emlrtRSI;
        b_st.site = &xb_emlrtRSI;
        assertValidSizeArg(&b_st, told);
        b_xx_size[0] = 1;
        b_xx_size[1] = loop_ub;
        maxdimlen = maxsize(b_xx_size);
        if ((int32_T)NSTATE > muIntScalarMax_sint32(loop_ub, maxdimlen)) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        out = ((int32_T)NSTATE >= 0);
        if ((!out) || ((int32_T)NSTATE < 0)) {
          out = false;
        }

        if (!out) {
          emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
            "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }

        if ((int32_T)NSTATE * (int32_T)NSTATE != loop_ub) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        for (i3 = 0; i3 < loop_ub; i3++) {
          b_xx_data[i3] = xx_data[(xx->size[0] + xx->size[0] * (i1 + i3)) - 1];
        }

        i3 = Un->size[0] * Un->size[1];
        Un->size[0] = (int32_T)NSTATE;
        Un->size[1] = (int32_T)NSTATE;
        emxEnsureCapacity_real_T(sp, Un, i3, &gb_emlrtRTEI);
        states_data = Un->data;
        nx = (int32_T)NSTATE * (int32_T)NSTATE;
        for (i3 = 0; i3 < nx; i3++) {
          states_data[i3] = b_xx_data[i3];
        }

        st.site = &p_emlrtRSI;
        st.site = &p_emlrtRSI;
        d2 = 2.0 * (NSTATE * NSTATE);
        if (NSTATE * NSTATE + 1.0 > d2) {
          i3 = 0;
          i4 = 0;
        } else {
          i3 = i2 - i1;
          SIGN_per = NSTATE * NSTATE + 1.0;
          if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
            emlrtIntegerCheckR2012b(SIGN_per, &v_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > i3)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, i3, &tb_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          i3 = (int32_T)SIGN_per - 1;
          i4 = i2 - i1;
          if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
            emlrtIntegerCheckR2012b(d2, &u_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d2 < 1) || ((int32_T)d2 > i4)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i4, &sb_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          i4 = (int32_T)d2;
        }

        b_dv[0] = NSTATE;
        b_dv[1] = NSTATE;
        st.site = &p_emlrtRSI;
        nx_tmp = i4 - i3;
        b_st.site = &xb_emlrtRSI;
        assertValidSizeArg(&b_st, b_dv);
        b_xx_size[0] = 1;
        b_xx_size[1] = nx_tmp;
        i5 = maxsize(b_xx_size);
        if ((int32_T)NSTATE > muIntScalarMax_sint32(nx_tmp, i5)) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        out = ((int32_T)NSTATE >= 0);
        if ((!out) || ((int32_T)NSTATE < 0)) {
          out = false;
        }

        if (!out) {
          emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
            "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }

        if ((int32_T)NSTATE * (int32_T)NSTATE != nx_tmp) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        for (i5 = 0; i5 < nx_tmp; i5++) {
          b_xx_data[i5] = xx_data[(xx->size[0] + xx->size[0] * ((i1 + i3) + i5))
            - 1];
        }

        i5 = VN_min->size[0] * VN_min->size[1];
        VN_min->size[0] = (int32_T)NSTATE;
        VN_min->size[1] = (int32_T)NSTATE;
        emxEnsureCapacity_real_T(sp, VN_min, i5, &kb_emlrtRTEI);
        states_data = VN_min->data;
        for (i5 = 0; i5 < nx; i5++) {
          states_data[i5] = b_xx_data[i5];
        }

        st.site = &o_emlrtRSI;
        d2 = 2.0 * (NSTATE * NSTATE) + 1.0;
        st.site = &o_emlrtRSI;
        SIGN_per = 3.0 * (NSTATE * NSTATE);
        if (d2 > SIGN_per) {
          i5 = 0;
          i6 = 0;
        } else {
          i5 = i2 - i1;
          if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
            emlrtIntegerCheckR2012b(d2, &t_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d2 < 1) || ((int32_T)d2 > i5)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i5, &rb_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          i5 = (int32_T)d2 - 1;
          i6 = i2 - i1;
          if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
            emlrtIntegerCheckR2012b(SIGN_per, &s_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > i6)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, i6, &qb_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          i6 = (int32_T)SIGN_per;
        }

        b_dv1[0] = NSTATE;
        b_dv1[1] = NSTATE;
        st.site = &o_emlrtRSI;
        b_nx_tmp = i6 - i5;
        b_st.site = &xb_emlrtRSI;
        assertValidSizeArg(&b_st, b_dv1);
        b_xx_size[0] = 1;
        b_xx_size[1] = b_nx_tmp;
        i7 = maxsize(b_xx_size);
        if ((int32_T)NSTATE > muIntScalarMax_sint32(b_nx_tmp, i7)) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        out = ((int32_T)NSTATE >= 0);
        if ((!out) || ((int32_T)NSTATE < 0)) {
          out = false;
        }

        if (!out) {
          emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
            "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }

        if ((int32_T)NSTATE * (int32_T)NSTATE != b_nx_tmp) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        for (i7 = 0; i7 < b_nx_tmp; i7++) {
          b_xx_data[i7] = xx_data[(xx->size[0] + xx->size[0] * ((i1 + i5) + i7))
            - 1];
        }

        i7 = Un_min->size[0] * Un_min->size[1];
        Un_min->size[0] = (int32_T)NSTATE;
        Un_min->size[1] = (int32_T)NSTATE;
        emxEnsureCapacity_real_T(sp, Un_min, i7, &nb_emlrtRTEI);
        states_data = Un_min->data;
        for (i7 = 0; i7 < nx; i7++) {
          states_data[i7] = b_xx_data[i7];
        }

        st.site = &n_emlrtRSI;
        d2 = 3.0 * (NSTATE * NSTATE) + 1.0;
        if (d2 > (real_T)((i2 - i1) - 1) + 1.0) {
          i7 = 0;
          i2 = 0;
        } else {
          i7 = i2 - i1;
          if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
            emlrtIntegerCheckR2012b(d2, &r_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d2 < 1) || ((int32_T)d2 > i7)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i7, &pb_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          i7 = (int32_T)d2 - 1;
          i8 = i2 - i1;
          i2 -= i1;
          if ((i2 < 1) || (i2 > i8)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i8, &ob_emlrtBCI,
              (emlrtConstCTX)sp);
          }
        }

        b_dv2[0] = NSTATE;
        b_dv2[1] = NSTATE;
        st.site = &n_emlrtRSI;
        c_nx_tmp = i2 - i7;
        b_st.site = &xb_emlrtRSI;
        assertValidSizeArg(&b_st, b_dv2);
        b_xx_size[0] = 1;
        b_xx_size[1] = c_nx_tmp;
        i8 = maxsize(b_xx_size);
        if ((int32_T)NSTATE > muIntScalarMax_sint32(c_nx_tmp, i8)) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        out = ((int32_T)NSTATE >= 0);
        if ((!out) || ((int32_T)NSTATE < 0)) {
          out = false;
        }

        if (!out) {
          emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
            "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }

        if ((int32_T)NSTATE * (int32_T)NSTATE != c_nx_tmp) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        for (i8 = 0; i8 < c_nx_tmp; i8++) {
          b_xx_data[i8] = xx_data[(xx->size[0] + xx->size[0] * ((i1 + i7) + i8))
            - 1];
        }

        i8 = Vn_min->size[0] * Vn_min->size[1];
        Vn_min->size[0] = (int32_T)NSTATE;
        Vn_min->size[1] = (int32_T)NSTATE;
        emxEnsureCapacity_real_T(sp, Vn_min, i8, &pb_emlrtRTEI);
        states_data = Vn_min->data;
        for (i8 = 0; i8 < nx; i8++) {
          states_data[i8] = b_xx_data[i8];
        }

        i8 = a->size[0] * a->size[1];
        a->size[0] = deltax->size[0];
        a->size[1] = tt->size[0];
        emxEnsureCapacity_real_T(sp, a, i8, &qb_emlrtRTEI);
        a_data = a->data;
        maxdimlen = tt->size[0];
        for (i8 = 0; i8 < maxdimlen; i8++) {
          b_loop_ub = deltax->size[0];
          for (i9 = 0; i9 < b_loop_ub; i9++) {
            a_data[i9 + a->size[0] * i8] = deltax_data[i9] * tt_data[i8];
          }
        }

        st.site = &m_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, a, Un, a->size[1], (int32_T)NSTATE);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, a, Un, y);
        y_data = y->data;
        i8 = b->size[0] * b->size[1];
        b->size[0] = deltax->size[0];
        b->size[1] = deltax->size[0];
        emxEnsureCapacity_real_T(sp, b, i8, &qb_emlrtRTEI);
        states_data = b->data;
        maxdimlen = deltax->size[0];
        for (i8 = 0; i8 < maxdimlen; i8++) {
          b_loop_ub = deltax->size[0];
          for (i9 = 0; i9 < b_loop_ub; i9++) {
            states_data[i9 + b->size[0] * i8] = deltax_data[i9] * deltax_data[i8];
          }
        }

        st.site = &m_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, b, VN_min, b->size[1], (int32_T)NSTATE);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, b, VN_min, QN);
        QN_data = QN->data;
        if ((y->size[0] != QN->size[0]) && ((y->size[0] != 1) && (QN->size[0] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(y->size[0], QN->size[0], &gb_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((y->size[1] != QN->size[1]) && ((y->size[1] != 1) && (QN->size[1] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(y->size[1], QN->size[1], &fb_emlrtECI,
            (emlrtConstCTX)sp);
        }

        d2 = muDoubleScalarAbs(dSdt);
        if ((y->size[0] == QN->size[0]) && (y->size[1] == QN->size[1])) {
          i8 = r->size[0] * r->size[1];
          r->size[0] = y->size[0];
          r->size[1] = y->size[1];
          emxEnsureCapacity_real_T(sp, r, i8, &rb_emlrtRTEI);
          states_data = r->data;
          maxdimlen = y->size[0] * y->size[1];
          for (i8 = 0; i8 < maxdimlen; i8++) {
            states_data[i8] = (y_data[i8] - QN_data[i8]) / d2;
          }
        } else {
          st.site = &m_emlrtRSI;
          j_binary_expand_op(&st, r, y, QN, d2);
          states_data = r->data;
        }

        if (((int32_T)NSTATE != r->size[0]) && (((int32_T)NSTATE != 1) &&
             (r->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[0], &eb_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (((int32_T)NSTATE != r->size[1]) && (((int32_T)NSTATE != 1) &&
             (r->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[1], &db_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (((int32_T)NSTATE == r->size[0]) && ((int32_T)NSTATE == r->size[1]))
        {
          for (i8 = 0; i8 < loop_ub; i8++) {
            b_xx_data[i8] = xx_data[(xx->size[0] + xx->size[0] * (i1 + i8)) - 1];
          }

          i8 = UN_plus->size[0] * UN_plus->size[1];
          UN_plus->size[0] = (int32_T)NSTATE;
          UN_plus->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, UN_plus, i8, &sb_emlrtRTEI);
          UN_plus_data = UN_plus->data;
          for (i8 = 0; i8 < nx; i8++) {
            UN_plus_data[i8] = b_xx_data[i8] - states_data[i8];
          }
        } else {
          st.site = &m_emlrtRSI;
          k_binary_expand_op(&st, UN_plus, xx, i1, loop_ub - 1, told, r);
          UN_plus_data = UN_plus->data;
        }

        i8 = y_tmp->size[0] * y_tmp->size[1];
        y_tmp->size[0] = tt->size[0];
        y_tmp->size[1] = tt->size[0];
        emxEnsureCapacity_real_T(sp, y_tmp, i8, &qb_emlrtRTEI);
        states_data = y_tmp->data;
        loop_ub = tt->size[0];
        for (i8 = 0; i8 < loop_ub; i8++) {
          maxdimlen = tt->size[0];
          for (i9 = 0; i9 < maxdimlen; i9++) {
            states_data[i9 + y_tmp->size[0] * i8] = tt_data[i9] * tt_data[i8];
          }
        }

        st.site = &l_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, y_tmp, Un, y_tmp->size[1], (int32_T)NSTATE);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, y_tmp, Un, y);
        y_data = y->data;
        i8 = b_y_tmp->size[0] * b_y_tmp->size[1];
        b_y_tmp->size[0] = tt->size[0];
        b_y_tmp->size[1] = deltax->size[0];
        emxEnsureCapacity_real_T(sp, b_y_tmp, i8, &qb_emlrtRTEI);
        states_data = b_y_tmp->data;
        loop_ub = deltax->size[0];
        for (i8 = 0; i8 < loop_ub; i8++) {
          maxdimlen = tt->size[0];
          for (i9 = 0; i9 < maxdimlen; i9++) {
            states_data[i9 + b_y_tmp->size[0] * i8] = tt_data[i9] *
              deltax_data[i8];
          }
        }

        st.site = &l_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, b_y_tmp, VN_min, b_y_tmp->size[1], (int32_T)
                            NSTATE);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, b_y_tmp, VN_min, QN);
        QN_data = QN->data;
        if ((y->size[0] != QN->size[0]) && ((y->size[0] != 1) && (QN->size[0] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(y->size[0], QN->size[0], &cb_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((y->size[1] != QN->size[1]) && ((y->size[1] != 1) && (QN->size[1] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(y->size[1], QN->size[1], &bb_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((y->size[0] == QN->size[0]) && (y->size[1] == QN->size[1])) {
          i8 = r->size[0] * r->size[1];
          r->size[0] = y->size[0];
          r->size[1] = y->size[1];
          emxEnsureCapacity_real_T(sp, r, i8, &tb_emlrtRTEI);
          states_data = r->data;
          loop_ub = y->size[0] * y->size[1];
          for (i8 = 0; i8 < loop_ub; i8++) {
            states_data[i8] = (y_data[i8] - QN_data[i8]) / d2;
          }
        } else {
          st.site = &l_emlrtRSI;
          j_binary_expand_op(&st, r, y, QN, d2);
          states_data = r->data;
        }

        if (((int32_T)NSTATE != r->size[0]) && (((int32_T)NSTATE != 1) &&
             (r->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[0], &ab_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (((int32_T)NSTATE != r->size[1]) && (((int32_T)NSTATE != 1) &&
             (r->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[1], &y_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (((int32_T)NSTATE == r->size[0]) && ((int32_T)NSTATE == r->size[1]))
        {
          for (i4 = 0; i4 < nx_tmp; i4++) {
            b_xx_data[i4] = xx_data[(xx->size[0] + xx->size[0] * ((i1 + i3) + i4))
              - 1];
          }

          i3 = VN_plus->size[0] * VN_plus->size[1];
          VN_plus->size[0] = (int32_T)NSTATE;
          VN_plus->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, VN_plus, i3, &ub_emlrtRTEI);
          deltax_data = VN_plus->data;
          for (i3 = 0; i3 < nx; i3++) {
            deltax_data[i3] = b_xx_data[i3] - states_data[i3];
          }
        } else {
          st.site = &l_emlrtRSI;
          i_binary_expand_op(&st, VN_plus, xx, i1, i3, i4 - 1, b_dv, r);
          deltax_data = VN_plus->data;
        }

        st.site = &k_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, a, Un_min, a->size[1], (int32_T)NSTATE);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, a, Un_min, y);
        y_data = y->data;
        st.site = &k_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, b, Vn_min, b->size[1], (int32_T)NSTATE);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, b, Vn_min, QN);
        QN_data = QN->data;
        if ((y->size[0] != QN->size[0]) && ((y->size[0] != 1) && (QN->size[0] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(y->size[0], QN->size[0], &x_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((y->size[1] != QN->size[1]) && ((y->size[1] != 1) && (QN->size[1] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(y->size[1], QN->size[1], &w_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((y->size[0] == QN->size[0]) && (y->size[1] == QN->size[1])) {
          i3 = r->size[0] * r->size[1];
          r->size[0] = y->size[0];
          r->size[1] = y->size[1];
          emxEnsureCapacity_real_T(sp, r, i3, &vb_emlrtRTEI);
          states_data = r->data;
          loop_ub = y->size[0] * y->size[1];
          for (i3 = 0; i3 < loop_ub; i3++) {
            states_data[i3] = (y_data[i3] - QN_data[i3]) / d2;
          }
        } else {
          st.site = &k_emlrtRSI;
          j_binary_expand_op(&st, r, y, QN, d2);
          states_data = r->data;
        }

        if (((int32_T)NSTATE != r->size[0]) && (((int32_T)NSTATE != 1) &&
             (r->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[0], &v_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (((int32_T)NSTATE != r->size[1]) && (((int32_T)NSTATE != 1) &&
             (r->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[1], &u_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (((int32_T)NSTATE == r->size[0]) && ((int32_T)NSTATE == r->size[1]))
        {
          for (i3 = 0; i3 < b_nx_tmp; i3++) {
            b_xx_data[i3] = xx_data[(xx->size[0] + xx->size[0] * ((i1 + i5) + i3))
              - 1];
          }

          i3 = Un_plus->size[0] * Un_plus->size[1];
          Un_plus->size[0] = (int32_T)NSTATE;
          Un_plus->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, Un_plus, i3, &wb_emlrtRTEI);
          Un_plus_data = Un_plus->data;
          for (i3 = 0; i3 < nx; i3++) {
            Un_plus_data[i3] = b_xx_data[i3] - states_data[i3];
          }
        } else {
          st.site = &k_emlrtRSI;
          i_binary_expand_op(&st, Un_plus, xx, i1, i5, i6 - 1, b_dv1, r);
          Un_plus_data = Un_plus->data;
        }

        st.site = &j_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, y_tmp, Un_min, y_tmp->size[1], (int32_T)
                            NSTATE);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, y_tmp, Un_min, y);
        y_data = y->data;
        st.site = &j_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, b_y_tmp, Vn_min, b_y_tmp->size[1], (int32_T)
                            NSTATE);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, b_y_tmp, Vn_min, QN);
        QN_data = QN->data;
        if ((y->size[0] != QN->size[0]) && ((y->size[0] != 1) && (QN->size[0] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(y->size[0], QN->size[0], &t_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((y->size[1] != QN->size[1]) && ((y->size[1] != 1) && (QN->size[1] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(y->size[1], QN->size[1], &s_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((y->size[0] == QN->size[0]) && (y->size[1] == QN->size[1])) {
          i3 = r->size[0] * r->size[1];
          r->size[0] = y->size[0];
          r->size[1] = y->size[1];
          emxEnsureCapacity_real_T(sp, r, i3, &xb_emlrtRTEI);
          states_data = r->data;
          loop_ub = y->size[0] * y->size[1];
          for (i3 = 0; i3 < loop_ub; i3++) {
            states_data[i3] = (y_data[i3] - QN_data[i3]) / d2;
          }
        } else {
          st.site = &j_emlrtRSI;
          j_binary_expand_op(&st, r, y, QN, d2);
          states_data = r->data;
        }

        if (((int32_T)NSTATE != r->size[0]) && (((int32_T)NSTATE != 1) &&
             (r->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[0], &r_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (((int32_T)NSTATE != r->size[1]) && (((int32_T)NSTATE != 1) &&
             (r->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[1], &q_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (((int32_T)NSTATE == r->size[0]) && ((int32_T)NSTATE == r->size[1]))
        {
          for (i2 = 0; i2 < c_nx_tmp; i2++) {
            b_xx_data[i2] = xx_data[(xx->size[0] + xx->size[0] * ((i1 + i7) + i2))
              - 1];
          }

          i1 = Vn_plus->size[0] * Vn_plus->size[1];
          Vn_plus->size[0] = (int32_T)NSTATE;
          Vn_plus->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, Vn_plus, i1, &ac_emlrtRTEI);
          Vn_plus_data = Vn_plus->data;
          for (i1 = 0; i1 < nx; i1++) {
            Vn_plus_data[i1] = b_xx_data[i1] - states_data[i1];
          }
        } else {
          st.site = &j_emlrtRSI;
          i_binary_expand_op(&st, Vn_plus, xx, i1, i7, i2 - 1, b_dv2, r);
          Vn_plus_data = Vn_plus->data;
        }

        /*  new switch of perturbed trajectory */
        st.site = &i_emlrtRSI;
        i1 = a->size[0] * a->size[1];
        a->size[0] = VN_plus->size[0];
        a->size[1] = VN_plus->size[1];
        emxEnsureCapacity_real_T(&st, a, i1, &yb_emlrtRTEI);
        a_data = a->data;
        loop_ub = VN_plus->size[0] * VN_plus->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          a_data[i1] = -deltax_data[i1];
        }

        b_st.site = &i_emlrtRSI;
        inv(&b_st, UN_plus, b);
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, a, b, a->size[1], b->size[0]);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, a, b, QN);
        QN_data = QN->data;
        if (NSTATE < 1.0) {
          loop_ub = 0;
        } else {
          if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
            emlrtIntegerCheckR2012b(NSTATE, &q_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, xx->size[1],
              &mb_emlrtBCI, (emlrtConstCTX)sp);
          }

          loop_ub = (int32_T)NSTATE;
        }

        d2 = 2.0 * NSTATE + 1.0;
        SIGN_per = 3.0 * NSTATE;
        if (d2 > SIGN_per) {
          i1 = 0;
          i2 = 0;
        } else {
          if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
            emlrtIntegerCheckR2012b(d2, &p_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d2 < 1) || ((int32_T)d2 > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, xx->size[1],
              &kb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i1 = (int32_T)d2 - 1;
          if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
            emlrtIntegerCheckR2012b(SIGN_per, &o_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, xx->size[1],
              &jb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i2 = (int32_T)SIGN_per;
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &nb_emlrtBCI, (emlrtConstCTX)sp);
        }

        pf_size = loop_ub;
        for (i3 = 0; i3 < loop_ub; i3++) {
          pf_data[i3] = -xx_data[(xx->size[0] + xx->size[0] * i3) - 1];
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &lb_emlrtBCI, (emlrtConstCTX)sp);
        }

        i3 = i2 - i1;
        if ((pf_size != i3) && ((pf_size != 1) && (i3 != 1))) {
          emlrtDimSizeImpxCheckR2021b(pf_size, i3, &p_emlrtECI, (emlrtConstCTX)
            sp);
        }

        if (pf_size == i3) {
          deltaX_size = pf_size;
          loop_ub = pf_size;
          for (i3 = 0; i3 < loop_ub; i3++) {
            deltaX_data[i3] = pf_data[i3] + xx_data[(xx->size[0] + xx->size[0] *
              (i1 + i3)) - 1];
          }
        } else {
          g_binary_expand_op(deltaX_data, &deltaX_size, pf_data, &pf_size, xx,
                             i1, i2);
        }

        /*                  lam_per = xx(end,3*NSTATE+1:4*NSTATE)'; */
        if (NSTATE + 1.0 > d) {
          i3 = 0;
          i4 = 0;
        } else {
          if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
            emlrtIntegerCheckR2012b(NSTATE + 1.0, &n_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)(NSTATE + 1.0) < 1) || ((int32_T)(NSTATE + 1.0) >
               xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1, xx->size[1],
              &hb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = (int32_T)(NSTATE + 1.0) - 1;
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &m_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d < 1) || ((int32_T)d > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xx->size[1],
              &gb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i4 = (int32_T)d;
        }

        st.site = &h_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        dynamic_size_checks(&b_st, QN, Un_plus, QN->size[1], Un_plus->size[0]);
        b_st.site = &af_emlrtRSI;
        mtimes(&b_st, QN, Un_plus, a);
        if ((Vn_plus->size[0] != a->size[0]) && ((Vn_plus->size[0] != 1) &&
             (a->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(Vn_plus->size[0], a->size[0], &o_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((Vn_plus->size[1] != a->size[1]) && ((Vn_plus->size[1] != 1) &&
             (a->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(Vn_plus->size[1], a->size[1], &n_emlrtECI,
            (emlrtConstCTX)sp);
        }

        loop_ub = QN->size[0] * QN->size[1];
        for (i5 = 0; i5 < loop_ub; i5++) {
          QN_data[i5] = -QN_data[i5];
        }

        st.site = &h_emlrtRSI;
        if ((Vn_plus->size[0] == a->size[0]) && (Vn_plus->size[1] == a->size[1]))
        {
          loop_ub = Vn_plus->size[0] * Vn_plus->size[1];
          i5 = a->size[0] * a->size[1];
          a->size[0] = Vn_plus->size[0];
          a->size[1] = Vn_plus->size[1];
          emxEnsureCapacity_real_T(&st, a, i5, &bc_emlrtRTEI);
          a_data = a->data;
          for (i5 = 0; i5 < loop_ub; i5++) {
            a_data[i5] += Vn_plus_data[i5];
          }
        } else {
          b_st.site = &h_emlrtRSI;
          b_plus(&b_st, a, Vn_plus);
        }

        b_st.site = &bf_emlrtRSI;
        b_dynamic_size_checks(&b_st, a, a->size[1]);
        b_st.site = &af_emlrtRSI;
        b_mtimes(&b_st, a, b_boundary->Pigreco, b_y);
        st.site = &h_emlrtRSI;
        b_st.site = &h_emlrtRSI;
        inv(&b_st, UN_plus, b);
        b_st.site = &bf_emlrtRSI;
        b_dynamic_size_checks(&b_st, b, b->size[0]);
        b_st.site = &af_emlrtRSI;
        c_mtimes(&b_st, b_boundary->Pigreco, b, c_y);
        st.site = &h_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        c_dynamic_size_checks(&b_st, Un_plus, c_y->size[1], Un_plus->size[0]);
        b_st.site = &af_emlrtRSI;
        d_mtimes(&b_st, c_y, Un_plus, d_y);
        y_data = d_y->data;
        st.site = &h_emlrtRSI;
        b_st.site = &bf_emlrtRSI;
        if (d_y->size[1] != 5) {
          emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
            "MATLAB:innerdim", 0);
        }

        st.site = &h_emlrtRSI;
        for (i5 = 0; i5 < 4; i5++) {
          for (i6 = 0; i6 < 4; i6++) {
            d2 = 0.0;
            for (i7 = 0; i7 < 5; i7++) {
              d2 += y_data[i5 + (i7 << 2)] * b_boundary->Pigreco[i7 + 5 * i6];
            }

            h_y[i5 + (i6 << 2)] = d2;
          }
        }

        b_st.site = &h_emlrtRSI;
        b_inv(&b_st, h_y, b_b);
        b_st.site = &af_emlrtRSI;
        e_mtimes(&b_st, b_y, b_b, e_y);
        st.site = &h_emlrtRSI;
        b_st.site = &af_emlrtRSI;
        f_mtimes(&b_st, e_y, b_boundary->Pigreco, f_y);
        st.site = &h_emlrtRSI;
        b_st.site = &h_emlrtRSI;
        inv(&b_st, UN_plus, b);
        b_st.site = &bf_emlrtRSI;
        b_dynamic_size_checks(&b_st, b, b->size[0]);
        b_st.site = &af_emlrtRSI;
        g_mtimes(&b_st, f_y, b, a);
        a_data = a->data;
        if ((QN->size[0] != a->size[0]) && ((QN->size[0] != 1) && (a->size[0] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(QN->size[0], a->size[0], &m_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((QN->size[1] != a->size[1]) && ((QN->size[1] != 1) && (a->size[1] !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(QN->size[1], a->size[1], &l_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &ib_emlrtBCI, (emlrtConstCTX)sp);
        }

        st.site = &h_emlrtRSI;
        if ((QN->size[0] == a->size[0]) && (QN->size[1] == a->size[1])) {
          loop_ub = QN->size[0] * QN->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            QN_data[i5] += a_data[i5];
          }
        } else {
          b_st.site = &h_emlrtRSI;
          plus(&b_st, QN, a);
        }

        f_deltaX_data.data = &deltaX_data[0];
        f_deltaX_data.size = &deltaX_size;
        f_deltaX_data.allocatedSize = 121;
        f_deltaX_data.numDimensions = 1;
        f_deltaX_data.canFreeData = false;
        if (pf_size == 1) {
          i1 = i2 - i1;
        } else {
          i1 = pf_size;
        }

        b_st.site = &bf_emlrtRSI;
        d_dynamic_size_checks(&b_st, QN, &f_deltaX_data, QN->size[1], i1);
        g_deltaX_data.data = &deltaX_data[0];
        g_deltaX_data.size = &deltaX_size;
        g_deltaX_data.allocatedSize = 121;
        g_deltaX_data.numDimensions = 1;
        g_deltaX_data.canFreeData = false;
        b_st.site = &af_emlrtRSI;
        h_mtimes(&b_st, QN, &g_deltaX_data, tt);
        tt_data = tt->data;
        loop_ub = i4 - i3;
        if ((loop_ub != tt->size[0]) && ((loop_ub != 1) && (tt->size[0] != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(loop_ub, tt->size[0], &k_emlrtECI,
            (emlrtConstCTX)sp);
        }

        d2 = 2.0 * NSTATE + 1.0;
        SIGN_per = 3.0 * NSTATE;
        if (d2 > SIGN_per) {
          i1 = 0;
          i2 = 0;
        } else {
          if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
            emlrtIntegerCheckR2012b(d2, &l_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d2 < 1) || ((int32_T)d2 > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, xx->size[1],
              &fb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i1 = (int32_T)d2 - 1;
          if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
            emlrtIntegerCheckR2012b(SIGN_per, &k_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, xx->size[1],
              &eb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i2 = (int32_T)SIGN_per;
        }

        if (loop_ub == tt->size[0]) {
          if (xx->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
              &cf_emlrtBCI, (emlrtConstCTX)sp);
          }

          maxdimlen = i2 - i1;
          xx_size = maxdimlen;
          for (i2 = 0; i2 < maxdimlen; i2++) {
            c_xx_data[i2] = xx_data[(xx->size[0] + xx->size[0] * (i1 + i2)) - 1];
          }

          i1 = dydt_plus->size[0];
          dydt_plus->size[0] = loop_ub;
          emxEnsureCapacity_real_T(sp, dydt_plus, i1, &cc_emlrtRTEI);
          states_data = dydt_plus->data;
          for (i1 = 0; i1 < loop_ub; i1++) {
            states_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i3 + i1)) -
              1] + tt_data[i1];
          }

          g_xx_data.data = &c_xx_data[0];
          g_xx_data.size = &xx_size;
          g_xx_data.allocatedSize = 121;
          g_xx_data.numDimensions = 1;
          g_xx_data.canFreeData = false;
          st.site = &g_emlrtRSI;
          b_Switching_Function(&st, &g_xx_data, dydt_plus, b_physical->Tmax,
                               b_physical->c, b_physical->NSTATE,
                               b_physical->shoot, b_physical->EPS, &Snew,
                               &SIGN_per);
        } else {
          st.site = &g_emlrtRSI;
          h_binary_expand_op(&st, g_emlrtRSI, xx, i1, i2 - 1, i3, i4, tt,
                             b_physical, &Snew, &SIGN_per);
        }

        if (muDoubleScalarAbs(Snew) > 1.0E-6) {
          SIGN_per = muDoubleScalarSign(Snew);
        } else {
          SIGN_per = muDoubleScalarSign(SIGN_per);
        }

        /*  vectorize U and V and define the new ode initial state */
        st.site = &f_emlrtRSI;
        told[0] = told_tmp;
        told[1] = 1.0;
        st.site = &f_emlrtRSI;
        nx = UN_plus->size[0] * UN_plus->size[1];
        b_st.site = &xb_emlrtRSI;
        assertValidSizeArg(&b_st, told);
        maxdimlen = UN_plus->size[0];
        if (UN_plus->size[1] > UN_plus->size[0]) {
          maxdimlen = UN_plus->size[1];
        }

        maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
        if ((int32_T)told_tmp > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if (maxdimlen < 1) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if ((int32_T)told_tmp < 0) {
          emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
            "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }

        if ((int32_T)told_tmp != nx) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        st.site = &e_emlrtRSI;
        b_dv[0] = told_tmp;
        b_dv[1] = 1.0;
        st.site = &e_emlrtRSI;
        nx = VN_plus->size[0] * VN_plus->size[1];
        b_st.site = &xb_emlrtRSI;
        assertValidSizeArg(&b_st, b_dv);
        maxdimlen = VN_plus->size[0];
        if (VN_plus->size[1] > VN_plus->size[0]) {
          maxdimlen = VN_plus->size[1];
        }

        maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
        if ((int32_T)told_tmp > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if (maxdimlen < 1) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if ((int32_T)told_tmp < 0) {
          emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
            "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }

        if ((int32_T)told_tmp != nx) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        st.site = &d_emlrtRSI;
        b_dv1[0] = told_tmp;
        b_dv1[1] = 1.0;
        st.site = &d_emlrtRSI;
        nx = Un_plus->size[0] * Un_plus->size[1];
        b_st.site = &xb_emlrtRSI;
        assertValidSizeArg(&b_st, b_dv1);
        maxdimlen = Un_plus->size[0];
        if (Un_plus->size[1] > Un_plus->size[0]) {
          maxdimlen = Un_plus->size[1];
        }

        maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
        if ((int32_T)told_tmp > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if (maxdimlen < 1) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if ((int32_T)told_tmp < 0) {
          emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
            "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }

        if ((int32_T)told_tmp != nx) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        st.site = &c_emlrtRSI;
        b_dv2[0] = told_tmp;
        b_dv2[1] = 1.0;
        st.site = &c_emlrtRSI;
        nx = Vn_plus->size[0] * Vn_plus->size[1];
        b_st.site = &xb_emlrtRSI;
        assertValidSizeArg(&b_st, b_dv2);
        maxdimlen = Vn_plus->size[0];
        if (Vn_plus->size[1] > Vn_plus->size[0]) {
          maxdimlen = Vn_plus->size[1];
        }

        maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
        if ((int32_T)told_tmp > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if (maxdimlen < 1) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if ((int32_T)told_tmp < 0) {
          emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
            "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }

        if ((int32_T)told_tmp != nx) {
          emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        d2 = 4.0 * NSTATE;
        if (d2 < 1.0) {
          loop_ub = 0;
        } else {
          if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
            emlrtIntegerCheckR2012b(d2, &j_emlrtDCI, (emlrtConstCTX)sp);
          }

          if (((int32_T)d2 < 1) || ((int32_T)d2 > xx->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, xx->size[1],
              &cb_emlrtBCI, (emlrtConstCTX)sp);
          }

          loop_ub = (int32_T)d2;
        }

        if (i + 21 < 1) {
          emlrtDynamicBoundsCheckR2012b(i + 21, 1, i + 21, &bb_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &db_emlrtBCI, (emlrtConstCTX)sp);
        }

        i1 = (((loop_ub + (int32_T)told_tmp) + (int32_T)told_tmp) + (int32_T)
              told_tmp) + (int32_T)told_tmp;
        i2 = tt->size[0];
        tt->size[0] = i1 + 1;
        emxEnsureCapacity_real_T(sp, tt, i2, &dc_emlrtRTEI);
        tt_data = tt->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          tt_data[i2] = xx_data[(xx->size[0] + xx->size[0] * i2) - 1];
        }

        for (i2 = 0; i2 < num_idx_0_tmp_tmp; i2++) {
          tt_data[i2 + loop_ub] = UN_plus_data[i2];
        }

        for (i2 = 0; i2 < num_idx_0_tmp_tmp; i2++) {
          tt_data[(i2 + loop_ub) + (int32_T)told_tmp] = deltax_data[i2];
        }

        for (i2 = 0; i2 < num_idx_0_tmp_tmp; i2++) {
          tt_data[((i2 + loop_ub) + (int32_T)told_tmp) + (int32_T)told_tmp] =
            Un_plus_data[i2];
        }

        for (i2 = 0; i2 < num_idx_0_tmp_tmp; i2++) {
          tt_data[(((i2 + loop_ub) + (int32_T)told_tmp) + (int32_T)told_tmp) +
            (int32_T)told_tmp] = Vn_plus_data[i2];
        }

        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
            &lf_emlrtBCI, (emlrtConstCTX)sp);
        }

        if (xx->size[1] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[1], 1, xx->size[1],
            &lf_emlrtBCI, (emlrtConstCTX)sp);
        }

        tt_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (xx->size[1] - 1)) -
          1];
        if (i + 21 != tt->size[0]) {
          emlrtSubAssignSizeCheck1dR2017a(i + 21, tt->size[0], &j_emlrtECI,
            (emlrtConstCTX)sp);
        }

        for (i1 = 0; i1 < s0_size; i1++) {
          s0_data[i1] = tt_data[i1];
        }

        /*  update loop variale */
        b_i++;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    emxFree_real_T(sp, &b_y_tmp);
    emxFree_real_T(sp, &y_tmp);
    emxFree_real_T(sp, &f_y);
    emxFree_real_T(sp, &e_y);
    emxFree_real_T(sp, &d_y);
    emxFree_real_T(sp, &c_y);
    emxFree_real_T(sp, &b_y);
    emxFree_real_T(sp, &y);
    emxFree_real_T(sp, &b);
    emxFree_real_T(sp, &a);
    emxFree_real_T(sp, &r);
    emxFree_real_T(sp, &Un);
    emxFree_real_T(sp, &tt);
    emxFree_real_T(sp, &Vn_plus);
    emxFree_real_T(sp, &Un_plus);
    emxFree_real_T(sp, &VN_plus);
    emxFree_real_T(sp, &UN_plus);
    emxFree_real_T(sp, &Vn_min);
    emxFree_real_T(sp, &Un_min);
    emxFree_real_T(sp, &VN_min);
    emxFree_real_T(sp, &deltax);
    emxFree_real_T(sp, &dydt_plus);
    emxFree_real_T(sp, &QN);

    /*  if the NOG is stopped at a time different from the final time (this occurs if the  */
    /*  trajectory has a leg where the controllability conditions are not satisfied) */
    /*  propagates the trajectory without any costate update. */
    /*  otherwise, compute the objective function residual using the */
    /*  final values. */
    if (NOG->tspan->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(NOG->tspan->size[0], 1, NOG->tspan->size[0],
        &df_emlrtBCI, (emlrtConstCTX)sp);
    }

    if (NOG->tspan->data[NOG->tspan->size[0] - 1] != b_boundary->Tfin) {
      if (NOG->tspan->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(NOG->tspan->size[0], 1, NOG->tspan->size[0],
          &ef_emlrtBCI, (emlrtConstCTX)sp);
      }

      d2 = 3.0 * b_physical->NSTATE + 1.0;
      SIGN_per = 4.0 * b_physical->NSTATE;
      if (d2 > SIGN_per) {
        i = 0;
        i1 = 0;
      } else {
        if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
          emlrtIntegerCheckR2012b(d2, &i_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (((int32_T)d2 < 1) || ((int32_T)d2 > xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, xx->size[1], &y_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        i = (int32_T)d2 - 1;
        if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
          emlrtIntegerCheckR2012b(SIGN_per, &h_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, xx->size[1],
            &x_emlrtBCI, (emlrtConstCTX)sp);
        }

        i1 = (int32_T)SIGN_per;
      }

      if (xx->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &ab_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      d2 = 2.0 * b_physical->NSTATE + 1.0;
      SIGN_per = 3.0 * b_physical->NSTATE;
      if (d2 > SIGN_per) {
        i2 = 0;
        i3 = 0;
      } else {
        if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
          emlrtIntegerCheckR2012b(d2, &g_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (((int32_T)d2 < 1) || ((int32_T)d2 > xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, xx->size[1], &v_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        i2 = (int32_T)d2 - 1;
        if (SIGN_per != (int32_T)muDoubleScalarFloor(SIGN_per)) {
          emlrtIntegerCheckR2012b(SIGN_per, &f_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (((int32_T)SIGN_per < 1) || ((int32_T)SIGN_per > xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)SIGN_per, 1, xx->size[1],
            &u_emlrtBCI, (emlrtConstCTX)sp);
        }

        i3 = (int32_T)SIGN_per;
      }

      if (xx->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &w_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      loop_ub = i1 - i;
      xx_size = loop_ub;
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_xx_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
      }

      loop_ub = i3 - i2;
      pf_size = loop_ub;
      for (i = 0; i < loop_ub; i++) {
        pf_data[i] = xx_data[(xx->size[0] + xx->size[0] * (i2 + i)) - 1];
      }

      emxInit_real_T(sp, &d_xx, 2, &gc_emlrtRTEI);
      emxInit_real_T(sp, &b_tt, 1, &gc_emlrtRTEI);
      st.site = &b_emlrtRSI;
      objfun_S_fuel(SD, &st, c_xx_data, xx_size, pf_data, pf_size,
                    b_physical->Tmax, b_physical->RE, b_physical->RM,
                    b_physical->c, b_physical->Earth, b_physical->Moon,
                    b_physical->NSTATE, b_physical->shoot, b_physical->g0_x,
                    b_physical->EPS, NOG->tspan->data[NOG->tspan->size[0] - 1],
                    b_boundary->Tfin, b_boundary->Xf, b_boundary->Sigma,
                    b_boundary->Pigreco, obj, d_xx, b_tt);
      tt_data = b_tt->data;
      xx_data = d_xx->data;
      index2 = (index1 + (real_T)b_tt->size[0]) - 1.0;
      if (d_xx->size[0] < 2) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = d_xx->size[0];
      }

      if (d < 1.0) {
        loop_ub = 0;
      } else {
        if (d_xx->size[1] < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, d_xx->size[1], &t_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        if (d != d1) {
          emlrtIntegerCheckR2012b(d, &e_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (((int32_T)d < 1) || ((int32_T)d > d_xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, d_xx->size[1],
            &s_emlrtBCI, (emlrtConstCTX)sp);
        }

        loop_ub = (int32_T)d;
      }

      if (index1 + 1.0 > index2) {
        i2 = 0;
        i3 = 0;
      } else {
        if (((int32_T)(index1 + 1.0) < 1) || ((int32_T)(index1 + 1.0) > 1000000))
        {
          emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
            &h_emlrtBCI, (emlrtConstCTX)sp);
        }

        i2 = (int32_T)(index1 + 1.0) - 1;
        if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000, &g_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        i3 = (int32_T)index2;
      }

      b_xx[0] = i3 - i2;
      b_xx[1] = temps->size[1];
      nx = i1 - i;
      c_xx[0] = nx;
      c_xx[1] = loop_ub;
      emlrtSubAssignSizeCheckR2012b(&b_xx[0], 2, &c_xx[0], 2, &d_emlrtECI,
        (emlrtCTX)sp);
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (i3 = 0; i3 < nx; i3++) {
          temps_data[(i2 + i3) + 1000000 * i1] = xx_data[(i + i3) + d_xx->size[0]
            * i1];
        }
      }

      emxFree_real_T(sp, &d_xx);
      if (b_tt->size[0] < 2) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = b_tt->size[0];
      }

      if (index1 + 1.0 > index2) {
        i2 = 0;
        i3 = 0;
      } else {
        if (((int32_T)(index1 + 1.0) < 1) || ((int32_T)(index1 + 1.0) > 1000000))
        {
          emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
            &b_emlrtBCI, (emlrtConstCTX)sp);
        }

        i2 = (int32_T)(index1 + 1.0) - 1;
        if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000, &emlrtBCI,
            (emlrtConstCTX)sp);
        }

        i3 = (int32_T)index2;
      }

      i3 -= i2;
      loop_ub = i1 - i;
      if (i3 != loop_ub) {
        emlrtSubAssignSizeCheck1dR2017a(i3, loop_ub, &emlrtECI, (emlrtConstCTX)
          sp);
      }

      for (i1 = 0; i1 < loop_ub; i1++) {
        SD->f1.tempt[i2 + i1] = tt_data[i + i1];
      }

      emxFree_real_T(sp, &b_tt);
    } else {
      real_T g_y[5];
      d1 = 3.0 * b_physical->NSTATE;
      if (d + 1.0 > d1) {
        i = 0;
        i1 = 0;
      } else {
        if (d + 1.0 != (int32_T)muDoubleScalarFloor(d + 1.0)) {
          emlrtIntegerCheckR2012b(d + 1.0, &d_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (((int32_T)(d + 1.0) < 1) || ((int32_T)(d + 1.0) > xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1, xx->size[1],
            &q_emlrtBCI, (emlrtConstCTX)sp);
        }

        i = (int32_T)(d + 1.0) - 1;
        if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
          emlrtIntegerCheckR2012b(d1, &c_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (((int32_T)d1 < 1) || ((int32_T)d1 > xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, xx->size[1], &p_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        i1 = (int32_T)d1;
      }

      if (xx->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &r_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      loop_ub = i1 - i;
      for (i1 = 0; i1 < loop_ub; i1++) {
        s0_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
      }

      d = 3.0 * b_physical->NSTATE + 1.0;
      d1 = 4.0 * b_physical->NSTATE;
      if (d > d1) {
        i = 0;
        i1 = 0;
      } else {
        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (((int32_T)d < 1) || ((int32_T)d > xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xx->size[1], &n_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        i = (int32_T)d - 1;
        if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
          emlrtIntegerCheckR2012b(d1, &emlrtDCI, (emlrtConstCTX)sp);
        }

        if (((int32_T)d1 < 1) || ((int32_T)d1 > xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, xx->size[1], &m_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        i1 = (int32_T)d1;
      }

      if (xx->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &o_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      maxdimlen = i1 - i;
      pf_size = maxdimlen;
      for (i1 = 0; i1 < maxdimlen; i1++) {
        pf_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
      }

      if ((loop_ub != 5) && (loop_ub != 1)) {
        emlrtDimSizeImpxCheckR2021b(loop_ub, 5, &i_emlrtECI, (emlrtConstCTX)sp);
      }

      if ((pf_size != 5) && (pf_size != 1)) {
        emlrtDimSizeImpxCheckR2021b(pf_size, 5, &h_emlrtECI, (emlrtConstCTX)sp);
      }

      if ((loop_ub == 5) && (pf_size == 5)) {
        real_T c_boundary[4];
        for (i = 0; i < 5; i++) {
          val[i] = s0_data[i] - b_boundary->Xf[i];
        }

        Snew = 0.0;
        for (i = 0; i < 5; i++) {
          Snew += b_boundary->Sigma[i] * (pf_data[i] + b_physical->g0_x[i]);
        }

        for (i = 0; i < 4; i++) {
          d = 0.0;
          for (i1 = 0; i1 < 5; i1++) {
            d += b_boundary->Pigreco[i1 + 5 * i] * val[i1];
          }

          c_boundary[i] = d;
        }

        val[0] = c_boundary[0];
        val[1] = c_boundary[1];
        val[2] = c_boundary[2];
        val[3] = c_boundary[3];
        val[4] = Snew;
      } else {
        n_binary_expand_op(val, b_boundary, s0_data, &loop_ub, pf_data, &pf_size,
                           b_physical);
      }

      for (maxdimlen = 0; maxdimlen < 5; maxdimlen++) {
        d = val[maxdimlen];
        g_y[maxdimlen] = d * d;
      }

      st.site = &emlrtRSI;
      *obj = sum(g_y);
    }

    emxFree_real_T(sp, &xx);

    /*  assembly of output values */
    if (index2 < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)index2;
    }

    i = states->size[0] * states->size[1];
    states->size[0] = loop_ub;
    states->size[1] = temps->size[1];
    emxEnsureCapacity_real_T(sp, states, i, &ab_emlrtRTEI);
    states_data = states->data;
    maxdimlen = temps->size[1];
    for (i = 0; i < maxdimlen; i++) {
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
    emxEnsureCapacity_real_T(sp, times, i, &bb_emlrtRTEI);
    states_data = times->data;
    for (i = 0; i < loop_ub; i++) {
      states_data[i] = SD->f1.tempt[i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfun_S_NOG_anonFcn2(const emlrtStack *sp, real_T physical_Tmax, real_T
  physical_c, real_T physical_NSTATE, real_T physical_shoot, real_T physical_EPS,
  real_T SIGN_nom, const real_T Pigreco[20], const emxArray_real_T *s,
  emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T r6;
  emxArray_real_T *QN;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *dUN;
  emxArray_real_T *dUn;
  emxArray_real_T *dVN;
  emxArray_real_T *dVn;
  emxArray_real_T *d_y;
  emxArray_real_T *deltaX;
  emxArray_real_T *f_y;
  emxArray_real_T *p_new;
  emxArray_real_T *p_nom;
  emxArray_real_T *pd_nom;
  emxArray_real_T *phi;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *r7;
  emxArray_real_T *x_nom;
  emxArray_real_T *x_per;
  emxArray_real_T *xd_nom;
  emxArray_real_T *y;
  emxArray_uint32_T *r;
  real_T H_pp_nom[25];
  real_T H_xp_nom[25];
  real_T H_xx_nom[25];
  real_T e_y[16];
  real_T tmp_data[5];
  real_T b_dv[2];
  const real_T *s_data;
  real_T Sper;
  real_T d;
  real_T d1;
  real_T d2;
  real_T *QN_data;
  real_T *dUn_data;
  real_T *dVn_data;
  real_T *deltaX_data;
  real_T *pd_nom_data;
  real_T *phi_data;
  real_T *x_nom_data;
  real_T *xd_nom_data;
  int32_T b_physical_NSTATE[2];
  int32_T c_physical_NSTATE[2];
  int32_T d_physical_NSTATE[2];
  int32_T e_physical_NSTATE[2];
  int32_T f_physical_NSTATE[2];
  int32_T g_physical_NSTATE[2];
  int32_T h_physical_NSTATE[2];
  int32_T i_physical_NSTATE[2];
  int32_T j_physical_NSTATE[2];
  int32_T k_physical_NSTATE[2];
  int32_T l_physical_NSTATE[2];
  int32_T m_physical_NSTATE[2];
  int32_T n_physical_NSTATE[2];
  int32_T o_physical_NSTATE[2];
  int32_T p_physical_NSTATE[2];
  int32_T q_physical_NSTATE[2];
  int32_T r_physical_NSTATE[2];
  int32_T s_physical_NSTATE[2];
  int32_T t_physical_NSTATE[2];
  int32_T u_physical_NSTATE[2];
  int32_T v_physical_NSTATE[2];
  int32_T w_physical_NSTATE[2];
  int32_T x_physical_NSTATE[2];
  int32_T y_physical_NSTATE[2];
  int32_T b_physical_NSTATE_tmp;
  int32_T c_physical_NSTATE_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T n;
  int32_T num_tmp_idx_0_tmp;
  int32_T nx;
  int32_T physical_NSTATE_tmp;
  uint32_T *r1;
  boolean_T out;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  s_data = s->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &wc_emlrtRSI;

  /*  derivatives of state, costate, U, V and swtich with costate update */
  /*  Inputs:  */
  /*  inp1: [4*NSTATE+4*NSTATE^2+1x1] */
  /*  [x,p] nominal [2*NSTATEx1] */
  /*  [x,p] perturbed [2*NSTATEx1] */
  /*  [U,V] nominal [4*NSTATE^2x1] */
  /*  S perturbed */
  /*  */
  /*  inp2: physical */
  /*  */
  /*  inp3: S nominal sign of switching function in interval */
  /*  Output: */
  /*  xxd: derivatives vector [4*NSTATE+4*NSTATE^2+1x1] */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &nf_emlrtBCI, &st);
    }

    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &gd_emlrtDCI, &st);
    }

    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > s->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, s->size[0],
        &of_emlrtBCI, &st);
    }

    loop_ub = (int32_T)physical_NSTATE;
  }

  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = loop_ub;
  b_st.site = &xc_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x_nom, 1, &xc_emlrtRTEI);
  i = x_nom->size[0];
  x_nom->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, x_nom, i, &xc_emlrtRTEI);
  x_nom_data = x_nom->data;
  for (i = 0; i < loop_ub; i++) {
    x_nom_data[i] = s_data[i];
  }

  d = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(physical_NSTATE +
         1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &hd_emlrtDCI, &st);
    }

    if (((int32_T)(physical_NSTATE + 1.0) < 1) || ((int32_T)(physical_NSTATE +
          1.0) > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1, s->
        size[0], &pf_emlrtBCI, &st);
    }

    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &id_emlrtDCI, &st);
    }

    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &qf_emlrtBCI, &st);
    }

    i1 = (int32_T)d;
  }

  b_physical_NSTATE[0] = 1;
  physical_NSTATE_tmp = i1 - i;
  b_physical_NSTATE[1] = physical_NSTATE_tmp;
  b_st.site = &yc_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &p_nom, 1, &yc_emlrtRTEI);
  i2 = p_nom->size[0];
  p_nom->size[0] = physical_NSTATE_tmp;
  emxEnsureCapacity_real_T(&st, p_nom, i2, &yc_emlrtRTEI);
  x_nom_data = p_nom->data;
  for (i2 = 0; i2 < physical_NSTATE_tmp; i2++) {
    x_nom_data[i2] = s_data[i + i2];
  }

  d = 2.0 * physical_NSTATE + 1.0;
  Sper = 3.0 * physical_NSTATE;
  if (d > Sper) {
    i2 = 0;
    i3 = 0;
  } else {
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &jd_emlrtDCI, &st);
    }

    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &rf_emlrtBCI, &st);
    }

    i2 = (int32_T)d - 1;
    if (Sper != (int32_T)muDoubleScalarFloor(Sper)) {
      emlrtIntegerCheckR2012b(Sper, &kd_emlrtDCI, &st);
    }

    if (((int32_T)Sper < 1) || ((int32_T)Sper > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)Sper, 1, s->size[0], &sf_emlrtBCI,
        &st);
    }

    i3 = (int32_T)Sper;
  }

  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE_tmp = i3 - i2;
  b_physical_NSTATE[1] = b_physical_NSTATE_tmp;
  b_st.site = &ad_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x_per, 1, &ad_emlrtRTEI);
  i4 = x_per->size[0];
  x_per->size[0] = b_physical_NSTATE_tmp;
  emxEnsureCapacity_real_T(&st, x_per, i4, &ad_emlrtRTEI);
  x_nom_data = x_per->data;
  for (i4 = 0; i4 < b_physical_NSTATE_tmp; i4++) {
    x_nom_data[i4] = s_data[i2 + i4];
  }

  d = 3.0 * physical_NSTATE + 1.0;
  Sper = 4.0 * physical_NSTATE;
  if (d > Sper) {
    i4 = 0;
    i5 = 0;
  } else {
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &ld_emlrtDCI, &st);
    }

    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &tf_emlrtBCI, &st);
    }

    i4 = (int32_T)d - 1;
    if (Sper != (int32_T)muDoubleScalarFloor(Sper)) {
      emlrtIntegerCheckR2012b(Sper, &md_emlrtDCI, &st);
    }

    if (((int32_T)Sper < 1) || ((int32_T)Sper > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)Sper, 1, s->size[0], &uf_emlrtBCI,
        &st);
    }

    i5 = (int32_T)Sper;
  }

  b_physical_NSTATE[0] = 1;
  c_physical_NSTATE_tmp = i5 - i4;
  b_physical_NSTATE[1] = c_physical_NSTATE_tmp;
  b_st.site = &bd_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  b_st.site = &cd_emlrtRSI;
  d = physical_NSTATE * physical_NSTATE;
  d1 = 4.0 * d;
  emxInit_uint32_T(&st, &r, &rd_emlrtRTEI);
  i4 = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int32_T)(d1 - 1.0) + 1;
  emxEnsureCapacity_uint32_T(&st, r, i4, &bd_emlrtRTEI);
  r1 = r->data;
  nx = (int32_T)(d1 - 1.0);
  for (i4 = 0; i4 <= nx; i4++) {
    d2 = Sper + ((real_T)i4 + 1.0);
    if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
      emlrtIntegerCheckR2012b(d2, &fd_emlrtDCI, &st);
    }

    if (((int32_T)(uint32_T)d2 < 1) || ((int32_T)(uint32_T)d2 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(uint32_T)d2, 1, s->size[0],
        &mf_emlrtBCI, &st);
    }

    r1[i4] = (uint32_T)d2;
  }

  b_st.site = &cd_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], r->size);
  emxInit_real_T(&st, &phi, 1, &cd_emlrtRTEI);
  i4 = phi->size[0];
  phi->size[0] = r->size[1];
  emxEnsureCapacity_real_T(&st, phi, i4, &cd_emlrtRTEI);
  phi_data = phi->data;
  nx = r->size[1];
  for (i4 = 0; i4 < nx; i4++) {
    phi_data[i4] = s_data[(int32_T)r1[i4] - 1];
  }

  b_st.site = &dd_emlrtRSI;
  if (d < 1.0) {
    nx = 0;
  } else {
    if (r->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, r->size[1], &vf_emlrtBCI, &st);
    }

    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &nd_emlrtDCI, &st);
    }

    if (((int32_T)d < 1) || ((int32_T)d > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, r->size[1], &wf_emlrtBCI, &st);
    }

    nx = (int32_T)d;
  }

  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = nx;
  b_st.site = &dd_emlrtRSI;
  indexShapeCheck(&b_st, r->size[1], b_physical_NSTATE);
  emxInit_real_T(&st, &r2, 1, &rd_emlrtRTEI);
  i4 = r2->size[0];
  r2->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r2, i4, &dd_emlrtRTEI);
  x_nom_data = r2->data;
  for (i4 = 0; i4 < nx; i4++) {
    x_nom_data[i4] = phi_data[i4];
  }

  b_dv[0] = physical_NSTATE;
  b_dv[1] = physical_NSTATE;
  b_st.site = &dd_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }

  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  loop_ub_tmp = (int32_T)physical_NSTATE * (int32_T)physical_NSTATE;
  if (loop_ub_tmp != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &ed_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  Sper = 2.0 * d;
  if (d + 1.0 > Sper) {
    i4 = 0;
    i5 = 0;
  } else {
    if (d + 1.0 != (int32_T)muDoubleScalarFloor(d + 1.0)) {
      emlrtIntegerCheckR2012b(d + 1.0, &od_emlrtDCI, &st);
    }

    if (((int32_T)(d + 1.0) < 1) || ((int32_T)(d + 1.0) > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1, r->size[1],
        &xf_emlrtBCI, &st);
    }

    i4 = (int32_T)(d + 1.0) - 1;
    if (Sper != (int32_T)muDoubleScalarFloor(Sper)) {
      emlrtIntegerCheckR2012b(Sper, &pd_emlrtDCI, &st);
    }

    if (((int32_T)Sper < 1) || ((int32_T)Sper > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)Sper, 1, r->size[1], &yf_emlrtBCI,
        &st);
    }

    i5 = (int32_T)Sper;
  }

  b_physical_NSTATE[0] = 1;
  nx = i5 - i4;
  b_physical_NSTATE[1] = nx;
  b_st.site = &ed_emlrtRSI;
  indexShapeCheck(&b_st, r->size[1], b_physical_NSTATE);
  emxInit_real_T(&st, &r3, 1, &rd_emlrtRTEI);
  i5 = r3->size[0];
  r3->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r3, i5, &ed_emlrtRTEI);
  x_nom_data = r3->data;
  for (i5 = 0; i5 < nx; i5++) {
    x_nom_data[i5] = phi_data[i4 + i5];
  }

  b_st.site = &ed_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }

  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (loop_ub_tmp != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &fd_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  d2 = 3.0 * d;
  if (Sper + 1.0 > d2) {
    i5 = 0;
    i6 = 0;
  } else {
    if (Sper + 1.0 != (int32_T)muDoubleScalarFloor(Sper + 1.0)) {
      emlrtIntegerCheckR2012b(Sper + 1.0, &qd_emlrtDCI, &st);
    }

    if (((int32_T)(Sper + 1.0) < 1) || ((int32_T)(Sper + 1.0) > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(Sper + 1.0), 1, r->size[1],
        &ag_emlrtBCI, &st);
    }

    i5 = (int32_T)(Sper + 1.0) - 1;
    if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
      emlrtIntegerCheckR2012b(d2, &rd_emlrtDCI, &st);
    }

    if (((int32_T)d2 < 1) || ((int32_T)d2 > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, r->size[1], &bg_emlrtBCI,
        &st);
    }

    i6 = (int32_T)d2;
  }

  b_physical_NSTATE[0] = 1;
  nx = i6 - i5;
  b_physical_NSTATE[1] = nx;
  b_st.site = &fd_emlrtRSI;
  indexShapeCheck(&b_st, r->size[1], b_physical_NSTATE);
  emxInit_real_T(&st, &r4, 1, &rd_emlrtRTEI);
  i6 = r4->size[0];
  r4->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r4, i6, &fd_emlrtRTEI);
  x_nom_data = r4->data;
  for (i6 = 0; i6 < nx; i6++) {
    x_nom_data[i6] = phi_data[i5 + i6];
  }

  b_st.site = &fd_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }

  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (loop_ub_tmp != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &gd_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  if (d2 + 1.0 > d1) {
    i5 = 0;
    i6 = 0;
  } else {
    if (d2 + 1.0 != (int32_T)muDoubleScalarFloor(d2 + 1.0)) {
      emlrtIntegerCheckR2012b(d2 + 1.0, &sd_emlrtDCI, &st);
    }

    if (((int32_T)(d2 + 1.0) < 1) || ((int32_T)(d2 + 1.0) > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d2 + 1.0), 1, r->size[1],
        &cg_emlrtBCI, &st);
    }

    i5 = (int32_T)(d2 + 1.0) - 1;
    if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
      emlrtIntegerCheckR2012b(d1, &td_emlrtDCI, &st);
    }

    if (((int32_T)d1 < 1) || ((int32_T)d1 > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, r->size[1], &dg_emlrtBCI,
        &st);
    }

    i6 = (int32_T)d1;
  }

  b_physical_NSTATE[0] = 1;
  nx = i6 - i5;
  b_physical_NSTATE[1] = nx;
  b_st.site = &gd_emlrtRSI;
  indexShapeCheck(&b_st, r->size[1], b_physical_NSTATE);
  emxFree_uint32_T(&st, &r);
  emxInit_real_T(&st, &r5, 1, &rd_emlrtRTEI);
  num_tmp_idx_0_tmp = r5->size[0];
  r5->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r5, num_tmp_idx_0_tmp, &gd_emlrtRTEI);
  x_nom_data = r5->data;
  for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < nx; num_tmp_idx_0_tmp++) {
    x_nom_data[num_tmp_idx_0_tmp] = phi_data[i5 + num_tmp_idx_0_tmp];
  }

  b_st.site = &gd_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }

  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (loop_ub_tmp != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  /*  Sper = inp1(end); */
  b_st.site = &hd_emlrtRSI;
  emxInit_real_T(&b_st, &a, 2, &hd_emlrtRTEI);
  num_tmp_idx_0_tmp = a->size[0] * a->size[1];
  a->size[0] = (int32_T)physical_NSTATE;
  a->size[1] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&b_st, a, num_tmp_idx_0_tmp, &hd_emlrtRTEI);
  x_nom_data = a->data;
  for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < loop_ub_tmp; num_tmp_idx_0_tmp
       ++) {
    x_nom_data[num_tmp_idx_0_tmp] = -phi_data[i4 + num_tmp_idx_0_tmp];
  }

  r6 = *r2;
  c_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  c_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &c_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &b, 2, &ud_emlrtRTEI);
  c_st.site = &hd_emlrtRSI;
  inv(&c_st, &r6, b);
  c_st.site = &bf_emlrtRSI;
  dynamic_size_checks(&c_st, a, b, a->size[1], b->size[0]);
  emxInit_real_T(&b_st, &QN, 2, &sd_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  mtimes(&c_st, a, b, QN);
  QN_data = QN->data;
  emxInit_real_T(&st, &deltaX, 1, &td_emlrtRTEI);
  i4 = deltaX->size[0];
  deltaX->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, deltaX, i4, &id_emlrtRTEI);
  deltaX_data = deltaX->data;
  for (i4 = 0; i4 < loop_ub; i4++) {
    deltaX_data[i4] = -s_data[i4];
  }

  if ((deltaX->size[0] != b_physical_NSTATE_tmp) && ((deltaX->size[0] != 1) &&
       (b_physical_NSTATE_tmp != 1))) {
    emlrtDimSizeImpxCheckR2021b(deltaX->size[0], b_physical_NSTATE_tmp,
      &xb_emlrtECI, &st);
  }

  if (deltaX->size[0] == b_physical_NSTATE_tmp) {
    loop_ub = deltaX->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      deltaX_data[i3] += s_data[i2 + i3];
    }
  } else {
    b_st.site = &yn_emlrtRSI;
    s_binary_expand_op(&b_st, deltaX, s, i2, i3);
  }

  b_st.site = &id_emlrtRSI;
  r6 = *r4;
  d_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  d_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &d_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  dynamic_size_checks(&c_st, QN, &r6, QN->size[1], (int32_T)physical_NSTATE);
  r6 = *r4;
  e_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  e_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &e_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &af_emlrtRSI;
  mtimes(&c_st, QN, &r6, a);
  if (((int32_T)physical_NSTATE != a->size[0]) && (((int32_T)physical_NSTATE !=
        1) && (a->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b((int32_T)physical_NSTATE, a->size[0],
      &yb_emlrtECI, &st);
  }

  if (((int32_T)physical_NSTATE != a->size[1]) && (((int32_T)physical_NSTATE !=
        1) && (a->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b((int32_T)physical_NSTATE, a->size[1],
      &ac_emlrtECI, &st);
  }

  loop_ub = QN->size[0] * QN->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    QN_data[i2] = -QN_data[i2];
  }

  emxInit_real_T(&st, &y, 2, &vd_emlrtRTEI);
  b_st.site = &id_emlrtRSI;
  if (((int32_T)physical_NSTATE == a->size[0]) && ((int32_T)physical_NSTATE ==
       a->size[1])) {
    for (i2 = 0; i2 < nx; i2++) {
      phi_data[i2] = phi_data[i5 + i2];
    }

    i2 = phi->size[0];
    phi->size[0] = nx;
    emxEnsureCapacity_real_T(&b_st, phi, i2, &gd_emlrtRTEI);
    phi_data = phi->data;
    loop_ub = loop_ub_tmp - 1;
    i2 = a->size[0] * a->size[1];
    a->size[0] = (int32_T)physical_NSTATE;
    a->size[1] = (int32_T)physical_NSTATE;
    emxEnsureCapacity_real_T(&b_st, a, i2, &jd_emlrtRTEI);
    x_nom_data = a->data;
    for (i2 = 0; i2 <= loop_ub; i2++) {
      x_nom_data[i2] += phi_data[i2];
    }
  } else {
    c_st.site = &id_emlrtRSI;
    r_binary_expand_op(&c_st, a, phi, i5, i6, b_dv);
  }

  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, a, a->size[1]);
  c_st.site = &af_emlrtRSI;
  b_mtimes(&c_st, a, Pigreco, y);
  emxInit_real_T(&st, &b_y, 2, &wd_emlrtRTEI);
  b_st.site = &id_emlrtRSI;
  r6 = *r2;
  f_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  f_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &f_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &id_emlrtRSI;
  inv(&c_st, &r6, b);
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, b, b->size[0]);
  c_st.site = &af_emlrtRSI;
  c_mtimes(&c_st, Pigreco, b, b_y);
  emxInit_real_T(&st, &c_y, 2, &wd_emlrtRTEI);
  b_st.site = &id_emlrtRSI;
  r6 = *r4;
  g_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  g_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &g_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  c_dynamic_size_checks(&c_st, &r6, b_y->size[1], (int32_T)physical_NSTATE);
  r6 = *r4;
  h_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  h_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &h_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &af_emlrtRSI;
  d_mtimes(&c_st, b_y, &r6, c_y);
  x_nom_data = c_y->data;
  emxFree_real_T(&b_st, &b_y);
  b_st.site = &id_emlrtRSI;
  c_st.site = &bf_emlrtRSI;
  if (c_y->size[1] != 5) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI, "MATLAB:innerdim",
      "MATLAB:innerdim", 0);
  }

  emxInit_real_T(&st, &d_y, 2, &vd_emlrtRTEI);
  b_st.site = &id_emlrtRSI;
  for (i2 = 0; i2 < 4; i2++) {
    for (i3 = 0; i3 < 4; i3++) {
      Sper = 0.0;
      for (i4 = 0; i4 < 5; i4++) {
        Sper += x_nom_data[i2 + (i4 << 2)] * Pigreco[i4 + 5 * i3];
      }

      e_y[i2 + (i3 << 2)] = Sper;
    }
  }

  real_T b_b[16];
  emxFree_real_T(&b_st, &c_y);
  c_st.site = &id_emlrtRSI;
  b_inv(&c_st, e_y, b_b);
  c_st.site = &af_emlrtRSI;
  e_mtimes(&c_st, y, b_b, d_y);
  emxFree_real_T(&b_st, &y);
  emxInit_real_T(&st, &f_y, 2, &vd_emlrtRTEI);
  b_st.site = &id_emlrtRSI;
  c_st.site = &af_emlrtRSI;
  f_mtimes(&c_st, d_y, Pigreco, f_y);
  emxFree_real_T(&b_st, &d_y);
  b_st.site = &id_emlrtRSI;
  r6 = *r2;
  i_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  i_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &i_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &id_emlrtRSI;
  inv(&c_st, &r6, b);
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, b, b->size[0]);
  c_st.site = &af_emlrtRSI;
  g_mtimes(&c_st, f_y, b, a);
  x_nom_data = a->data;
  emxFree_real_T(&b_st, &f_y);
  emxFree_real_T(&b_st, &b);
  if ((QN->size[0] != a->size[0]) && ((QN->size[0] != 1) && (a->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(QN->size[0], a->size[0], &bc_emlrtECI, &st);
  }

  if ((QN->size[1] != a->size[1]) && ((QN->size[1] != 1) && (a->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(QN->size[1], a->size[1], &cc_emlrtECI, &st);
  }

  b_st.site = &id_emlrtRSI;
  if ((QN->size[0] == a->size[0]) && (QN->size[1] == a->size[1])) {
    loop_ub = QN->size[0] * QN->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      QN_data[i2] += x_nom_data[i2];
    }
  } else {
    c_st.site = &id_emlrtRSI;
    plus(&c_st, QN, a);
  }

  emxFree_real_T(&b_st, &a);
  c_st.site = &bf_emlrtRSI;
  d_dynamic_size_checks(&c_st, QN, deltaX, QN->size[1], deltaX->size[0]);
  emxInit_real_T(&b_st, &p_new, 1, &kd_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  h_mtimes(&c_st, QN, deltaX, p_new);
  emxFree_real_T(&b_st, &QN);
  if ((physical_NSTATE_tmp != p_new->size[0]) && ((physical_NSTATE_tmp != 1) &&
       (p_new->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(physical_NSTATE_tmp, p_new->size[0],
      &dc_emlrtECI, &st);
  }

  if (physical_NSTATE_tmp == p_new->size[0]) {
    i1 = p_new->size[0];
    p_new->size[0] = physical_NSTATE_tmp;
    emxEnsureCapacity_real_T(&st, p_new, i1, &kd_emlrtRTEI);
    x_nom_data = p_new->data;
    for (i1 = 0; i1 < physical_NSTATE_tmp; i1++) {
      x_nom_data[i1] += s_data[i + i1];
    }
  } else {
    b_st.site = &id_emlrtRSI;
    q_binary_expand_op(&b_st, p_new, s, i, i1);
  }

  /*  Derivatives of nominal state and costate */
  emxInit_real_T(&st, &xd_nom, 1, &ld_emlrtRTEI);
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &dd_emlrtDCI, &st);
  }

  i = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != i) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &ed_emlrtDCI, &st);
  }

  i1 = xd_nom->size[0];
  xd_nom->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, xd_nom, i1, &ld_emlrtRTEI);
  xd_nom_data = xd_nom->data;
  if ((int32_T)physical_NSTATE != i) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &ed_emlrtDCI, &st);
  }

  loop_ub = (int32_T)physical_NSTATE;
  for (i = 0; i < loop_ub; i++) {
    xd_nom_data[i] = 0.0;
  }

  emxInit_real_T(&st, &pd_nom, 1, &md_emlrtRTEI);
  i = pd_nom->size[0];
  pd_nom->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd_nom, i, &md_emlrtRTEI);
  pd_nom_data = pd_nom->data;
  loop_ub = (int32_T)physical_NSTATE;
  for (i = 0; i < loop_ub; i++) {
    pd_nom_data[i] = 0.0;
  }

  b_st.site = &jd_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x_nom, p_nom, SIGN_nom, physical_Tmax,
    physical_c, physical_NSTATE, physical_shoot, physical_EPS, phi, deltaX);
  deltaX_data = deltaX->data;
  phi_data = phi->data;
  b_st.site = &kd_emlrtRSI;
  HamiltonianSecondDerivatives(&b_st, x_nom, p_nom, SIGN_nom, physical_Tmax,
    physical_c, physical_shoot, physical_EPS, H_xx_nom, H_xp_nom, H_pp_nom);
  emxFree_real_T(&st, &p_nom);
  emxFree_real_T(&st, &x_nom);
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
    i = 0;
  } else {
    if (physical_NSTATE > 5.0) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5, &eg_emlrtBCI,
        &st);
    }

    loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) || ((int32_T)(real32_T)
         physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
        (int32_T)physical_NSTATE, &fg_emlrtBCI, &st);
    }

    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }

  emlrtSubAssignSizeCheckR2012b(&i, 1, &loop_ub, 1, &ic_emlrtECI, &st);
  for (i = 0; i < loop_ub; i++) {
    xd_nom_data[i] = deltaX_data[i];
  }

  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
    i = 0;
  } else {
    loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) || ((int32_T)(real32_T)
         physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
        (int32_T)physical_NSTATE, &gg_emlrtBCI, &st);
    }

    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    tmp_data[i1] = -phi_data[i1];
  }

  emlrtSubAssignSizeCheckR2012b(&i, 1, &loop_ub, 1, &jc_emlrtECI, &st);
  for (i = 0; i < loop_ub; i++) {
    pd_nom_data[i] = tmp_data[i];
  }

  b_st.site = &ld_emlrtRSI;
  r6 = *r2;
  j_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  j_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &j_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r2;
  k_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  k_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &k_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &dUN, 2, &nd_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  i_mtimes(&c_st, H_xp_nom, &r6, dUN);
  b_st.site = &ld_emlrtRSI;
  r6 = *r3;
  l_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  l_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &l_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r3;
  m_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  m_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &m_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &r7, 2, &rd_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_pp_nom, &r6, r7);
  x_nom_data = r7->data;
  if ((dUN->size[1] != r7->size[1]) && ((dUN->size[1] != 1) && (r7->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dUN->size[1], r7->size[1], &ec_emlrtECI, &st);
  }

  if (dUN->size[1] == r7->size[1]) {
    loop_ub = 5 * dUN->size[1];
    i = dUN->size[0] * dUN->size[1];
    dUN->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dUN, i, &nd_emlrtRTEI);
    QN_data = dUN->data;
    for (i = 0; i < loop_ub; i++) {
      QN_data[i] += x_nom_data[i];
    }
  } else {
    b_st.site = &ld_emlrtRSI;
    c_plus(&b_st, dUN, r7);
    QN_data = dUN->data;
  }

  b_st.site = &md_emlrtRSI;
  for (i = 0; i < 25; i++) {
    H_xx_nom[i] = -H_xx_nom[i];
  }

  r6 = *r2;
  n_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  n_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &n_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r2;
  o_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  o_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &o_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &dVN, 2, &od_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_xx_nom, &r6, dVN);
  emxFree_real_T(&b_st, &r2);
  b_st.site = &md_emlrtRSI;
  r6 = *r3;
  p_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  p_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &p_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r3;
  q_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  q_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &q_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_xp_nom, &r6, r7);
  x_nom_data = r7->data;
  emxFree_real_T(&b_st, &r3);
  if ((dVN->size[1] != r7->size[1]) && ((dVN->size[1] != 1) && (r7->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dVN->size[1], r7->size[1], &fc_emlrtECI, &st);
  }

  if (dVN->size[1] == r7->size[1]) {
    loop_ub = 5 * dVN->size[1];
    i = dVN->size[0] * dVN->size[1];
    dVN->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dVN, i, &od_emlrtRTEI);
    phi_data = dVN->data;
    for (i = 0; i < loop_ub; i++) {
      phi_data[i] -= x_nom_data[i];
    }
  } else {
    b_st.site = &md_emlrtRSI;
    minus(&b_st, dVN, r7);
    phi_data = dVN->data;
  }

  b_st.site = &nd_emlrtRSI;
  b_dv[0] = d;
  b_dv[1] = 1.0;
  b_st.site = &nd_emlrtRSI;
  nx = 5 * dUN->size[1];
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  physical_NSTATE_tmp = (int32_T)d;
  n = 5;
  if (dUN->size[1] > 5) {
    n = dUN->size[1];
  }

  if ((int8_T)(int32_T)d > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int8_T)d != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &od_emlrtRSI;
  b_dv[0] = d;
  b_dv[1] = 1.0;
  b_st.site = &od_emlrtRSI;
  nx = 5 * dVN->size[1];
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  b_physical_NSTATE_tmp = (int32_T)d;
  n = 5;
  if (dVN->size[1] > 5) {
    n = dVN->size[1];
  }

  if ((int8_T)(int32_T)d > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int8_T)d != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &pd_emlrtRSI;
  r6 = *r4;
  r_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  r_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &r_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r4;
  s_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  s_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &s_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &dUn, 2, &pd_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  i_mtimes(&c_st, H_xp_nom, &r6, dUn);
  b_st.site = &pd_emlrtRSI;
  r6 = *r5;
  t_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  t_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &t_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r5;
  u_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  u_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &u_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_pp_nom, &r6, r7);
  x_nom_data = r7->data;
  if ((dUn->size[1] != r7->size[1]) && ((dUn->size[1] != 1) && (r7->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dUn->size[1], r7->size[1], &gc_emlrtECI, &st);
  }

  if (dUn->size[1] == r7->size[1]) {
    loop_ub = 5 * dUn->size[1];
    i = dUn->size[0] * dUn->size[1];
    dUn->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dUn, i, &pd_emlrtRTEI);
    dUn_data = dUn->data;
    for (i = 0; i < loop_ub; i++) {
      dUn_data[i] += x_nom_data[i];
    }
  } else {
    b_st.site = &pd_emlrtRSI;
    c_plus(&b_st, dUn, r7);
    dUn_data = dUn->data;
  }

  b_st.site = &qd_emlrtRSI;
  r6 = *r4;
  v_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  v_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &v_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r4;
  w_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  w_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &w_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &dVn, 2, &qd_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_xx_nom, &r6, dVn);
  emxFree_real_T(&b_st, &r4);
  b_st.site = &qd_emlrtRSI;
  r6 = *r5;
  x_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  x_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &x_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r5;
  y_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  y_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &y_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_xp_nom, &r6, r7);
  x_nom_data = r7->data;
  emxFree_real_T(&b_st, &r5);
  if ((dVn->size[1] != r7->size[1]) && ((dVn->size[1] != 1) && (r7->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dVn->size[1], r7->size[1], &hc_emlrtECI, &st);
  }

  if (dVn->size[1] == r7->size[1]) {
    loop_ub = 5 * dVn->size[1];
    i = dVn->size[0] * dVn->size[1];
    dVn->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dVn, i, &qd_emlrtRTEI);
    dVn_data = dVn->data;
    for (i = 0; i < loop_ub; i++) {
      dVn_data[i] -= x_nom_data[i];
    }
  } else {
    b_st.site = &qd_emlrtRSI;
    minus(&b_st, dVn, r7);
    dVn_data = dVn->data;
  }

  emxFree_real_T(&st, &r7);
  b_st.site = &rd_emlrtRSI;
  b_dv[0] = d;
  b_dv[1] = 1.0;
  b_st.site = &rd_emlrtRSI;
  nx = 5 * dUn->size[1];
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  loop_ub_tmp = (int32_T)d;
  n = 5;
  if (dUn->size[1] > 5) {
    n = dUn->size[1];
  }

  if ((int8_T)(int32_T)d > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int8_T)d != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &sd_emlrtRSI;
  b_dv[0] = d;
  b_dv[1] = 1.0;
  b_st.site = &sd_emlrtRSI;
  nx = 5 * dVn->size[1];
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  num_tmp_idx_0_tmp = (int32_T)d;
  n = 5;
  if (dVn->size[1] > 5) {
    n = dVn->size[1];
  }

  if ((int8_T)(int32_T)d > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int8_T)d != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  /*  Derivatives of perturbed costate and Switch */
  /*  Derivatives of perturbed state, with costate update */
  /*  Sper = Switching_Function(x_per,p_new,physical); */
  b_st.site = &td_emlrtRSI;

  /*  Computes switching Function and its derivatives */
  /*  Definition of the Switching function and its derivatives with evaluation of the */
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
  Sper = S_fun(&c_st, x_per, p_new, physical_Tmax, physical_c);
  b_st.site = &ud_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x_per, p_new, Sper, physical_Tmax,
    physical_c, physical_NSTATE, physical_shoot, physical_EPS, phi, deltaX);
  deltaX_data = deltaX->data;
  emxFree_real_T(&st, &p_new);
  emxFree_real_T(&st, &phi);
  emxFree_real_T(&st, &x_per);
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)physical_NSTATE;
  }

  /*  assembly of output vector */
  i = varargout_1->size[0];
  varargout_1->size[0] = (((((((xd_nom->size[0] + pd_nom->size[0]) + loop_ub) +
    c_physical_NSTATE_tmp) + (int32_T)d) + (int32_T)d) + (int32_T)d) + (int32_T)
    d) + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &rd_emlrtRTEI);
  x_nom_data = varargout_1->data;
  nx = xd_nom->size[0];
  for (i = 0; i < nx; i++) {
    x_nom_data[i] = xd_nom_data[i];
  }

  nx = pd_nom->size[0];
  for (i = 0; i < nx; i++) {
    x_nom_data[i + xd_nom->size[0]] = pd_nom_data[i];
  }

  for (i = 0; i < loop_ub; i++) {
    x_nom_data[(i + xd_nom->size[0]) + pd_nom->size[0]] = deltaX_data[i];
  }

  emxFree_real_T(&st, &deltaX);
  for (i = 0; i < c_physical_NSTATE_tmp; i++) {
    x_nom_data[((i + xd_nom->size[0]) + pd_nom->size[0]) + loop_ub] = 0.0;
  }

  for (i = 0; i < physical_NSTATE_tmp; i++) {
    x_nom_data[(((i + xd_nom->size[0]) + pd_nom->size[0]) + loop_ub) +
      c_physical_NSTATE_tmp] = QN_data[i];
  }

  emxFree_real_T(&st, &dUN);
  for (i = 0; i < b_physical_NSTATE_tmp; i++) {
    x_nom_data[((((i + xd_nom->size[0]) + pd_nom->size[0]) + loop_ub) +
                c_physical_NSTATE_tmp) + (int32_T)d] = phi_data[i];
  }

  emxFree_real_T(&st, &dVN);
  for (i = 0; i < loop_ub_tmp; i++) {
    x_nom_data[(((((i + xd_nom->size[0]) + pd_nom->size[0]) + loop_ub) +
                 c_physical_NSTATE_tmp) + (int32_T)d) + (int32_T)d] = dUn_data[i];
  }

  emxFree_real_T(&st, &dUn);
  for (i = 0; i < num_tmp_idx_0_tmp; i++) {
    x_nom_data[((((((i + xd_nom->size[0]) + pd_nom->size[0]) + loop_ub) +
                  c_physical_NSTATE_tmp) + (int32_T)d) + (int32_T)d) + (int32_T)
      d] = dVn_data[i];
  }

  emxFree_real_T(&st, &dVn);
  x_nom_data[((((((xd_nom->size[0] + pd_nom->size[0]) + loop_ub) +
                 c_physical_NSTATE_tmp) + (int32_T)d) + (int32_T)d) + (int32_T)d)
    + (int32_T)d] = 0.0;
  emxFree_real_T(&st, &pd_nom);
  emxFree_real_T(&st, &xd_nom);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfun_S_NOG_anonFcn4(const emlrtStack *sp, real_T physical_Tmax, real_T
  physical_c, real_T physical_NSTATE, real_T physical_shoot, real_T physical_EPS,
  real_T SIGN_nom, const emxArray_real_T *s, emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T r6;
  emxArray_real_T *H_x_nom;
  emxArray_real_T *dUN;
  emxArray_real_T *dUn;
  emxArray_real_T *dVN;
  emxArray_real_T *dVn;
  emxArray_real_T *p_nom;
  emxArray_real_T *p_per;
  emxArray_real_T *pd_nom;
  emxArray_real_T *phi;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *r7;
  emxArray_real_T *x_nom;
  emxArray_real_T *x_per;
  emxArray_real_T *xd_nom;
  emxArray_uint32_T *r;
  real_T H_pp_nom[25];
  real_T H_xp_nom[25];
  real_T H_xx_nom[25];
  real_T tmp_data[5];
  real_T b_dv[2];
  const real_T *s_data;
  real_T a__1;
  real_T d;
  real_T d1;
  real_T dSdt;
  real_T *H_x_nom_data;
  real_T *dUN_data;
  real_T *dUn_data;
  real_T *dVN_data;
  real_T *dVn_data;
  real_T *pd_nom_data;
  real_T *phi_data;
  real_T *x_nom_data;
  real_T *xd_nom_data;
  int32_T b_physical_NSTATE[2];
  int32_T c_physical_NSTATE[2];
  int32_T d_physical_NSTATE[2];
  int32_T e_physical_NSTATE[2];
  int32_T f_physical_NSTATE[2];
  int32_T g_physical_NSTATE[2];
  int32_T h_physical_NSTATE[2];
  int32_T i_physical_NSTATE[2];
  int32_T j_physical_NSTATE[2];
  int32_T k_physical_NSTATE[2];
  int32_T l_physical_NSTATE[2];
  int32_T m_physical_NSTATE[2];
  int32_T n_physical_NSTATE[2];
  int32_T o_physical_NSTATE[2];
  int32_T p_physical_NSTATE[2];
  int32_T q_physical_NSTATE[2];
  int32_T r_physical_NSTATE[2];
  int32_T b_num_tmp_idx_0_tmp;
  int32_T c_num_tmp_idx_0_tmp;
  int32_T d_num_tmp_idx_0_tmp;
  int32_T i;
  int32_T loop_ub;
  int32_T n;
  int32_T num_tmp_idx_0_tmp;
  int32_T nx;
  uint32_T *r1;
  boolean_T out;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  s_data = s->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &tl_emlrtRSI;

  /*  derivatives of state, costate, U, V and swtich without costate update */
  /*  Inputs:  */
  /*  inp1: [4*NSTATE+4*NSTATE^2+1x1] */
  /*  [x,p] nominal [2*NSTATEx1] */
  /*  [x,p] perturbed [2*NSTATEx1] */
  /*  [U,V] nominal [4*NSTATE^2x1] */
  /*  S perturbed */
  /*  */
  /*  inp2: physical */
  /*  */
  /*  inp3: S nominal sign of switching function in interval */
  /*  Output: */
  /*  xxd: derivatives vector [4*NSTATE+4*NSTATE^2+1x1] */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &hj_emlrtBCI, &st);
    }

    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &oe_emlrtDCI, &st);
    }

    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > s->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, s->size[0],
        &ij_emlrtBCI, &st);
    }

    loop_ub = (int32_T)physical_NSTATE;
  }

  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = loop_ub;
  b_st.site = &ul_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x_nom, 1, &lf_emlrtRTEI);
  i = x_nom->size[0];
  x_nom->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, x_nom, i, &lf_emlrtRTEI);
  x_nom_data = x_nom->data;
  for (i = 0; i < loop_ub; i++) {
    x_nom_data[i] = s_data[i];
  }

  d = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > d) {
    i = 0;
    num_tmp_idx_0_tmp = 0;
  } else {
    if (physical_NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(physical_NSTATE +
         1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &pe_emlrtDCI, &st);
    }

    if (((int32_T)(physical_NSTATE + 1.0) < 1) || ((int32_T)(physical_NSTATE +
          1.0) > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1, s->
        size[0], &jj_emlrtBCI, &st);
    }

    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &qe_emlrtDCI, &st);
    }

    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &kj_emlrtBCI, &st);
    }

    num_tmp_idx_0_tmp = (int32_T)d;
  }

  b_physical_NSTATE[0] = 1;
  nx = num_tmp_idx_0_tmp - i;
  b_physical_NSTATE[1] = nx;
  b_st.site = &vl_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &p_nom, 1, &mf_emlrtRTEI);
  num_tmp_idx_0_tmp = p_nom->size[0];
  p_nom->size[0] = nx;
  emxEnsureCapacity_real_T(&st, p_nom, num_tmp_idx_0_tmp, &mf_emlrtRTEI);
  x_nom_data = p_nom->data;
  for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < nx; num_tmp_idx_0_tmp++) {
    x_nom_data[num_tmp_idx_0_tmp] = s_data[i + num_tmp_idx_0_tmp];
  }

  d = 2.0 * physical_NSTATE + 1.0;
  a__1 = 3.0 * physical_NSTATE;
  if (d > a__1) {
    i = 0;
    num_tmp_idx_0_tmp = 0;
  } else {
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &re_emlrtDCI, &st);
    }

    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &lj_emlrtBCI, &st);
    }

    i = (int32_T)d - 1;
    if (a__1 != (int32_T)muDoubleScalarFloor(a__1)) {
      emlrtIntegerCheckR2012b(a__1, &se_emlrtDCI, &st);
    }

    if (((int32_T)a__1 < 1) || ((int32_T)a__1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)a__1, 1, s->size[0], &mj_emlrtBCI,
        &st);
    }

    num_tmp_idx_0_tmp = (int32_T)a__1;
  }

  b_physical_NSTATE[0] = 1;
  nx = num_tmp_idx_0_tmp - i;
  b_physical_NSTATE[1] = nx;
  b_st.site = &wl_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x_per, 1, &nf_emlrtRTEI);
  num_tmp_idx_0_tmp = x_per->size[0];
  x_per->size[0] = nx;
  emxEnsureCapacity_real_T(&st, x_per, num_tmp_idx_0_tmp, &nf_emlrtRTEI);
  x_nom_data = x_per->data;
  for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < nx; num_tmp_idx_0_tmp++) {
    x_nom_data[num_tmp_idx_0_tmp] = s_data[i + num_tmp_idx_0_tmp];
  }

  d = 3.0 * physical_NSTATE + 1.0;
  a__1 = 4.0 * physical_NSTATE;
  if (d > a__1) {
    i = 0;
    num_tmp_idx_0_tmp = 0;
  } else {
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &te_emlrtDCI, &st);
    }

    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &nj_emlrtBCI, &st);
    }

    i = (int32_T)d - 1;
    if (a__1 != (int32_T)muDoubleScalarFloor(a__1)) {
      emlrtIntegerCheckR2012b(a__1, &ue_emlrtDCI, &st);
    }

    if (((int32_T)a__1 < 1) || ((int32_T)a__1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)a__1, 1, s->size[0], &oj_emlrtBCI,
        &st);
    }

    num_tmp_idx_0_tmp = (int32_T)a__1;
  }

  b_physical_NSTATE[0] = 1;
  nx = num_tmp_idx_0_tmp - i;
  b_physical_NSTATE[1] = nx;
  b_st.site = &xl_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &p_per, 1, &of_emlrtRTEI);
  num_tmp_idx_0_tmp = p_per->size[0];
  p_per->size[0] = nx;
  emxEnsureCapacity_real_T(&st, p_per, num_tmp_idx_0_tmp, &of_emlrtRTEI);
  x_nom_data = p_per->data;
  for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < nx; num_tmp_idx_0_tmp++) {
    x_nom_data[num_tmp_idx_0_tmp] = s_data[i + num_tmp_idx_0_tmp];
  }

  b_st.site = &yl_emlrtRSI;
  d = physical_NSTATE * physical_NSTATE;
  dSdt = 4.0 * d;
  emxInit_uint32_T(&st, &r, &cg_emlrtRTEI);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int32_T)(dSdt - 1.0) + 1;
  emxEnsureCapacity_uint32_T(&st, r, i, &pf_emlrtRTEI);
  r1 = r->data;
  loop_ub = (int32_T)(dSdt - 1.0);
  for (i = 0; i <= loop_ub; i++) {
    d1 = a__1 + ((real_T)i + 1.0);
    if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
      emlrtIntegerCheckR2012b(d1, &ne_emlrtDCI, &st);
    }

    if (((int32_T)(uint32_T)d1 < 1) || ((int32_T)(uint32_T)d1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(uint32_T)d1, 1, s->size[0],
        &gj_emlrtBCI, &st);
    }

    r1[i] = (uint32_T)d1;
  }

  b_st.site = &yl_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], r->size);
  emxInit_real_T(&st, &phi, 1, &qf_emlrtRTEI);
  i = phi->size[0];
  phi->size[0] = r->size[1];
  emxEnsureCapacity_real_T(&st, phi, i, &qf_emlrtRTEI);
  phi_data = phi->data;
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    phi_data[i] = s_data[(int32_T)r1[i] - 1];
  }

  b_st.site = &am_emlrtRSI;
  if (d < 1.0) {
    loop_ub = 0;
  } else {
    if (r->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, r->size[1], &pj_emlrtBCI, &st);
    }

    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &ve_emlrtDCI, &st);
    }

    if (((int32_T)d < 1) || ((int32_T)d > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, r->size[1], &qj_emlrtBCI, &st);
    }

    loop_ub = (int32_T)d;
  }

  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = loop_ub;
  b_st.site = &am_emlrtRSI;
  indexShapeCheck(&b_st, r->size[1], b_physical_NSTATE);
  emxInit_real_T(&st, &r2, 1, &cg_emlrtRTEI);
  i = r2->size[0];
  r2->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, r2, i, &rf_emlrtRTEI);
  x_nom_data = r2->data;
  for (i = 0; i < loop_ub; i++) {
    x_nom_data[i] = phi_data[i];
  }

  b_dv[0] = physical_NSTATE;
  b_dv[1] = physical_NSTATE;
  b_st.site = &am_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = loop_ub;
  if (loop_ub < 1) {
    n = 1;
  }

  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(loop_ub, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  i = (int32_T)physical_NSTATE * (int32_T)physical_NSTATE;
  if (i != loop_ub) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &bm_emlrtRSI;
  b_st.site = &bm_emlrtRSI;
  a__1 = 2.0 * d;
  if (d + 1.0 > a__1) {
    num_tmp_idx_0_tmp = 0;
    n = 0;
  } else {
    if (d + 1.0 != (int32_T)muDoubleScalarFloor(d + 1.0)) {
      emlrtIntegerCheckR2012b(d + 1.0, &we_emlrtDCI, &st);
    }

    if (((int32_T)(d + 1.0) < 1) || ((int32_T)(d + 1.0) > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1, r->size[1],
        &rj_emlrtBCI, &st);
    }

    num_tmp_idx_0_tmp = (int32_T)(d + 1.0) - 1;
    if (a__1 != (int32_T)muDoubleScalarFloor(a__1)) {
      emlrtIntegerCheckR2012b(a__1, &xe_emlrtDCI, &st);
    }

    if (((int32_T)a__1 < 1) || ((int32_T)a__1 > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)a__1, 1, r->size[1], &sj_emlrtBCI,
        &st);
    }

    n = (int32_T)a__1;
  }

  b_physical_NSTATE[0] = 1;
  nx = n - num_tmp_idx_0_tmp;
  b_physical_NSTATE[1] = nx;
  b_st.site = &bm_emlrtRSI;
  indexShapeCheck(&b_st, r->size[1], b_physical_NSTATE);
  emxInit_real_T(&st, &r3, 1, &cg_emlrtRTEI);
  n = r3->size[0];
  r3->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r3, n, &sf_emlrtRTEI);
  x_nom_data = r3->data;
  for (n = 0; n < nx; n++) {
    x_nom_data[n] = phi_data[num_tmp_idx_0_tmp + n];
  }

  b_st.site = &bm_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }

  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (i != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &cm_emlrtRSI;
  b_st.site = &cm_emlrtRSI;
  d1 = 3.0 * d;
  if (a__1 + 1.0 > d1) {
    num_tmp_idx_0_tmp = 0;
    n = 0;
  } else {
    if (a__1 + 1.0 != (int32_T)muDoubleScalarFloor(a__1 + 1.0)) {
      emlrtIntegerCheckR2012b(a__1 + 1.0, &ye_emlrtDCI, &st);
    }

    if (((int32_T)(a__1 + 1.0) < 1) || ((int32_T)(a__1 + 1.0) > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(a__1 + 1.0), 1, r->size[1],
        &tj_emlrtBCI, &st);
    }

    num_tmp_idx_0_tmp = (int32_T)(a__1 + 1.0) - 1;
    if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
      emlrtIntegerCheckR2012b(d1, &af_emlrtDCI, &st);
    }

    if (((int32_T)d1 < 1) || ((int32_T)d1 > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, r->size[1], &uj_emlrtBCI,
        &st);
    }

    n = (int32_T)d1;
  }

  b_physical_NSTATE[0] = 1;
  nx = n - num_tmp_idx_0_tmp;
  b_physical_NSTATE[1] = nx;
  b_st.site = &cm_emlrtRSI;
  indexShapeCheck(&b_st, r->size[1], b_physical_NSTATE);
  emxInit_real_T(&st, &r4, 1, &cg_emlrtRTEI);
  n = r4->size[0];
  r4->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r4, n, &tf_emlrtRTEI);
  x_nom_data = r4->data;
  for (n = 0; n < nx; n++) {
    x_nom_data[n] = phi_data[num_tmp_idx_0_tmp + n];
  }

  b_st.site = &cm_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }

  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (i != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &dm_emlrtRSI;
  b_st.site = &dm_emlrtRSI;
  if (d1 + 1.0 > dSdt) {
    num_tmp_idx_0_tmp = 0;
    n = 0;
  } else {
    if (d1 + 1.0 != (int32_T)muDoubleScalarFloor(d1 + 1.0)) {
      emlrtIntegerCheckR2012b(d1 + 1.0, &bf_emlrtDCI, &st);
    }

    if (((int32_T)(d1 + 1.0) < 1) || ((int32_T)(d1 + 1.0) > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d1 + 1.0), 1, r->size[1],
        &vj_emlrtBCI, &st);
    }

    num_tmp_idx_0_tmp = (int32_T)(d1 + 1.0) - 1;
    if (dSdt != (int32_T)muDoubleScalarFloor(dSdt)) {
      emlrtIntegerCheckR2012b(dSdt, &cf_emlrtDCI, &st);
    }

    if (((int32_T)dSdt < 1) || ((int32_T)dSdt > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)dSdt, 1, r->size[1], &wj_emlrtBCI,
        &st);
    }

    n = (int32_T)dSdt;
  }

  b_physical_NSTATE[0] = 1;
  nx = n - num_tmp_idx_0_tmp;
  b_physical_NSTATE[1] = nx;
  b_st.site = &dm_emlrtRSI;
  indexShapeCheck(&b_st, r->size[1], b_physical_NSTATE);
  emxFree_uint32_T(&st, &r);
  emxInit_real_T(&st, &r5, 1, &cg_emlrtRTEI);
  n = r5->size[0];
  r5->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r5, n, &uf_emlrtRTEI);
  x_nom_data = r5->data;
  for (n = 0; n < nx; n++) {
    x_nom_data[n] = phi_data[num_tmp_idx_0_tmp + n];
  }

  b_st.site = &dm_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }

  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (i != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  if (s->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(s->size[0], 1, s->size[0], &xj_emlrtBCI, &st);
  }

  /*  Derivatives of nominal state and costate */
  emxInit_real_T(&st, &xd_nom, 1, &vf_emlrtRTEI);
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &le_emlrtDCI, &st);
  }

  i = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != i) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &me_emlrtDCI, &st);
  }

  num_tmp_idx_0_tmp = xd_nom->size[0];
  xd_nom->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, xd_nom, num_tmp_idx_0_tmp, &vf_emlrtRTEI);
  xd_nom_data = xd_nom->data;
  if ((int32_T)physical_NSTATE != i) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &me_emlrtDCI, &st);
  }

  loop_ub = (int32_T)physical_NSTATE;
  for (i = 0; i < loop_ub; i++) {
    xd_nom_data[i] = 0.0;
  }

  emxInit_real_T(&st, &pd_nom, 1, &wf_emlrtRTEI);
  i = pd_nom->size[0];
  pd_nom->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd_nom, i, &wf_emlrtRTEI);
  pd_nom_data = pd_nom->data;
  loop_ub = (int32_T)physical_NSTATE;
  for (i = 0; i < loop_ub; i++) {
    pd_nom_data[i] = 0.0;
  }

  emxInit_real_T(&st, &H_x_nom, 1, &cg_emlrtRTEI);
  b_st.site = &em_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x_nom, p_nom, SIGN_nom, physical_Tmax,
    physical_c, physical_NSTATE, physical_shoot, physical_EPS, H_x_nom, phi);
  phi_data = phi->data;
  H_x_nom_data = H_x_nom->data;
  b_st.site = &fm_emlrtRSI;
  HamiltonianSecondDerivatives(&b_st, x_nom, p_nom, SIGN_nom, physical_Tmax,
    physical_c, physical_shoot, physical_EPS, H_xx_nom, H_xp_nom, H_pp_nom);
  emxFree_real_T(&st, &p_nom);
  emxFree_real_T(&st, &x_nom);
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
    i = 0;
  } else {
    if (physical_NSTATE > 5.0) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5, &yj_emlrtBCI,
        &st);
    }

    loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) || ((int32_T)(real32_T)
         physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
        (int32_T)physical_NSTATE, &ak_emlrtBCI, &st);
    }

    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }

  emlrtSubAssignSizeCheckR2012b(&i, 1, &loop_ub, 1, &wc_emlrtECI, &st);
  for (i = 0; i < loop_ub; i++) {
    xd_nom_data[i] = phi_data[i];
  }

  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
    i = 0;
  } else {
    loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) || ((int32_T)(real32_T)
         physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
        (int32_T)physical_NSTATE, &bk_emlrtBCI, &st);
    }

    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }

  for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < loop_ub; num_tmp_idx_0_tmp++)
  {
    tmp_data[num_tmp_idx_0_tmp] = -H_x_nom_data[num_tmp_idx_0_tmp];
  }

  emlrtSubAssignSizeCheckR2012b(&i, 1, &loop_ub, 1, &xc_emlrtECI, &st);
  for (i = 0; i < loop_ub; i++) {
    pd_nom_data[i] = tmp_data[i];
  }

  b_st.site = &gm_emlrtRSI;
  r6 = *r2;
  c_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  c_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &c_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r2;
  d_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  d_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &d_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &dUN, 2, &xf_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  i_mtimes(&c_st, H_xp_nom, &r6, dUN);
  b_st.site = &gm_emlrtRSI;
  r6 = *r3;
  e_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  e_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &e_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r3;
  f_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  f_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &f_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &r7, 2, &cg_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_pp_nom, &r6, r7);
  x_nom_data = r7->data;
  if ((dUN->size[1] != r7->size[1]) && ((dUN->size[1] != 1) && (r7->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dUN->size[1], r7->size[1], &sc_emlrtECI, &st);
  }

  if (dUN->size[1] == r7->size[1]) {
    loop_ub = 5 * dUN->size[1];
    i = dUN->size[0] * dUN->size[1];
    dUN->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dUN, i, &xf_emlrtRTEI);
    dUN_data = dUN->data;
    for (i = 0; i < loop_ub; i++) {
      dUN_data[i] += x_nom_data[i];
    }
  } else {
    b_st.site = &gm_emlrtRSI;
    c_plus(&b_st, dUN, r7);
    dUN_data = dUN->data;
  }

  b_st.site = &hm_emlrtRSI;
  for (i = 0; i < 25; i++) {
    H_xx_nom[i] = -H_xx_nom[i];
  }

  r6 = *r2;
  g_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  g_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &g_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r2;
  h_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  h_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &h_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &dVN, 2, &yf_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_xx_nom, &r6, dVN);
  emxFree_real_T(&b_st, &r2);
  b_st.site = &hm_emlrtRSI;
  r6 = *r3;
  i_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  i_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &i_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r3;
  j_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  j_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &j_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_xp_nom, &r6, r7);
  x_nom_data = r7->data;
  emxFree_real_T(&b_st, &r3);
  if ((dVN->size[1] != r7->size[1]) && ((dVN->size[1] != 1) && (r7->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dVN->size[1], r7->size[1], &tc_emlrtECI, &st);
  }

  if (dVN->size[1] == r7->size[1]) {
    loop_ub = 5 * dVN->size[1];
    i = dVN->size[0] * dVN->size[1];
    dVN->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dVN, i, &yf_emlrtRTEI);
    dVN_data = dVN->data;
    for (i = 0; i < loop_ub; i++) {
      dVN_data[i] -= x_nom_data[i];
    }
  } else {
    b_st.site = &hm_emlrtRSI;
    minus(&b_st, dVN, r7);
    dVN_data = dVN->data;
  }

  b_st.site = &im_emlrtRSI;
  b_dv[0] = d;
  b_dv[1] = 1.0;
  b_st.site = &im_emlrtRSI;
  nx = 5 * dUN->size[1];
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  num_tmp_idx_0_tmp = (int32_T)d;
  n = 5;
  if (dUN->size[1] > 5) {
    n = dUN->size[1];
  }

  if ((int8_T)(int32_T)d > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int8_T)d != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &jm_emlrtRSI;
  b_dv[0] = d;
  b_dv[1] = 1.0;
  b_st.site = &jm_emlrtRSI;
  nx = 5 * dVN->size[1];
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  b_num_tmp_idx_0_tmp = (int32_T)d;
  n = 5;
  if (dVN->size[1] > 5) {
    n = dVN->size[1];
  }

  if ((int8_T)(int32_T)d > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int8_T)d != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &km_emlrtRSI;
  r6 = *r4;
  k_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  k_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &k_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r4;
  l_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  l_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &l_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &dUn, 2, &ag_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  i_mtimes(&c_st, H_xp_nom, &r6, dUn);
  b_st.site = &km_emlrtRSI;
  r6 = *r5;
  m_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  m_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &m_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r5;
  n_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  n_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &n_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_pp_nom, &r6, r7);
  x_nom_data = r7->data;
  if ((dUn->size[1] != r7->size[1]) && ((dUn->size[1] != 1) && (r7->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dUn->size[1], r7->size[1], &uc_emlrtECI, &st);
  }

  if (dUn->size[1] == r7->size[1]) {
    loop_ub = 5 * dUn->size[1];
    i = dUn->size[0] * dUn->size[1];
    dUn->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dUn, i, &ag_emlrtRTEI);
    dUn_data = dUn->data;
    for (i = 0; i < loop_ub; i++) {
      dUn_data[i] += x_nom_data[i];
    }
  } else {
    b_st.site = &km_emlrtRSI;
    c_plus(&b_st, dUn, r7);
    dUn_data = dUn->data;
  }

  b_st.site = &lm_emlrtRSI;
  r6 = *r4;
  o_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  o_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &o_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r4;
  p_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  p_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &p_physical_NSTATE[0];
  r6.numDimensions = 2;
  emxInit_real_T(&b_st, &dVn, 2, &bg_emlrtRTEI);
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_xx_nom, &r6, dVn);
  emxFree_real_T(&b_st, &r4);
  b_st.site = &lm_emlrtRSI;
  r6 = *r5;
  q_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  q_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &q_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&c_st, &r6, (int32_T)physical_NSTATE);
  r6 = *r5;
  r_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  r_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r6.size = &r_physical_NSTATE[0];
  r6.numDimensions = 2;
  c_st.site = &af_emlrtRSI;
  j_mtimes(&c_st, H_xp_nom, &r6, r7);
  x_nom_data = r7->data;
  emxFree_real_T(&b_st, &r5);
  if ((dVn->size[1] != r7->size[1]) && ((dVn->size[1] != 1) && (r7->size[1] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dVn->size[1], r7->size[1], &vc_emlrtECI, &st);
  }

  if (dVn->size[1] == r7->size[1]) {
    loop_ub = 5 * dVn->size[1];
    i = dVn->size[0] * dVn->size[1];
    dVn->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dVn, i, &bg_emlrtRTEI);
    dVn_data = dVn->data;
    for (i = 0; i < loop_ub; i++) {
      dVn_data[i] -= x_nom_data[i];
    }
  } else {
    b_st.site = &lm_emlrtRSI;
    minus(&b_st, dVn, r7);
    dVn_data = dVn->data;
  }

  emxFree_real_T(&st, &r7);
  b_st.site = &mm_emlrtRSI;
  b_dv[0] = d;
  b_dv[1] = 1.0;
  b_st.site = &mm_emlrtRSI;
  nx = 5 * dUn->size[1];
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  c_num_tmp_idx_0_tmp = (int32_T)d;
  n = 5;
  if (dUn->size[1] > 5) {
    n = dUn->size[1];
  }

  if ((int8_T)(int32_T)d > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int8_T)d != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &nm_emlrtRSI;
  b_dv[0] = d;
  b_dv[1] = 1.0;
  b_st.site = &nm_emlrtRSI;
  nx = 5 * dVn->size[1];
  c_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  d_num_tmp_idx_0_tmp = (int32_T)d;
  n = 5;
  if (dVn->size[1] > 5) {
    n = dVn->size[1];
  }

  if ((int8_T)(int32_T)d > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if ((int8_T)d != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  /*  Derivatives of perturbed costate and Switch */
  b_st.site = &om_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x_per, p_per, s_data[s->size[0] - 1],
    physical_Tmax, physical_c, physical_NSTATE, physical_shoot, physical_EPS,
    phi, H_x_nom);
  H_x_nom_data = H_x_nom->data;
  phi_data = phi->data;
  b_st.site = &pm_emlrtRSI;
  b_Switching_Function(&b_st, x_per, p_per, physical_Tmax, physical_c,
                       physical_NSTATE, physical_shoot, physical_EPS, &a__1,
                       &dSdt);
  emxFree_real_T(&st, &p_per);
  emxFree_real_T(&st, &x_per);
  if (physical_NSTATE < 1.0) {
    loop_ub = 1;
    nx = -1;
  } else {
    loop_ub = (int32_T)physical_NSTATE + 1;
    nx = (int32_T)physical_NSTATE - 1;
  }

  i = varargout_1->size[0];
  varargout_1->size[0] = (((((((xd_nom->size[0] + pd_nom->size[0]) + nx) +
    loop_ub) + (int32_T)d) + (int32_T)d) + (int32_T)d) + (int32_T)d) + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &cg_emlrtRTEI);
  x_nom_data = varargout_1->data;
  n = xd_nom->size[0];
  for (i = 0; i < n; i++) {
    x_nom_data[i] = xd_nom_data[i];
  }

  n = pd_nom->size[0];
  for (i = 0; i < n; i++) {
    x_nom_data[i + xd_nom->size[0]] = pd_nom_data[i];
  }

  for (i = 0; i <= nx; i++) {
    x_nom_data[(i + xd_nom->size[0]) + pd_nom->size[0]] = H_x_nom_data[i];
  }

  emxFree_real_T(&st, &H_x_nom);
  for (i = 0; i <= loop_ub - 2; i++) {
    x_nom_data[(((i + xd_nom->size[0]) + pd_nom->size[0]) + nx) + 1] =
      -phi_data[i];
  }

  emxFree_real_T(&st, &phi);
  for (i = 0; i < num_tmp_idx_0_tmp; i++) {
    x_nom_data[(((i + xd_nom->size[0]) + pd_nom->size[0]) + nx) + loop_ub] =
      dUN_data[i];
  }

  emxFree_real_T(&st, &dUN);
  for (i = 0; i < b_num_tmp_idx_0_tmp; i++) {
    x_nom_data[((((i + xd_nom->size[0]) + pd_nom->size[0]) + nx) + loop_ub) +
      (int32_T)d] = dVN_data[i];
  }

  emxFree_real_T(&st, &dVN);
  for (i = 0; i < c_num_tmp_idx_0_tmp; i++) {
    x_nom_data[(((((i + xd_nom->size[0]) + pd_nom->size[0]) + nx) + loop_ub) +
                (int32_T)d) + (int32_T)d] = dUn_data[i];
  }

  emxFree_real_T(&st, &dUn);
  for (i = 0; i < d_num_tmp_idx_0_tmp; i++) {
    x_nom_data[((((((i + xd_nom->size[0]) + pd_nom->size[0]) + nx) + loop_ub) +
                 (int32_T)d) + (int32_T)d) + (int32_T)d] = dVn_data[i];
  }

  emxFree_real_T(&st, &dVn);
  x_nom_data[((((((xd_nom->size[0] + pd_nom->size[0]) + nx) + loop_ub) +
                (int32_T)d) + (int32_T)d) + (int32_T)d) + (int32_T)d] = dSdt;
  emxFree_real_T(&st, &pd_nom);
  emxFree_real_T(&st, &xd_nom);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void plus(const emlrtStack *sp, emxArray_real_T *in1, const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &nh_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  if (in2->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->size[0];
  }

  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }

  emxEnsureCapacity_real_T(sp, b_in1, i, &nh_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_0 = (in2->size[0] != 1);
  stride_1_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in2->size[1] == 1) {
    loop_ub = in1->size[1];
  } else {
    loop_ub = in2->size[1];
  }

  for (i = 0; i < loop_ub; i++) {
    i1 = in2->size[0];
    if (i1 == 1) {
      b_loop_ub = in1->size[0];
    } else {
      b_loop_ub = i1;
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_in1_data[i1 + b_in1->size[0] * i] = in1_data[i1 * stride_0_0 + in1->
        size[0] * aux_0_1] + in2_data[i1 * stride_1_0 + in2->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_in1->size[0];
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &nh_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_in1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in1_data[i1 + b_in1->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (objfun_S_NOG.c) */
