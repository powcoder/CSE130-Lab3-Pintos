https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Wait for a subprocess to finish, twice.
   The first call must wait in the usual way and return the exit code.
   The second wait call must return -1 immediately. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void) 
{
  pid_t child = exec ("child-simple");
  msg ("wait(exec()) = %d", wait (child));
  msg ("wait(exec()) = %d", wait (child));
}
