#include <stdio.h>

/**
 * main - prints co;binqtions of single digit numbers
 * Return: return always 0 (success)
 */

int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
		putchar('\n');
	return (0);
}
