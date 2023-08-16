#include "main.h"

/**
 * print_times_table - print the n times table starting with 0
 * Return: always return void
 */

void print_times_table(int n)
{
	int a = 0, b ,axb;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			axb = a * b;

			if (b == 0)
				_putchar(axb + '0');
			else if (axb < 100 && axb >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(axb / 10 + '0');
				_putchar(axb % 10 + '0');
			}
			else if (axb < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(axb + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(axb / 100 + '0');
				_putchar((axb / 10) % 10 + '0');
				_putchar(axb % 10 + '0');
			}
		b++;
		}
	_putchar('\n');
	a++;
	}
}
