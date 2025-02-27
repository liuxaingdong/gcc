/* { dg-do compile } */
/* { dg-options "-O2 -mcpu=future" } */

#define NAME lt
#define CODE <

#include "setbc.h"

/* "x < 0" is done without setbc.
   The generic code sometimes transforms "x < A" to "x <= A-1"; we allow
   either here.  */
/* { dg-final { scan-assembler-times {\msetbcr?\M} 16 } } */
