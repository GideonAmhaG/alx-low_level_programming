#include "main.h"

/**
 * print_line - prints a line
 * @n: input for how long the line will be
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}

	_putchar('\n');
}
