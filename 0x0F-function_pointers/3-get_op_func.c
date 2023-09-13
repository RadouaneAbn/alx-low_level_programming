#include "3-calc.h"

/**
 * get_op_func - this function selects the correct op_func to preform
 *	the operation
 * @s: the operator
 * Return: the result of the op_function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (*(s + 1) == '\0' && i < 5)
	{
	if (*s == *ops[i].op)
		return (*ops[i].f);
	i++;
	}
	printf("Error\n");
	exit(99);
}
