#include "main.h"

/**
 * _isalpha - check if charecter is alphabetic
 *
 * @c: the char that will be checked
 *
 * Return: 1 if char is alphabetic | 0 of char if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
