#include <stdio.h>

int main (void)
{
	int a = 34567;
	int b = 43211;

	short i, j, k, m, sm1, sm2;

	i =  a / 1000;
	j = a % 1000;
	k = b / 1000;
	m = b % 1000;

	sm1 = j + m;
	sm2 = i + k;

	printf ("%d", sm2);
	printf ("%d", sm1);

	return (0);

}

