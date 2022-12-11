#include <stdio.h>
#include <ctype.h>
/**
*main- A c program to print alphabetic letters except letter q and e
*
*retun: always (0)
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
		}
		putchar('\n');
		return (0);
}
