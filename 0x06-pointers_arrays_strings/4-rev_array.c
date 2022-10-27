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
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
