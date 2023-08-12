#include <stdio.h>

/**
 * main - prints the alphabet in lower case except 'q' and 'e'
 * Return: always return 0 (success)
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		if (l != 'e' && l != 'q')
			putchar(l);

	putchar('\n');
	return (0);
}
