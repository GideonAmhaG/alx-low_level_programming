#include "main.h"

/**
  * _strcpy - prints half of a string
  * @dest: input string
  * @src: string to copy from
  *
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
