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
	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		else
		{
			printf("%d\n", atoi(argv[1]));
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

