#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for *
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r, mid;

	l = 0;
	r = size - 1;
	while (array && l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[i] > value)
			r = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
