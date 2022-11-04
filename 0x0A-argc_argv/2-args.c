#include <stdio.h>

/**
  * main - prints all arguments on a new line
  * @argc: number of arguments
  * @argv: array of the strings of arguments
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}

