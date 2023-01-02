#include "main.h"
/**
 * _memset - a function thar fills memory with a constant byte
 *@s: a pointer named s that fills the first n bytes of the memory area
 *@b: a constant byte
 *@n: an integer
 *Return: return (s)
 */
char *_memset(char *s, char b, unsigned int n);
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
return(s)
}
