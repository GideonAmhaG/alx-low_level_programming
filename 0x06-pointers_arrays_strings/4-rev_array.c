#include "main.h"
#include <stdio.h>

/**
  * reverse_array - reverses an array
  * @a: input array
  * @n: number of elements of array
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);

		if (i == 0)
			continue;

		printf(", ");
	}

	printf("\n");
}
