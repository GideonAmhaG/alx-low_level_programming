#include "main.h"

/**
 * print_number - prints ints in putchar
 * @n: input int
 * Return: void
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		m = n;
	}

	if (m / 10)
		print_number(m / 10);

	_putchar((unsigned int) n % 10 + '0');
}

