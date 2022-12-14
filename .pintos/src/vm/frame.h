https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef VM_FRAME_H
#define VM_FRAME_H

#include <hash.h>
#include "lib/kernel/hash.h"

#include "threads/palloc.h"


/* Functions for Frame manipulation. */

void vm_frame_init (void);
void* vm_frame_allocate (enum palloc_flags flags, void *upage);

void vm_frame_free (void*);
void vm_frame_remove_entry (void*);

void vm_frame_pin (void* kpage);
void vm_frame_unpin (void* kpage);

#endif /* vm/frame.h */
