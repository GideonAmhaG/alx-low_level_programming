#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string containing the binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, pwr = 0;
	const char *s = b;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		b++;
	}

	b--;

	while (b >= s)
	{
		n += (*b - '0') << pwr;
		pwr++;
		b--;
	}

	return (n);
}
