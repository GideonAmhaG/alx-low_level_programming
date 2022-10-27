#include "main.h"

/**
  * string_toupper - makes uppercase
  * @s: input array
  *
  * Return: uppercased string
  */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		i++;
	}

	return (s);
}
