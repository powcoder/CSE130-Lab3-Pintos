https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef DEVICES_SERIAL_H
#define DEVICES_SERIAL_H

#include <stdint.h>

void serial_init_queue (void);
void serial_putc (uint8_t);
void serial_flush (void);
void serial_notify (void);

#endif /* devices/serial.h */
