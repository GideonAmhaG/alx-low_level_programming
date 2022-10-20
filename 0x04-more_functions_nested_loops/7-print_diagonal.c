#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: input for how long the line will be
 * Return: 1 or 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != 1)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
