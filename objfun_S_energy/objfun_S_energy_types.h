/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_energy_types.h
 *
 * Code generation for function 'objfun_S_energy'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T
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
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  real_T T0;
  real_T Tfin;
  real_T A[25];
  real_T Xf[5];
  real_T X0[5];
  real_T Sigma[5];
  real_T Pigreco[20];
  real_T g0_xx[25];
} struct1_T;
#endif /* typedef_struct1_T */

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

#ifndef typedef_b_objfun_S_energy
#define typedef_b_objfun_S_energy
typedef struct {
  real_T tempt[1000000];
} b_objfun_S_energy;
#endif /* typedef_b_objfun_S_energy */

#ifndef typedef_objfun_S_energyStackData
#define typedef_objfun_S_energyStackData
typedef struct {
  b_objfun_S_energy f0;
} objfun_S_energyStackData;
#endif /* typedef_objfun_S_energyStackData */

/* End of code generation (objfun_S_energy_types.h) */
