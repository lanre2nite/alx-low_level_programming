#include <stdio.h>
#include <ctype.h>
/**
*main: A c program that prints all possible combinations of single-digit numbers
*Return: Always 0
*/
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
