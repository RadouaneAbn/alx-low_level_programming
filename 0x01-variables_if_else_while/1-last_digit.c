#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints random number n
 * Return: always return (0)
 */
int main(void)
{
	int n, last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;
	printf("Last digit of %d ", n);
	if (last_n > 5)
		printf("is %d and greater than 5\n", last_n);
	else if (last_n == 0)
		printf("is %d and is 0\n", last_n);
	else if (last_n < 6)
		printf("is %d and is less than 6 and not 0\n", last_n);
	return (0);
}
