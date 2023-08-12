#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9
 * Return: always return 0 (success)
 */

int main(void)
{
	int n;

	for (n = '0'; n < '10'; n++)
		putchar(n + '0');

	putchar('\n');
	return (0);
}
