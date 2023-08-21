#include "main.h"

/**
 * puts_half - this function will print half of a string
 * @str: the string
 * Return: return void
 */

void puts_half(char *str)
{
	int n, L = 0;

	while (str[L])
		L++;
	n = L / 2;
	for ( ; n < L; n++)
		_putchar(str[n]);
	_putchar('\n');

}
