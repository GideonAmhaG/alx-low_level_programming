#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the function that searches or compares
 *
 * Return: returns the index of the first element for which the cmp function
 * does not return 0. If no element matches or if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				break;
			else if (i == size - 1)
				return (-1);
		}

		return (i);
	}

	else if (size <= 0)
		return (-1);
}
