https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Tries to execute a nonexistent process.
   The exec system call must return -1. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void) 
{
  msg ("exec(\"no-such-file\"): %d", exec ("no-such-file"));
}
