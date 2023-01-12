#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array of a certain no.
 * @nmemb: the number  of elements
 * @size: the byte size of each array element
 * Return: if variable is 0:NUll, otherwise a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	filer = mem;
	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (mem);
}
