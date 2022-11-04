#include "main.h"

void _printint(unsigned int);

/**
  * main - prints number of arguments
  * @argc: number of arguments
  * @argv: array of the strings of arguments
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	_printint(argc);
	_putchar('\n');
}

/**
  *_printint - prints and int using _putchar()
  *@n: input int
  */

void _printint(unsigned int n)
{
	if (n / 10)
		_printint(n / 10);

	_putchar(n % 10 + '0');
}
