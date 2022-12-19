#include "main.h"
/**
*puts_half - function that prints half of a string
*@str: input string
*Return: None
*/
void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 1)
		i = count / 2;
	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
