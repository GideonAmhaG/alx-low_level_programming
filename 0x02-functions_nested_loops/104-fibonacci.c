#include <stdio.h>

/**
 *main - prints Fibonacci nums
 *Return: 0
 */
int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 0;
	unsigned long c = 0;

	for (i = 1; i <= 100; i++)
	{
		c = a + b;
		printf("%lu", c);
		b = a;
		a = c;
		if (i == 100)
			continue;
		printf(", ");
	}

	printf("\n");

	return (0);
}


