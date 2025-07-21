/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_time_types.h
 *
 * Code generation for function 'objfun_S_time'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  real_T Tmax;
  real_T g;
  real_T mu;
  real_T RE;
  real_T RM;
  real_T c;
  real_T Earth[2];
  real_T Moon[2];
  real_T NSTATE;
  real_T shoot;
  real_T g0_x[5];
  real_T EPS;
} struct_T;
#endif /* typedef_struct_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  real_T Tmax;
  real_T g;
  real_T mu;
  real_T RE;
  real_T RM;
  real_T c;
  emxArray_real_T *Earth;
  emxArray_real_T *Moon;
  real_T NSTATE;
  real_T shoot;
  emxArray_real_T *g0_x;
  real_T EPS;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  real_T T0;
  real_T Tfin;
  emxArray_real_T *A;
  emxArray_real_T *Xf;
  emxArray_real_T *X0;
  emxArray_real_T *Sigma;
  emxArray_real_T *Pigreco;
  emxArray_real_T *g0_xx;
} struct1_T;
#endif /* typedef_struct1_T */

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T {
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_char_T */
#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T
typedef struct emxArray_char_T emxArray_char_T;
#endif /* typedef_emxArray_char_T */

#ifndef typedef_struct2_T
#define typedef_struct2_T
typedef struct {
  real_T Nint;
  real_T ITERS;
  real_T JNET;
  emxArray_char_T *problem;
  emxArray_real_T *steps;
  real_T val1;
  real_T val2;
  emxArray_real_T *box_lb;
  emxArray_real_T *box_ub;
  real_T tU;
  real_T lU;
  real_T vmax;
} struct2_T;
#endif /* typedef_struct2_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef typedef_b_objfun_S_time
#define typedef_b_objfun_S_time
typedef struct {
  real_T tempt[1000000];
} b_objfun_S_time;
#endif /* typedef_b_objfun_S_time */

#ifndef typedef_objfun_S_timeStackData
#define typedef_objfun_S_timeStackData
typedef struct {
  b_objfun_S_time f0;
} objfun_S_timeStackData;
#endif /* typedef_objfun_S_timeStackData */

/* End of code generation (objfun_S_time_types.h) */
