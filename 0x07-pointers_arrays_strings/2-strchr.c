/**
  * _strchr - returns a pointer to the first occurrence of char c in string s
  * @s: string to be checked
  * @c: character to check for
  *
  * Return: the above mentioned pointer
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
