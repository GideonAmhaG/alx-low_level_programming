#include "main.h"

/**
  * main - prints program name
  * @argc: number of arguments
  * @argv: array of the strings of arguments
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	while (*argv[0])
	{
		_putchar(*argv[0]);
		*(argv[0])++;
	}

	_putchar('\n');
}

