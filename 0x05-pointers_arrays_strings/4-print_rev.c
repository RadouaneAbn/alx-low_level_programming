#include "main.h"

/**
 * print_rev - this function will print a string in reverse
 * @s: pointer to the string
 * Return:
 */

void print_rev(char *s)
{
	int L = 0;

	while (s[L])
		L++;
	while (s[--L])
		_putchar(s[L]);
	_putchar('\n');
}
