#include "main.h"

/**
  * rev_string - reverese a string
  * @s: input string
  *
  * Return: void
  */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char k;

	while (s[i++])
		j++;

	for (i = j - 1; i >= j / 2; i--)
	{
		k = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = k;
	}

}
