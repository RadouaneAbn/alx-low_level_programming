#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase in 10 lines
 * Return: always return void
 */

void print_alphabet_x10(void)
{
	char L;
	int i = 0;

	while (i < 10)
	{
		L = 'a';
		while (L <= 'z')
		{
			_putchar(L);
			L++;
		}
	_putchar('\n');
	i++;
	}
}
