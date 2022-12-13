#include "main.h"
/**
*main - A c program that prints the alphabets a-z 10 times
*Return: Always 0
*/
int main(void)
{
	int count = 0;
	int letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar(10);
	}
	return (0);
	}
