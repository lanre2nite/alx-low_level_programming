#include "dog.h"


/**
 *_strlen - returns length of
 *a string
 *@str: string to be counted
 *Return: returns length of string
 */
int _strlen(char *str)
{
	int len = 0;
	while (str)
		len++;

	return (len);
}


/**
 *_strcopy - copy string pointed by src
 *into dest variable
 *@dest:buffer storing string copy
 *@src: buffer storing string to copy
 *Return:returns copied string
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (; src[index] ; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}
