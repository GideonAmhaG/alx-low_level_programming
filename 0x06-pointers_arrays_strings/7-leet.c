#include "main.h"

/**
  * leet - leet encryptor
  * @s: input array
  *
  * Return: encrypted string
  */

char *leet(char *s)
{
	int i = 0, j;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {'A', 'E', 'O', 'T', 'L'};
	char c[] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (a[j] && b[j] && c[j])
		{
			if (s[i] == a[j] || s[i] == b[j])
				s[i] = c[j];

			j++;
		}

		i++;
	}

	return (s);
}
