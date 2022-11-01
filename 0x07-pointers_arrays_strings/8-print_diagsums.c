#include <stdio.h>
/**
  * print_diagsums - prints sum of the diagonals of a 2d array
  * @a: input 2d array
  * @size: size of the square array (columns or rows)
  *
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, k = 0, l = 0;

	for (i = 0; i < size; i++)
	{
		k += a[(size + 1) * i];
		l += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", k, l);
}
