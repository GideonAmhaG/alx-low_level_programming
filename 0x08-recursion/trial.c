#include "main.h"

char *_comp(char *s3, char *s4);
void itwc(char **s);
int _strlen_nowc(char *s);

/**
  * wildcmp - compares 2 strings
  * @s1: 1st string
  * @s2: 2nd string
  *
  * Return: 1 if the strings are the same, 0 if not
  */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		itwc(&s2);
		s2 = _comp(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}

/**
  * _comp - compares two strings considering wildcard character
  * @s3: 1st string
  * @s4: 2nd string
  *
  * Return: if same, pointer to null byte at end of s2, if not, pointer to
  * 1st unmatched character in s2
  */

char *_comp(char *s3, char *s4)
{
	int l1 = _strlen_nowc(s3) - 1;
	int l2 = _strlen_nowc(s4) - 1;

	if (*s4 == '*')
		itwc(&s4);

	if (*(s3 + l1 - l2) == *s4 && *s4 != '\0')
	{
		s4++;
		return (_comp(s3, s4));
	}

	return (s4);
}

/**
  * itwc - iterate through a wildcard string until no wildcard
  * @s: the wildcard string
  */

void itwc(char **s)
{
	if (**s == '*')
	{
		(*s)++;
		itwc(s);
	}
}

/**
  * _strlen_nowc - returns length of a string ignoring wild card character
  * @s: input string
  *
  * Return: length of the string
  */

int _strlen_nowc(char *s)
{
	if (*s == '\0')
		return (0);

	if (*s != '*')
		s++;

	return (_strlen_nowc(s) + 1);
}
