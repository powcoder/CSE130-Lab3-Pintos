https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Tries to open a file with the empty string as its name. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void) 
{
  int handle = open ("");
  if (handle != -1)
    fail ("open() returned %d instead of -1", handle);
}
