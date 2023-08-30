#include "main.h"
#include <stdio.h>

/**
 * _strlen - gets the lenght of string
 * @s: the string
 * Return: return the lenght of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * compare - this function check if string is palindrome
 * @s: the string
 * @i: index of first char in s
 * @j: index of last char in s
 * Return: return 1 if string is palindrome, 0 if not
 */

int compare(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	if (s[i] == s[j] && i <= j)
		return (compare(s, ++i, --j));
	return (1);
}

/**
 * is_palindrome - this function gets the string ready to be checked
 * @s: the string
 * Return: 1 if palidrome, 0 if not
 */

int is_palindrome(char *s)
{
	int n;

	n = _strlen(s) - 1;
	return (compare(s, 0, n));
}
