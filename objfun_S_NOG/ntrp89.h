/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ntrp89.h
 *
 * Code generation for function 'ntrp89'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_ntrp89(const real_T tinterp[7], real_T t, const real_T y_data[],
              int32_T y_size, real_T h, const real_T f_data[],
              const int32_T f_size[2], real_T yinterp_data[],
              int32_T yinterp_size[2]);

void ntrp89(const real_T tinterp[13], real_T t, const real_T y_data[],
            int32_T y_size, real_T h, const real_T f_data[],
            const int32_T f_size[2], real_T yinterp_data[],
            int32_T yinterp_size[2], real_T ypinterp_data[],
            int32_T ypinterp_size[2]);

void v_binary_expand_op(real_T in1_data[], const real_T in2_data[],
                        const int32_T *in2_size, real_T in3,
                        const real_T in4_data[], const int32_T *in4_size);

/* End of code generation (ntrp89.h) */
