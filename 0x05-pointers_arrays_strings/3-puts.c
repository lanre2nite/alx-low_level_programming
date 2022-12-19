#include "main.h"
/**
*_puts- fucntions of a string to be execute
* @str: string to be print
*Description: prints a string
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
