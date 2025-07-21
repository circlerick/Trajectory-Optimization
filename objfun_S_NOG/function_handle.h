/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * function_handle.h
 *
 * Code generation for function 'function_handle'
 *
 */

#pragma once

/* Include files */
#include "objfun_S_NOG_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void ac_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void ad_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void bc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void bd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void cc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void cd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void dc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void dd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void ec_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void ed_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void fb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void fc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void fd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void gb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void gc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void gd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12);

void hb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void hc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void hd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12);

void ib_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void ic_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void id_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void jb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void jc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void jd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void kb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void kc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void kd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void lb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void lc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12);

void ld_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void mb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void mc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12);

void md_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void nb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void nc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void nd_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void ob_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void oc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void od_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void pb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13,
                         const emxArray_real_T *in14);

void pc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void qb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13);

void qc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void rb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2],
                         const emxArray_real_T *in13);

void rc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void sb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2]);

void sc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void tb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2]);

void tc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2]);

void ub_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2]);

void uc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void vb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2]);

void vc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void wb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2]);

void wc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void xb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2]);

void xc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void yb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9[20], const real_T in10_data[],
                         const int32_T *in10_size, real_T in11,
                         const real_T in12_data[], const int32_T in12_size[2]);

void yc_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const real_T in9_data[], const int32_T *in9_size,
                         real_T in10, const real_T in11_data[],
                         const int32_T in11_size[2],
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

/* End of code generation (function_handle.h) */
