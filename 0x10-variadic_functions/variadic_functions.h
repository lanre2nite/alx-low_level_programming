#ifndef _VARIADIC_H_
#define _VARIADIC_H_
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
