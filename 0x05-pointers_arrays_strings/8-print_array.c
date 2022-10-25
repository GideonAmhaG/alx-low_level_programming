#include "main.h"
#include <stdio.h>

/**
  * print_array - prints elemnets of an array
  * @a: input array
  * @b: number of elements of the array
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(", ");
	}

	printf("\n");
}
