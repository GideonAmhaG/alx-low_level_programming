#include "main.h"

/**
  * _atoi - gets int form string
  * @s: input string
  *
  * Return: converted int
  */

int _atoi(char *s)
{
	unsigned int n = 0;
	int j = 1;

	do {
		if (*s == '-')
			j *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * j);
}
