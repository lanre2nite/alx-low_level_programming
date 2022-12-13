#include "main.h"
/**
*print_alphabet_x10 - A c program that prints the alphabets a-z 10 times
*Return: Always 0
*/
void print_alphabet_x10(void)
{
	int count = 0;
	int letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
