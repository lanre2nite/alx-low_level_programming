#include <stdio.h>
#include <ctype.h>
/**
*main - A c program that prints all the numbers of base 16
Retun: Always 0
*/
int main(void)
{
	int digit;
	for (digit= '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
		{
			digit = 'a';
			for (; digit <= 'f'; digit++)
			{
				putchar(digit);
			}
			break;
		}
	}
		putchar('\n');
		return (0);
}
