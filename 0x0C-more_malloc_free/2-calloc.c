#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of elements of the array
  * @size: size of each element
  *
  * Return: pointer to the array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(sizeof(size) * nmemb);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		a[i] = 0;

	return (a);
}
