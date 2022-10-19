#include "main.h"

/**
 *print_times_table - prints n times table
 *@n: input
 *Return: void
 */

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j, ml, rl;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				ml = i * j;

				if (ml < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (ml < 100)
				{
					_putchar(' ');
					_putchar((ml / 10) + '0');
				}
				else
				{
					_putchar((ml / 100) + '0');
					rl = ml / 10;
					_putchar((rl % 10) + '0');
				}

				_putchar((ml % 10) + '0');
			}

			_putchar('\n');
		}
	}
}

