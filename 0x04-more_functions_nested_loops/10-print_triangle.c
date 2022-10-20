#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j <= (size - 1); j++)
				_putchar(' ');

			for (k = 1; k <= i; k++)
				if (k != 1)
				{
					_putchar('#');
				}
			_putchar('#');
			_putchar('\n');
		}
	}
}
