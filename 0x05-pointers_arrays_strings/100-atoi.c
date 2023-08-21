#include "main.h"

/**
 * _atoi - this function will convert a string to an integer
 * @s: the string
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int i = 0, end = 0, sign = 1;
	unsigned int T = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		while (s[i] >= '0' && s[i] <= '9')
		{
			end = 1;
			T = T * 10 + s[i] - '0';
			i++;
		}
		if (end == 1)
			break;
	i++;
	}
	return (T * sign);
}
