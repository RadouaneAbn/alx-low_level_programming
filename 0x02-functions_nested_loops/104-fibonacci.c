#include <stdio.h>

/**
 * main - print the first 98 Fibonacci  numbers, starting with 1 and 2
 * Return: always return 0
 */

int main(void)
{
	long int n = 1, m = 2, T, m1, m2, t1, t2, tt1, tt2, first, last;
	int i;

	printf("%ld, %ld", n, m);
	for (i = 0; i < 90; i++)
	{
		T = n + m;
		printf(", %ld", T);
		if (i != 89)
			n = m, m = T;
	}

		m1 = m / 1000000000;
		m2 = m % 1000000000;
		t1 = T / 1000000000;
		t2 = T % 1000000000;

	for (i = 90; i < 96; i++)
	{
		tt2 = t2 + m2;
		tt1 = t1 + m1 + t2 / 1000000000;
		first = tt1;
		last = tt2 % 1000000000;
		printf(", %ld%ld", first, last);
		m2 = t2;
		m1 = t1;
		t2 = tt2;
		t1 = tt1;
	}
	printf("\n");

	return (0);
}
