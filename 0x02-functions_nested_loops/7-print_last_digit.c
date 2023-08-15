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
	if (n < 0)
		n = -n;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
