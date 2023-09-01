#include <stdio.h>

/**
 * main - entry point
 * Description: this function prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: always return 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
