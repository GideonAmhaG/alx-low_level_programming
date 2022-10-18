#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet times 10
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int n;
	char lt;

	for (n = 0; n < 10; n++)
	{
		for (lt = 'a'; lt <= 'z'; lt++)
			_putchar(lt);

		_putchar('\n');
	}
}

