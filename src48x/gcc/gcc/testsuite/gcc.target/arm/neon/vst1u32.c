/* Test the `vst1u32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vst1u32 (void)
{
  uint32_t *arg0_uint32_t;
  uint32x2_t arg1_uint32x2_t;

  vst1_u32 (arg0_uint32_t, arg1_uint32x2_t);
}

/* { dg-final { scan-assembler "vst1\.32\[ 	\]+((\\\{\[dD\]\[0-9\]+\\\})|(\[dD\]\[0-9\]+)), \\\[\[rR\]\[0-9\]+\(:\[0-9\]+\)?\\\]!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */