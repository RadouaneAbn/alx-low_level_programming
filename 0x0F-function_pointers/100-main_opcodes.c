#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: this program prints n bytes its main function
 *
 * Return: 0 if success
 *	exit with the status 1 if the number of arguments is not 2
 *	or with 2 if the number of bytes is negative
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *A;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	A = (char *)&main;

	for (i = 0; i < bytes; i++)
	{
		printf("%.2hhx", A[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
