#include "main.h"

/**
 * print_diagonal - this function will draw a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: always return void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i++ < n)
	{
		j = i;
		while (--j > 0)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
