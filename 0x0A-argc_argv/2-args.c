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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

