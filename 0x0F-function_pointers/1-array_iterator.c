#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array the function executes on
 * @size: size of the array
 * @action: the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
