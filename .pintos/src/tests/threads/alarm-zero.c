https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Tests timer_sleep(0), which should return immediately. */

#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/malloc.h"
#include "threads/thread.h"
#include "devices/timer.h"

void
test_alarm_zero (void) 
{
  timer_sleep (0);
  pass ();
}
