#include "main.h"
#include <stdio.h>
/**
*print_array - prints an n elements of an array of integers
*@a: int array
*@n: input of n element
*Return: None
*/
voud print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(',');
	}
	printf('\n');
}
