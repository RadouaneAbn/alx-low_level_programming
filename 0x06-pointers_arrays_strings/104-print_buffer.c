#include "main.h"
#include <stdio.h>

/**
 * print_buffer - this function will print a buffer
 * @b: the string
 * @size: the size of the string
 * @i: the index of array
 */

void print_cont(char *b, int i, int size);
void print_buff(char *b, int i, int size);
void p_char(char c);

void print_buffer(char *b, int size)
{
	int i, l = 0, count = 0xa;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("00000%03x: ", count * l++);
		print_cont(b, i, size);
		print_buff(b, i, size);
		printf("\n");
	}
}

/**
 * print_buff - send the characters of string to p_char
 * @b: the string
 * @i: index of array
 * @size: the size of the string
 */

void print_buff(char *b, int i, int size)
{
	int j;

	for (j = i; j < i + 10 && j < size; j++)
	{
		p_char(b[j]);
	}
}

/**
 * p_char - print char if it is printable and "." if not
 * @c: the character
 */

void p_char(char c)
{
	if (c >= 32 && c <= 126)
		putchar(c);
	else
		putchar('.');
}

/**
 * print_cont - print the hexadecimal content of two chars of buffer
 * @b: the string
 * @i: the index of array
 * @size: the size of string
 */

void print_cont(char *b, int i, int size)
{
	int c, m;

	for (c = i ; c < i + 10 && c < size; c++)
	{
		printf("%02x", b[c]);
		if (c % 2)
			printf(" ");
	}
	for (m = c; m < i + 10; m++)
	{
		printf("  ");
		if (m % 2)
			printf(" ");
	}
}
