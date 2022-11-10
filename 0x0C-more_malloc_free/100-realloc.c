#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates memory block
  * @ptr: pointer to previous block
  * @old_size: size of previous block
  * @new_size: size of new block
  *
  * Return: pointer to reallocated memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		a = malloc(new_size);

		if (a == NULL)
			return (NULL);

		return (a);
	}

	a = malloc(new_size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		a[i] = ((char *) ptr)[i];

	free(ptr);
	return (a);
}
