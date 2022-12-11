#include <stdio.h>
#include <ctype.h>
/**
*main - prints all single digits
*Return: Always 0
*/
int main(void)
{
	int digit;

	for (digit= '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
