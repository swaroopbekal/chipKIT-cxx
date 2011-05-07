/* Test the `vld3_dupf32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vld3_dupf32 (void)
{
  float32x2x3_t out_float32x2x3_t;

  out_float32x2x3_t = vld3_dup_f32 (0);
}

/* { dg-final { scan-assembler "vld3\.32\[ 	\]+\\\{((\[dD\]\[0-9\]+\\\[\\\]-\[dD\]\[0-9\]+\\\[\\\])|(\[dD\]\[0-9\]+\\\[\\\], \[dD\]\[0-9\]+\\\[\\\], \[dD\]\[0-9\]+\\\[\\\]))\\\}, \\\[\[rR\]\[0-9\]+\\\]!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
