#include "main.h"

/**
 * more_numbers - this function will print 10 times the numbers, from 0 to 14
 * Return: always return void
 */

void more_numbers(void)
{
	int i, c = 0;

	while (c++ < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		i++;
		}
	_putchar('\n');
	}
}
