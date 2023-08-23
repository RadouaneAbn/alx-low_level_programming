#include "main.h"

/**
 * leet - this function will wncodes a string into 1337 (leet code)
 * @s: the string
 * Return: return the new string
 */

char *leet(char *s)
{
	int i, j;
	char L[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char R[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == L[j])
				s[i] = R[j];
		}
	}
	return (s);
}
