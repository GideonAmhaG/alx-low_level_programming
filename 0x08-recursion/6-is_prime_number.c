#include "main.h"

int is_prime(int, int);
/**
  * is_prime_number - checks if a number is prime
  * @n: input number to check
  *
  * Return: 1 if prime, 0 if not
  */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
  * is_prime - checks if a number is prime
  * @n: number to check
  * @d: divider
  *
  * Return: 1 if prime, 0 if not
  */

int is_prime(int n, int d)
{
	if (n <= 1)
		return (0);

	if (n % d == 0)
		return (0);

	if ((n / d) < d)
		return (1);

	return (is_prime(n, d + 1));
}
