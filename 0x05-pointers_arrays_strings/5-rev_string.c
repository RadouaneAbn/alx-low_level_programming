#include "main.h"

/**
 * rev_string - this function will reverse a string
 * @s: pointer to the string
 * Return: return void
 */

void rev_string(char *s)
{
	int i, L = 0;
	char tmp;

	while (s[L])
		L++;
	L = L - 1;
	for (i = 0; i <= L; i++, L--)
	{
		tmp = s[L];
		s[L] = s[i];
		s[i] = tmp;
	}
}
