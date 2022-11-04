#include "main.h"

/**
  * _strcmp - compares 2 strings
  * @s1: 1st string
  * @s2: 2nd string
  *
  * Return: difference
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
