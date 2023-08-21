#include "main.h"

/**
 * puts2 - this function will print every other character of a string
 * @str: pointer to a string
 * Return: return void
 */

void puts2(char *str)
{
	int i, L = 0;

	while (str[L])
		L++;
	for (i = 0; i < L; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
