#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds numbers
  * @argc: number of arguments
  * @argv: array of the strings of arguments
  *
  * Return: 0 if numbers entered, 1 if not
  */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

