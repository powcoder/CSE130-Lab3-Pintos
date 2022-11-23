https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Passes a bad pointer to the create system call,
   which must cause the process to be terminated with exit code
   -1. */

#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void) 
{
  msg ("create(0x20101234): %d", create ((char *) 0x20101234, 0));
}
