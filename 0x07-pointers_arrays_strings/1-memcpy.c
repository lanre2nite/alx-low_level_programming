#include "main.h"
/**
 *_memcpy - a function that copies n bytes from memory
 *@dest: a pointer
 *@src: a memory area
 *@n: an integer
 *Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
