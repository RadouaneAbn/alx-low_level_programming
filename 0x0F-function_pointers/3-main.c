#include "3-calc.h"

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: return 0 if the function runs successfuly
 *	exit with 98 status if the arguments are more then 4
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	result = (*get_op_func(op))(a, b);
	printf("%d\n", result);
	return (0);
}
