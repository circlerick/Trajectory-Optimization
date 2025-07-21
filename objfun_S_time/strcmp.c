/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * strcmp.c
 *
 * Code generation for function 'strcmp'
 *
 */

/* Include files */
#include "strcmp.h"
#include "objfun_S_time_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
boolean_T b_strcmp(const emxArray_char_T *a)
{
  static const char_T cv[11] = {'m', 'i', 'n', 'i', 'm', 'u',
                                'm', 't', 'i', 'm', 'e'};
  const char_T *a_data;
  boolean_T b_bool;
  a_data = a->data;
  b_bool = false;
  if (a->size[1] == 11) {
    int32_T kstr;
    kstr = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kstr < 11) {
        if (a_data[kstr] != cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  return b_bool;
}

boolean_T c_strcmp(const emxArray_char_T *a)
{
  static const char_T cv[8] = {'f', 'r', 'e', 'e', 't', 'i', 'm', 'e'};
  const char_T *a_data;
  boolean_T b_bool;
  a_data = a->data;
  b_bool = false;
  if (a->size[1] == 8) {
    int32_T kstr;
    kstr = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (kstr < 8) {
        if (a_data[kstr] != cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  return b_bool;
}

/* End of code generation (strcmp.c) */
