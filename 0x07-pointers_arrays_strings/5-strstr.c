#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: return pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0;

	for ( ; *haystack; )
	{
		for ( ; *haystack == needle[j]; j++)
		{
			haystack++;
		}
		if (needle[j] == '\0')
			return (haystack - j);
	haystack++;
	}
	return (00);
}
