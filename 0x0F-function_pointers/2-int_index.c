#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array containing elements
 * @size: number of elements in the array
 * @cmp: function which compares values
 *
 * Return: returns -1 if no elment match
 * or size is less than zero
 * return pointer to the first corresponding
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
