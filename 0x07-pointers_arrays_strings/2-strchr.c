#include "main.h"

/**
 * _strchr - this fucntion locates a character in a string
 * @s: the string
 * @c: the character
 * Return: return a pointer to the first occurrence of the string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s; i++)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
