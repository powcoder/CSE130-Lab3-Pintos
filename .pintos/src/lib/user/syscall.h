https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef __LIB_USER_SYSCALL_H
#define __LIB_USER_SYSCALL_H

#include <stdbool.h>
#include <debug.h>

/* Process identifier. */
typedef int pid_t;
#define PID_ERROR ((pid_t) -1)

/* Map region identifier. */
typedef int mapid_t;
#define MAP_FAILED ((mapid_t) -1)

/* Maximum characters in a filename written by readdir(). */
#define READDIR_MAX_LEN 14

/* Typical return values from main() and arguments to exit(). */
#define EXIT_SUCCESS 0          /* Successful execution. */
#define EXIT_FAILURE 1          /* Unsuccessful execution. */

/* Lab 3 */
void exit (int status) NO_RETURN;
pid_t exec (const char *file);
int wait (pid_t);
bool create (const char *file, unsigned initial_size);
int open (const char *file);
int filesize (int fd);
int read (int fd, void *buffer, unsigned length);
int write (int fd, const void *buffer, unsigned length);
void close (int fd);

// void seek (int fd, unsigned position);
// unsigned tell (int fd);
// bool remove (const char *file);
// void halt (void) NO_RETURN;
// mapid_t mmap (int fd, void *addr);
// void munmap (mapid_t);
// bool chdir (const char *dir);
// bool mkdir (const char *dir);
// bool readdir (int fd, char name[READDIR_MAX_LEN + 1]);
// bool isdir (int fd);
// int inumber (int fd);

#endif /* lib/user/syscall.h */
