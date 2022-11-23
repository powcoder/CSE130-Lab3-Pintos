https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Tests argument passing to child processes. */

#include <syscall.h>
#include "tests/main.h"

void
test_main (void) 
{
  wait (exec ("child-args childarg"));
}
