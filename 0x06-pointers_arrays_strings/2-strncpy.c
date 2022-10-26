#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: copy to
  * @src: copy from
  * @n: lenght of src to be copied
  *
  * Return: pointer dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i++] = '\0';

	return (dest);
}
