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
	_putchar(n % 10 + '0');
	return (n);
}
