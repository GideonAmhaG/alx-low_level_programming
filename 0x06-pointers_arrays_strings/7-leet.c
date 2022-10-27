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
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	char b[] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (a[j] && b[j])
		{
			if (s[i] == a[j] || s[i] - 32 == a[j])
				s[i] = b[j];

			j++;
		}

		i++;
	}

	return (s);
}
