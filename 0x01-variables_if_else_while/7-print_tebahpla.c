#include <stdio.h>

/**
* main - Prints all alphabet in reverse
*
* Return: is zero
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
