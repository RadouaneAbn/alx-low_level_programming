#include "main.h"

/**
 * rot13 - this function encodes a string using rot13
 * @s: the string
 * Return: return the encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char rot[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char ebg[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == rot[j])
			{
				s[i] = ebg[j];
				break;
			}
		}
	}
	return (s);
}
