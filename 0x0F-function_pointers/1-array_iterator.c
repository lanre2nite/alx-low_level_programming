#include "function_pointers.h"
/**
 *array_iterator - executes a function on each ...
 @array: array to be targeted
 @size: size of an array
 @action: function to be executed
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
