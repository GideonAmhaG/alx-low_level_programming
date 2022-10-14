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
				/*if (n < 10 && m < 10)
				{
					putchar('0');
				}*/

				putchar((n % 100) + '0');
				putchar(' ');
				putchar((m % 100) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
