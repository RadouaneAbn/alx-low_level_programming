#include "main.h"

/**
 * print_last_digit - print tha last digit of a number
 *
 * @n: the input number
 *
 * Return:
 */

int print_last_digit(int n)
{
	int m;

	if (n >= 0)
	{
		m = n % 10;
		_putchar(m + '0');
	}
	else
	{
		m = -n % 10;
		_putchar(m + '0');
	}
	return (m);
}
