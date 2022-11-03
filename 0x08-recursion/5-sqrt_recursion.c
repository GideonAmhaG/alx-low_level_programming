#include "main.h"

int _sqrt(int, int);
/**
  * _sqrt_recursion - calculates natural square root
  * @n: input number
  *
  * Return: natural square root or -1
  */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - returns natural square root
  * @n: number to find square root for
  * @r: root to cheack
  *
  * Return: r if there's a natural square root, -1 if not
  */

int _sqrt(int n, int r)
{
	int s = r * r;

	if (s > n)
		return (-1);

	if (s == n)
		return (r);

	return (_sqrt(n, r + 1));
}
