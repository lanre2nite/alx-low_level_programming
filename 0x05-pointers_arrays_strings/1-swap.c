#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first integer to be swapped with b
 * @b: second integer to be swapped with a
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
