#include "main.h"

/**
 * _strchr - this fucntion locates a character in a string
 * @s: the string
 * @c: the character
 * Return: return a pointer to the first occurrence of the string
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (*s == c)
		return (s);
	else
		return (00);
}
