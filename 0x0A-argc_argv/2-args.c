#include <stdio.h>

/**
 * main - entry point
 * Description: this function print all arguments it receives
 * @argc: the size of the array argv
 * @argv: array of arguments
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
