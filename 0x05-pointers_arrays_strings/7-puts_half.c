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
	L = L - 1;
	if (L % 2 != 0)
		n = L / 2;
	else
		n = (L + 1) / 2;
	n++;
	for ( ; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');

}
