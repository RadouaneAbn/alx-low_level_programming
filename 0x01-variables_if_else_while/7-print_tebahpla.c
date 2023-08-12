#include <stdio.h>

/**
 * main - prints the alphabet in revers in lower case
 * Return: always return 0 (success)
 */

int main(void)
{
	char L;

	for (L = 'z'; L >= 'a'; L--)
		putchar(L);

	putchar('\n');
	return (0);
}
