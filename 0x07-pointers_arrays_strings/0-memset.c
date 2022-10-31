/**
  * _memset - fills memory with constant byte
  * @s: initial buffer
  * @b: constant byte
  * @n: how many bytes to fill
  *
  * Return: pointer to modified buffer
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
}
