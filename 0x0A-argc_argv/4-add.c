#include <stdio.h>

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

/**
 * main - entry point
 * Description: this program adds positive numbers and prints the result
 * @argc: the size of the array argv
 * @argv: an array of arguments
 * Return: 0 if the addition is successful, 1 if not (if input a char)
 */

int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	for (i = 1; argc != 0 && i < argc; i++)
	{
		num = _atoi(argv[i]);
		if (num)
			sum += num;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
