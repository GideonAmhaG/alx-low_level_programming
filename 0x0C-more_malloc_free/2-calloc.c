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
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		a[i] = 0;

	return (a);
}
