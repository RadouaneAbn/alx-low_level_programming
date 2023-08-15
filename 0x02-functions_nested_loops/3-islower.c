#include "main.h"

/**
 * _islower - check if charecter is lowercase
 *
 * @c: the char that will be checked
 *
 * Return: 1 if char is lowercase | 0 of char if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
