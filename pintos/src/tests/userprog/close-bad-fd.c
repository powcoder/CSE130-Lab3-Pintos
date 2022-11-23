https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Tries to close an invalid fd, which must either fail silently
   or terminate with exit code -1. */

#include <syscall.h>
#include "tests/main.h"

void
test_main (void) 
{
  close (0x20101234);
}
