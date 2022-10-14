#include <stdio.h>

/**
* main - Prints all alphabet
*
* Return: is zero
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
