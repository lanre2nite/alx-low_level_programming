#include "main.h"
/**
*_puts - fucntions of a string to be execute
*@str: string to be print
*Description: prints a string
*/
void _puts(char *str)
{
int count = 0;

while (count >= 0)
{
	if (str[count] == '\0')
	{
		_putchar('\n');
		break;
	}
	_putchar(str[count]);
	count++;
}
}
