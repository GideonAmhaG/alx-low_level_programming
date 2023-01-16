/**
  * _strpbrk - searches accept in s
  * @s: string to be checked
  * @accept: string to be checked against
  *
  * Return: s after first occurnece of accept
  */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}

		i++;
	}

	return ('\0');
}
