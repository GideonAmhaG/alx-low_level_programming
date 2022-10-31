/**
  * _strspn - calculates in bytes how much of s is accept
  * @s: string to be checked
  * @accept: string to be checked against
  *
  * Return: how many bytes are the same
  */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int n = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
				n++;

			j++;
		}

		i++;
	}

	return (n);

}
