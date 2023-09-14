#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - this function print anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments (string/integer/float/char)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j, F;
	char *s;
	const char types[] = "cifs";

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j] && F == 1)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), F = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), F = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), F = 1;
			break;
		case 's':
			s = va_arg(args, char *), F = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n"), va_end(args);
}
