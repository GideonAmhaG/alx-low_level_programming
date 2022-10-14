#include <stdio.h>

/**
* main - Prints different combinations of three digit numbers
*
* Return: is zero
*/

int main(void)
{
	int n, m, l;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (l = 0; l < 10; l++)
			{
				if (n != m && n != l && m > n && l > m &&
						l > n)
				{
					putchar((n % 10) + '0');
					putchar((m % 10) + '0');
					putchar((l % 10) + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
