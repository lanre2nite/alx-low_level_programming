#include "main.h"
/**
 * _strlen - the function to be execute: to return the length ofa string
 * @s: the string variable
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int count, strg;

	strg = 0;
	for (count = 0; s[count] != '\0'; count++)
		strg++;
	return (strg);
}
