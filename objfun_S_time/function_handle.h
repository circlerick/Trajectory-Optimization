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
#include "objfun_S_time_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void ab_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void bb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void cb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void db_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void eb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void fb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void gb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void hb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void ib_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void j_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12,
                        const emxArray_real_T *in13);

void jb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void k_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void kb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void l_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void lb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void m_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void mb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void n_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void nb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void o_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void ob_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

void p_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void pb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void q_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void qb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void r_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void rb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11);

void s_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12,
                        const emxArray_real_T *in13);

void sb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11);

void t_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12,
                        const emxArray_real_T *in13);

void tb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void u_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void ub_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void v_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void vb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void w_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11);

void wb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void x_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11);

void xb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void y_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10);

/* End of code generation (function_handle.h) */
