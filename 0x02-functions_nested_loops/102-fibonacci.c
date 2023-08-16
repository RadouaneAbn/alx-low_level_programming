#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers starting with 1 and 2
 * Return: always return 0
 */

int main(void)
{
	long int n[50] = {1, 2};
	int count = 2;

	printf("%ld, %ld, ", n[0], n[1]);
	while (count < 50)
	{
		n[count] = n[count - 1] + n[count - 2];
		printf("%ld", n[count]);
		if (count != 50)
			printf(", ");
	count++;
	}
	printf("\n");
	return (0);
}
