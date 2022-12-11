#include <stdio.h>
#include <ctype.h>
/**
*Main-A c program to print alphabet letters in all cases 
*Return:Always (0)
*/
int main(void) /* the int main functions*/
{
	int letter; /* a varibale decleration*/

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			for (; letter <= 'Z'; letter++)
			{
				putchar(letter);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
