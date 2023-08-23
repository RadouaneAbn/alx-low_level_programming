#include "main.h"

/**
 * cap_string - this function will capitalize all words of a string
 * @s: the string
 * Return: return (s)
 */

char *cap_string(char *s)
{
	int i = 1, j, C = 0;
	char sep[13] = {' ', '\t', '\n', ',', ';'
		, '.', '!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i])
	{
		C = 0;
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == sep[j])
			{
				C = 1;
				break;
			}
		}

		if (C == 1 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

	i++;
	}
	return (s);
}
