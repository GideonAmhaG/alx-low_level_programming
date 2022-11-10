#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: start of array
  * @max: end of array
  *
  * Return: pointer to the array
  */

int *array_range(int min, int max)
{
	int i, l = 0;
	int *a;

	if (min > max)
		return (NULL);

	l = max - min + 1;

	a = malloc(sizeof(int) * l);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		a[i] = min++;

	return (a);
}
