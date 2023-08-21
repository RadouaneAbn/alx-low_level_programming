#include "main.h"

/**
 * _puts - this function will print a string
 * @str: pointer to the string
 * Return: always return void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
