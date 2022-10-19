#include <stdio.h>

/**
 *main - prints Fibonacci sums till 4000000
 *Return: 0
 */
int main(void)
{
	int i;
	int a = 1;
	int b = 0;
	int c = 0;
	int sum = 0;


	for (i = 1; i <= 50; i++)
	{
		c = a + b;

		if (c >= 4000000)
			break;

		if ((c % 2) == 0)
			sum += c;

		b = a;
		a = c;
	}

	printf("%d", sum);

	printf("\n");

	return (0);
}


