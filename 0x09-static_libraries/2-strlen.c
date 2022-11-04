#include "main.h"

/**
  * _strlen - returns string length
  * @s: input string
  *
  * Return: i
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
	}

	return (i);
}
