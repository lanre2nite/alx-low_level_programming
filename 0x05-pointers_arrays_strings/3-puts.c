#include "main.h"
/**
*_puts- fucntions of a string to be execute
* @str: string to be print
*Description: prints a string
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
