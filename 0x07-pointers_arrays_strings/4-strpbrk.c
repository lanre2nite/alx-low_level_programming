#include "main.h"
/**
 * _strpbrk - The _strpbrk() function locates the first
 * @s: string where search
 * @accept: string where
 *Return: returns pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return(s)
		}
		s++;
	}
	return ('\0');
}
