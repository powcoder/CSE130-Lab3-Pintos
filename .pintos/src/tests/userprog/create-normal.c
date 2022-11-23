https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Creates an ordinary empty file. */

#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void) 
{
  CHECK (create ("quux.dat", 0), "create quux.dat");
}
