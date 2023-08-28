#include "main.h"

/**
 * _strspn - this function gets the length of a prifix substring
 * @s: the string
 * @accept: bytes from an array
 * Return: returns number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, c = 0, B = 1;

	for (i = 0; s[i] && B == 1; i++)
	{
		B = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				B = 1;
			}
		}
	}
	return (c);
}
