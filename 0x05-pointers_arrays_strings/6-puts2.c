#include "main.h"
/**
*puts2 - prints one character out of two
*@str: input
*Return: print
*/
void puts2(char *str)
{
	int count = 0;

while (count >= 0)
{
	if (str[count] == '\0')
	{
		_putchar('\n');
		break;
	}
	if (count % 2 == 0)
		_putchar(str[count]);
	count++;
}
}
