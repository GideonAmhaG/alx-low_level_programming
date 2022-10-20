#include <stdio.h>

/**
 * main - Prints largest prime factor
 * Return: 0
 */

int main(void)
{
	long i;
	long n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			n /= i;
	}

	printf("%ld", n);
	printf("\n");

	return (0);
}
