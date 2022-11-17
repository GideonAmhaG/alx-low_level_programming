#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments.
 * @argv: array of the arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int b, i;
	unsigned char o;
	int (*a)(int, char**) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		o = *(unsigned char *)a;
		printf("%.2x", o);

		if (i == b - 1)
			continue;

		printf(" ");

		a++;
	}

	printf("\n");

	return (0);
}
