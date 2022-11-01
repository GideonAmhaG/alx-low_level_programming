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

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}

			else if (accept[j + 1] == '\0')
				return (n);

			j++;			
		}

		i++;
	}

	return (n);
}
