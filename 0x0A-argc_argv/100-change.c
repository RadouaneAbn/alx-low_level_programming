#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: this program prints the minimum number of coins to make change
 *		for an amount of money
 * @argc: size of argv array
 * @argv: array of argument (in this case argv[1] is the input "money")
 * Return: 0 if the progam runs without problems, 1 othewise
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents > 0)
	{
		while (cents)
		{
			if (cents >= 25)
			{
				cents -= 25;
			}
			else if (cents >= 10)
			{
				cents -= 10;
			}
			else if (cents >= 5)
			{
				cents -= 5;
			}
			else if (cents >= 2)
			{
				cents -= 2;
			}
			else if (cents >= 1)
			{
				cents -= 1;
			}
		coins++;
		}
	}
	printf("%d\n", coins); /* this will print 0 if value of cents
				* is less or equale to 0
				*/
	return (0);
}
