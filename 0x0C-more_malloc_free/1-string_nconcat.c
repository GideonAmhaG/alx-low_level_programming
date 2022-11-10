#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - joins 2 strings
  * @s1: 1st string
  * @s2: 2nd string
  * @n: amount of s2 to join
  *
  * Return: pointer to the array
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j = 0, l = n;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	s = malloc(sizeof(char) * l);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[j++] = s1[i];

	for (i = 0; i < n && s2[i]; i++)
		s[j++] = s2[i];

	s[j] = '\0';

	return (s);
}
