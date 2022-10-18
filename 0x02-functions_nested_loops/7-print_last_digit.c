#include "main.h"

/**
 *print_last_digit - prints last digit
 *@n: int
 *Return: n or -n %
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar((-n % 10) + '0');
		return (-n % 10);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}

