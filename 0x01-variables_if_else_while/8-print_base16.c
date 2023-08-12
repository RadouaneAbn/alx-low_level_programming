#include <stdio.h>

/**
 * main - prints the numbers of bqse 16
 * Return: always return 0 (success)
 */

int main(void)
{
	int i = 0, n;
	char b_16[16] = "0123456789abcdef";

	while (i < 16)
	{
		n = b_16[i];
		putchar(n);
		i++;
	}
	putchar('\n');
	return (0);
}
