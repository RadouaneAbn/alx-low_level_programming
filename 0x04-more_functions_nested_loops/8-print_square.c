#include "main.h"

/**
 * print_square - this function will print a square
 *
 * @n: the size of the square
 *
 * Return: always return void
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
