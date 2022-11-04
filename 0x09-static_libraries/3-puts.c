#include "main.h"

/**
  * _puts - prints a string
  * @str: input string
  *
  * Return: void
  */

void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}

	_putchar('\n');

}
