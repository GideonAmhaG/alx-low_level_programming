#include <stdio.h>

/**
 *main - prints Fibonacci nums
 *Return: 0
 */
int main(void)
{
	int i;
	long a = 1;
	long b = 0;
	long c = 0;

	for (i = 1; i <= 50; i++)
	{
		c = a + b;
		printf("%ld", c);
		b = a;
		a = c;
		if (i == 50)
			continue;
		printf(", ");
	}

	printf("\n");

	return (0);
}


