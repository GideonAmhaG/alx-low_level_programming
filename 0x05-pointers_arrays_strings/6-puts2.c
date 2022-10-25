#include "main.h"

/**
  * puts2 - prints every other character
  * @str: input string
  *
  * Return: void
  */

void puts2(char *str)
{
	int i;

	for (i = 0; ; i += 2)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}

	_putchar('\n');
}
