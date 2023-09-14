#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by a separator
 * @separator: the string that separetes the numbers
 * @n: the number of integers to be printed
 * @...: variable number of arguments (numbers)
 *
 * Description: this function prints n numbers separated by 'separator'
 *	and if the separator is NULL then it won't not be printed
 * Example:
 *	print_numbers(", ", 4, 1, 2, 3, 4); --> 1, 2, 3, 4
 *	print_numbers("", 4, 1, 2, 3, 4);   --> 1234
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0 || separator == NULL)
			printf("%d", va_arg(args, int));
		else if (i > 0)
			printf("%s%d", separator, va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
