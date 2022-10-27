#include "main.h"

/**
  * cap_string - makes uppercase first letter of a word
  * @s: input array
  *
  * Return: uppercased string
  */

char *cap_string(char *s)
{
	int i = 0, j;

	char k[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
	'{', '}'};

	while (s[i])
	{
		j = 0;

		while (k[j])
		{
			if (s[i] >= 'a' && s[i] <= 'z' && (s[i - 1] == k[j]
						|| i == 0))
				s[i] -= 32;
			j++;
		}

		i++;
	}

	return (s);
}
