#include "main.h"

/**
 *times_table - mult table
 *
 *Return: void
 */

void times_table(void)
{
	int i, j, ml;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			ml = i * j;

			if (ml <= 9)
				_putchar(' ');
			else
				_putchar((ml / 10) + '0');

			_putchar((ml % 10) + '0');
		}
		_putchar('\n');
	}
}

