#include "main.h"

/**
 * print_binary - this function prints the binary representation of a numbe
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int i = 0;

	if (n == 0)
		_putchar('0');

	while (tmp >= 1)
	{
		tmp >>= 1;
		i++;
	}
	tmp = n;

	while (--i >= 0)
	{
		tmp = n;
		tmp >>= i;
		if (tmp == 1)
			_putchar(1 + '0');
		else
			_putchar(0 + '0');
		tmp <<= i;
		n -= tmp;
	}
}
