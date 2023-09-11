#include <stdio.h>

/**
 * main - entry point
 * Description - this is a programe that prints the name of the file
 *	it was compiled from
 *
 * Return: always return 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
