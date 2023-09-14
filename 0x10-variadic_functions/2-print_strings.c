#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by separator
 * @separator: the string to be printed between the strings
 * @n: the numbers of string to be printed
 * @...: variable number of arguments (strings)
 *
 * Description: this function prints n strings separated by 'separator'
 *	and if the separator is NULL then it won't not be printed
 *	and if one string is NULL the finction will print (nil) instead
 * Example:
 *	print_strings(", ", 2, "Jay", "Django"); --> Jay, Django
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
