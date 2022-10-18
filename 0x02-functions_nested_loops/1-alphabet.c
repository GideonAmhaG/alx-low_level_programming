#include "main.h"

/**
 *print_alphabet - prints _putchar
 *
 *Return: void
 */

void print_alphabet(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
		_putchar(lt);

	_putchar('\n');
}

