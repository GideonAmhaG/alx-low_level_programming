#include <stdio.h>

/**
* main - Prints: nd that piece...
*
* Return: Always 1.
*/

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str , 1 , sizeof(str) , stderr );

	return (1);
}
