#include <stdio.h>

/**
* main - Prints nos 1 to 10
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
			putchar((n % 10) + '0'); 
			putchar((m % 10) + '0');
			putchar(',');
			putchar(' ');
		}	
	}

	putchar('\n');

	return (0);
}
