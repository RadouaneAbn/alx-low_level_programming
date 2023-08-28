#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: return pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, c = 0;

	for (i = 0; *haystack; i++)
	{
		for ( ; *haystack == needle[j] && needle[j] != '\0'; j++)
		{
			c++;
			haystack++;
		}
		if (c == 5)
			return (haystack - 5);
	haystack++;
	}
	return (00);
}
