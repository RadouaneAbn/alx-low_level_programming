#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: the integer
 *
 * Return: always return void
 */

void print_number(int n)
{
	int M = n, lenght = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar(n + '0');
	while (M != 0)
	{
		M /= 10;
		lenght++;
	}
	if (lenght == 4)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (lenght == 3)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (lenght == 2)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (lenght == 1)
		_putchar(n + '0');
}
