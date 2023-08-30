#include "main.h"

/**
 * _strlen_recursion - this function calculate the lenght of a string
 * @s: the string
 * Return: return the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
