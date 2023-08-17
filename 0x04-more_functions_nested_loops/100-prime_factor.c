#include <stdio.h>

/**
 * main - print the largest prime factor of a number
 * Return: always return 0
 */

int main(void)
{
	long int n = 612852475143;
	int i = 2;

	while (n != 1)
	{
		if (n % i == 0)
			n /= i;
		else
			i += 1;
	}

	printf("%d\n", i);
	return (0);
}
