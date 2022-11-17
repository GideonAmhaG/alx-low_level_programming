#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: number of parametrs to be summed
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int s = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		s += va_arg(ap, int);

	va_end(ap);
	return (s);
}
