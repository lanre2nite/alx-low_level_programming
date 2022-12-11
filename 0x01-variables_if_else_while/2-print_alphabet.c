#include <stdio.h>
#include <ctype.h>
/**
*main - program to print
*Return: ALways (0)
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
