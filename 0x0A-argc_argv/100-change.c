#include <stdio.h>
#include <stdlib.h>

/**
  * main - claculates number of cents for change of money
  * @argc: number of arguments
  * @argv: array of the strings of arguments
  *
  * Return: 0 if only one argument passed,1 if not
  */

int main(int argc, char *argv[])
{
	int m, c =0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);

	while (m > 0)
	{
		c++;

		if ((m - 25) >= 0)
		{
			m -= 25;
			continue;
		}

		if ((m - 10) >= 0)
		{
			m -= 10;
			continue;
		}

		if ((m - 5) >= 0)
		{
			m -= 5;
			continue;
		}

		if ((m - 2) >= 0)
		{
			m -= 2;
			continue;
		}

		m--;
	}

	printf("%d\n", c);
	return (0);
}

