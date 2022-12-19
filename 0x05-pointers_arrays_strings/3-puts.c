#include "main.h"
/**
*_puts - prints a string
*@str : string to be print
*Description: prints a string
*On success: return the number of characters
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
