#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: input string
  *
  * Return: void
  */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i++])
		j++;

	for (i = j / 2; i < j ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
