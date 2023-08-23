#include "main.h"

/**
 * string_toupper - this function change all lowercase letters to uppercase
 * @c: the string
 * Return: return string with all letters changed to uppercase
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	i++;
	}
	return (c);
}
