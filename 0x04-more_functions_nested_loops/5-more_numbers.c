#include "main.h"

/**
 *more_numbers - prints 0-14 10 times
 *
 *Return: void
 */

void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m > 9)
				_putchar('1');
			_putchar((m % 10) + '0');
		}

		_putchar('\n');
	}
}

