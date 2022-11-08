#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a new string which is a duplicate of str
  * @str: original string
  *
  * Return: pointer to the duplicate new string
  */

char *_strdup(char *str)
{
	int l = 0, i;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[l++])
		l++;

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		s[i] = str[i];

	s[i] = '\0';

	return (s);
}
