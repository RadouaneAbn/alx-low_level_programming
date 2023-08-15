#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * @n: the input
 *
 * Return: always return void
 */

void print_to_98(int n)
{
	while (n < 98)
		printf("%d, ", n++);
	while (n > 98)
		printf("%d, ", n--);
	printf("%d\n", n);
}
