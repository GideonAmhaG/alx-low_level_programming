#include <stdio.h>

/**
 *main - prints Fibonacci nums
 *Return: 0
 */
int main(void)
{
	int i;
	unsigned long a = 2;
	unsigned long b = 1;
	unsigned long c = 2;
	
	printf("1, 2, ");

	for (i = 1; i <= 96; i++)
	{
		c = a + b;
		printf("%lu", c);
		b = a;
		a = c;
		if (i == 96)
			continue;
		printf(", ");
	}

	printf("\n");

	return (0);
}


