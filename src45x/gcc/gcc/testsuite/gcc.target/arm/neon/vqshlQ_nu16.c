/* Test the `vqshlQ_nu16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vqshlQ_nu16 (void)
{
  uint16x8_t out_uint16x8_t;
  uint16x8_t arg0_uint16x8_t;

  out_uint16x8_t = vqshlq_n_u16 (arg0_uint16x8_t, 1);
}

/* { dg-final { scan-assembler "vqshl\.u16\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
