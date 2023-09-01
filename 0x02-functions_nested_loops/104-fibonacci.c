#include <stdio.h>

/**
 * main - print the first 98 Fibonacci  numbers, starting with 1 and 2
 * Return: always return 0
 */

int print_plus(unsigned long int x);

int main(void)
{
	unsigned long int n = 1, m = 2, T, m1, m2, t1, t2, tt1, tt2;
	int i;

	printf("%lu\n%lu\n", n, m);
	for (i = 0; i < 90; i++)
	{
		T = n + m;
		printf("%lu\n", T);
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
		printf("%lu", tt1);
		printf("%lu\n", tt2 % 1000000000);
		m2 = t2;
		m1 = t1;
		t2 = tt2;
		t1 = tt1;
	}

	return (0);
}
