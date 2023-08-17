#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: the size of the triangle
 *
 * Return: always return void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (k = size; k >= j; k--)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
