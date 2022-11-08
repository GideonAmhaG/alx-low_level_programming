#include "main.h"
#include <stdlib.h>

/**
  * argstostr - joins all argumnets of the program per new line
  * @ac: number of arguments
  * @av: string array of arguments
  *
  * Return: pointer to joined strings
  */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = ac;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}

	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];

		s[k++] = '\n';
	}

	s[l] = '\0';
	return (s);
}
