#include <stdio.h>

/**
* main - Prints different combinations of two digit numbers
*
* Return: is zero
*/

int main(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n != m && m > n)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				if (n == 8 && m == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
