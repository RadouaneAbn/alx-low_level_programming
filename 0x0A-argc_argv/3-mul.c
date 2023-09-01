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
 * Description: this function multiplies two numbers and prints teh result
 * @argc: the size of argv array
 * @argv: array of aarguments
 * Return: 0 if the program receives two number, 0 if not
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc > 2)
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
