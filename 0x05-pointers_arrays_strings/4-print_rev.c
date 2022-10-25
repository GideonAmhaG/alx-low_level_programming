#include "main.h"

/**
  * print_rev - reverese a string
  * @s: input string
  *
  * Return: void
  */

void print_rev(char *s)
{
	int i, j;

/**
 * _len - returns length of a string
 * @s: input string
 *
 * Return: length
 */

	int _len(char *s)
	{
		for (i = 0; ; i++)
		{
			if (s[i] == '\0')
				break;
		}

		return (i);
	}

	int k = _len(s);

	for (j = k; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}
