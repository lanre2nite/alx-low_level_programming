#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates 2 strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *Return: pointer to the new string created
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, me1 = 0, me2 = 0;

	while (s1 && s1[me1])
		me1++;
	while (s2 && s2[me2])
		me2++;
	s3 = malloc(sizeof(char) * (me1 + me2 + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
	{
		while (i < me1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (me1 + me2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
