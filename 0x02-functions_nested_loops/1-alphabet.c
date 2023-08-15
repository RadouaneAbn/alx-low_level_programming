#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * Return: always return void
 */

void print_alphabet(void)
{
	char L = 'a';

	while (L <= 'z')
	{
		_putchar(L);
		L++;
	}
	_putchar('\n');
}
