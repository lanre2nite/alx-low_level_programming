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
char *mem;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
mem = malloc(size * nmemb);
if (mem != NULL)
{
for (i = 0; i < (size * nmemb); i++)
mem[i] = 0;
return (mem);
}
else
return (NULL);
}
