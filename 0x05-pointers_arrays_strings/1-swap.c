#include "main.h"

/**
  * swap_int - swaps 2 ints
  * @a: swap int 1
  * @b: swap int 2
  *
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int n = *a;
	int *c = &n;

	*a = *b;
	*b = *c;
}
