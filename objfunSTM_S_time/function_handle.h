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
#include "objfunSTM_S_time_types.h"
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
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11);

void ac_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
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
                         const emxArray_real_T *in9, real_T in10);

void fb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void gb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

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

void jb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
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
                        const emxArray_real_T *in12,
                        const emxArray_real_T *in13);

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
                         const emxArray_real_T *in12);

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
                         const emxArray_real_T *in12);

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
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

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
                         const emxArray_real_T *in12,
                         const emxArray_real_T *in13);

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
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void s_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void sb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11,
                         const emxArray_real_T *in12);

void t_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void tb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11);

void u_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12,
                        const emxArray_real_T *in13);

void ub_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10,
                         const emxArray_real_T *in11);

void v_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12,
                        const emxArray_real_T *in13);

void vb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void w_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void wb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void x_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11,
                        const emxArray_real_T *in12);

void xb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

void y_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emlrtRSInfo in2, real_T in3, real_T in4,
                        real_T in5, real_T in6, real_T in7, real_T in8,
                        const emxArray_real_T *in9, real_T in10,
                        const emxArray_real_T *in11);

void yb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, real_T in3, real_T in4,
                         real_T in5, real_T in6, real_T in7, real_T in8,
                         const emxArray_real_T *in9, real_T in10);

/* End of code generation (function_handle.h) */
