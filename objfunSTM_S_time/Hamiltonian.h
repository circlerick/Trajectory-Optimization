/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hamiltonian.h
 *
 * Code generation for function 'Hamiltonian'
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
real_T Hamiltonian(const emlrtStack *sp, const emxArray_real_T *x,
                   const emxArray_real_T *p, real_T S, real_T physical_Tmax,
                   real_T physical_c, real_T physical_shoot,
                   real_T physical_EPS);

/* End of code generation (Hamiltonian.h) */
