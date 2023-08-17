#include "main.h"

/**
 * print_numbers - a function that print the numbers from 0 to 9
 * Return: always return void
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
		_putchar(i++ + '0');
	_putchar('\n');
}
