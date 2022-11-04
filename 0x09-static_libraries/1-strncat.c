#include "main.h"

/**
  * _strncat - joins 2 strings
  * @dest: 1st string
  * @src: 2nd string
  * @n: lenght of src
  *
  * Return: pointer dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i + j] = src[i];

	dest[i + j] = '\0';

	return (dest);
}
