/**
  * _strstr - finds the first occurrence of the substring needle in the
  * string haystack
  * @haystack: string to be checked
  * @needle: substring
  *
  * Return: a pointer to the beginning of the substring, or NULL if the
  * substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		j = 0;

		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;

			j++;
		}

		if (needle[j] == '\0')
			return (haystack + i);

		i++;
	}

	return ('\0');
}
