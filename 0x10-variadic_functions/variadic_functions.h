fndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * void prototypes()
 *char prototypes()
 * int prototypes()
 */
int _putchar(int c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
