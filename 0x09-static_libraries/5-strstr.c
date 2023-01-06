#include "main.h"
/**
 *_strstr - The _strstr() function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 m*@haystack: string where the search is made
 **@needle: string whose occurence is searched in haystack
 *Return:Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
	char *l= haystack;
	char *p = needle;
	while (*l == *p && *p != '\0')
	{
		l++;
		p++;
	}
	if (*p == '\0')
		return (haystack);
}
return (0);
}
