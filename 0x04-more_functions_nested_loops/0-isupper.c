#include "main.h"

/**
 * _isupper - this function will check if a character is uppercase
 *
 * @c: the character that will be checked
 *
 * Return: return (1) if char is uppercase | (0) if else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
