#include <stdio.h>

/**
 * main - prints the alphabet in lower case and upper case after
 * Return: always return 0 (success)
 */

int main(void)
{
	char l, L;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);
	putchar('\n');
	return (0);
}
