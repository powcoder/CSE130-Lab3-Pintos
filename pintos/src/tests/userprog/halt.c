https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Tests the halt system call. */

#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void) 
{
  halt ();
  fail ("should have halted");
}
