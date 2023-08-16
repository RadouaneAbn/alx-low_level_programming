#include "main.h"

/**
 * print_times_table - print the n times table starting with 0
 *
 * @n: number of times table
 * Return: always return void
 */

void print_times_table(int n)
{
	int a, b, axb;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b <= n; b++)
		{
			_putchar(',');
			_putchar(' ');
			axb = a * b;

			if (axb < 10)
				_putchar(' ');
			if (axb < 100)
				_putchar(' ');
			if (axb >= 100)
			{
				_putchar(axb / 100 + '0');
				_putchar((axb / 10) % 10 + '0');
			}
			else if (axb < 100 && axb >= 10)
				_putchar(axb / 10 + '0');
			_putchar((axb % 10) + '0');
		}
		_putchar('\n');
	}
}
