#include <stdio.h>

/**
 *main - prints Fibonacci nums
 *Return: 0
 */
int main(void)
{
	int i, k;
	unsigned long a = 1;
	unsigned long b = 0;
	unsigned long c = 0;
	unsigned long d, e, f, g, h, j, co, lds;

	for (i = 1; i <= 98; i++)
	{
		if (i < 93)
		{
			c = a + b;
			printf("%lu", c);
			b = a;
			a = c;
		}
		else
		{
			d = a / 1000;
			e = a % 1000;
			f = b / 1000;
			g = b % 1000;

			h = e + g;
			j = d + f;

			co = h / 1000;
			lds = h % 1000;

			printf("%lu", j + co);
			printf("%lu", lds);

			b = a; 
			a = a + b;
		}
		if (i == 98)
			continue;
		printf(", ");
	}

	printf("\n");

	return (0);
}


