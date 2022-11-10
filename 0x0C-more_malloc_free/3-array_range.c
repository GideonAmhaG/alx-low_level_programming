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

	for (i = min; i <= max; i++)
		l++;

	a = malloc(sizeof(int) * (l + 1));

	if (a == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		a[i] = i;

	return (a);
}
