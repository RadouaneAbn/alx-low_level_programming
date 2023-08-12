#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * Return: always return 0 (success)
 */

int main(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
		putchar(L);

	putchar('\n');
	return (0);
}
