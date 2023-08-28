#include "main.h"

/**
 * _strpbrk - this function searches a string for any set of bytes
 * @s: pointer to the string
 * @accept: pointer to a set of bytes
 * Return: return a pointer to the byte in s that matches
 * one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for ( ; *s; )
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	s++;
	}
	return (00);
}
