#include "main.h"

/**
 * _strspn - this function gets the length of a prifix substring
 * @s: the string
 * @accept: bytes from an array
 * Return: returns number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, c = 0;

	for (i = 0; ; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == '.')
			break;
		while (accept)
		{
			if (s[i] == *accept)
			{
				c++;
				break;
			}
			accept++;
		}
	}
	return (c);
}
