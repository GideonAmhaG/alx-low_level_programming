#include <stdio.h>

/**
* main - Prints different combinations of two two digit numbers
*
* Return: is zero
*/

int main(void)
{
	int n, m;

	for (n = 0; n < 100; n++)
	{
		for (m = 0; m < 100; m++)
		{
			if (n != m && m > n)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
