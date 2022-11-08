#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of char
  * @size: sds
  * @c: sfdfs
  * Return: void
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
