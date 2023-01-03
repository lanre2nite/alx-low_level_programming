#include "main.h"
/**
 *_memset - a function that fills
 * memory with a constant byte
 *@s: a pointer named is that fills
 *the first n bytes of the memory area
 *@c: a constant byte
 *@n: an integer
 *description _memset: over there
 *Return: return (s)
 */
void *_memset(void *s, int c, size_t n);
{
	unsigned int index;
	unsigned char *mem = s,
	int value = c;

	for (index = 0; index < n; index++)
	mem[index] = value;
	return (mem);
}
