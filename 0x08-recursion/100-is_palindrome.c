#include "main.h"

int _pali(char *s, int i);
/**
  * is_palindrome - checks if a string is a palindrome
  * @s: string to check
  *
  * Return: 1 if palindrome, 0 if not
  */

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (_pali(s, 0));
}

/**
  * _pali - checks if a sring is a palindrome
  * @s: string to check
  * @i: index of string s
  * Return: 1 if prime, 0 if not
  */

int _pali(char *s, int i)
{
	int l = _strlen_recursion(s);

	if (s[i] == s[l / 2])
		return (1);

	if (s[i] == s[l - 1 - i])
		return (_pali(s, i + 1));

	return (0);
}

/**
  * _strlen_recursion - returns length of a string via recursion
  * @s: input string
  *
  * Return: length of the string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (_strlen_recursion(s) + 1);
}
