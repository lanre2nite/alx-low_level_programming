#include "main.h"

/**
* print_rev - function to be executed to print in reverse
* @s: the string to be printed in reverse
*/
void print_rev(char *s)
{
	int len = 0, index = 0;
len = _strlen(s);

	for index = len - 1; indec >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
