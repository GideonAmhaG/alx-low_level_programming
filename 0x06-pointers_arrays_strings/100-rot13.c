#include "main.h"

/**
  * rot13 - rot13 encryptor
  * @s: input array
  *
  * Return: encrypted string
  */

char *rot13(char *s)
{
	int i = 0; 

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <=
					'M'))
			s[i] += 13;
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i]
					<= 'Z'))
			s[i] -= 13;

		i++;
	}

	return (s);
}
