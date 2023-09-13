#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: return the result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtaracts two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: return the result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: return the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: return the result or
 *	exit with the status 100 if b is 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - devides two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: return the reminder of the devision or
 *	exit with the status 100 if b is 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
