#include "main.h"

/**
  * print_number - prints an int via _putchar
  * @n: input int
  *
  * Return: void
  */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	m = n;

	if (m / 10)
		print_number(m / 10);

	_putchar((m % 10) + '0');
}
