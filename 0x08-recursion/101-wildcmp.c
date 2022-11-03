#include "main.h"


/**
  * wildcmp - compares 2 strings
  * @s1: 1st string
  * @s2: 2nd string
  *
  * Return: 1 if the strings are the same, 0 if not
  */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}

