#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies 2 numbers
  * @argc: number of arguments
  * @argv: array of the strings of arguments
  *
  * Return: 0 if 2 numbers entered, 1 if not
  */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);

		printf("%d\n", mul);

		return (0);
	}

	else
	{
		printf("Error\n");

		return (1);
	}
}

