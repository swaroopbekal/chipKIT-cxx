/* Test the `vRshrQ_nu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vRshrQ_nu32 (void)
{
  uint32x4_t out_uint32x4_t;
  uint32x4_t arg0_uint32x4_t;

  out_uint32x4_t = vrshrq_n_u32 (arg0_uint32x4_t, 1);
}

/* { dg-final { scan-assembler "vrshr\.u32\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
