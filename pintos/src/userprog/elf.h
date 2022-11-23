https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* 
 * Loads an ELF executable from FILE_NAME into the current thread.
 * Stores the executable's entry point into *EIP
 * and its initial stack pointer into *ESP.
 * Returns true if successful, false otherwise. 
 */
bool elf_load(const char *file_name, void (**eip)(void), void **esp);