#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: return pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0'; )
	{
		if (*haystack == *needle)
			return (haystack);
	haystack++;
	}
	return (00);
}
