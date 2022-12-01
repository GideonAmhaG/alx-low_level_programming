#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: base ten number
 */
void print_binary(unsigned long int n)
{
	if (n / 2)
		print_binary(n / 2);

	_putchar((n % 2) + '0');

}
