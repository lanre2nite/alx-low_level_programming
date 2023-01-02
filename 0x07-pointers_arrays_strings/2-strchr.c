#include "main.h"
/**
 *_strchr - returns a pointer to the first concurrence
 * @s: a pointer
 * @c: aa character named c
 *Return: return a null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		if (s[i] == c)
			return (s + i);
		else
			return (NULL);
}
