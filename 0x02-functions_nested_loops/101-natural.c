#include <stdio.h>

/**
 * main - print the sum of all the multiples of 3 or 5 below 1024
 * Return: always return 0
 */

int main(void)
{
	int n = 0, T = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			T = T + n;
	n++;
	}
	printf("the Sum of all multiplies of 3 or 5 is: %d\n", T);
	return (0);
}
