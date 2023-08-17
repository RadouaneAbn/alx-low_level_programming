#include "main.h"

/**
 * print_line - this function will draw a straight line in the terminal
 *
 * @n: lenght of the line
 * Return: always return void
 */

void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
