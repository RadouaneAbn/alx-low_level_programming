#include "function_pointers.h"

/**
 * print_name - print name in two different ways
 * @name: the name
 * @f: the way name should be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
