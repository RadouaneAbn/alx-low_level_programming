#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: this program adds positive numbers and prints the result
 * @argc: the size of the array argv
 * @argv: an array of arguments
 * Return: 0 if the addition is successful, 1 if not (if input a char)
 */

int main(int argc, char *argv[])
{
	int num, i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][0] == '-')
				j++;
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num >= 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
