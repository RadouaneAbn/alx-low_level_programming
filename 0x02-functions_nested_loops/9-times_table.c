#include "main.h"

/**
 * times_table - print the 9 times table starting with 0
 * Return: always return void
 */

void times_table(void)
{
	int a = 0, b ,axb;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			axb = a * b;
			if (b == 0)
				_putchar(axb + '0');
			else if (axb < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(axb + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(axb / 10 + '0');
				_putchar(axb % 10 + '0');
			}
		b++;
		}
	_putchar('\n');
	a++;
	}
}
