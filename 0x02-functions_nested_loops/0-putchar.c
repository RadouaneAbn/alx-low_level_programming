#include "main.h"

/**
 * main - print "_putchar"
 * Return: always return 0
 */

int main(void)
{
	char msg[] = "_putchar\n";
	int i = 0;

	while (msg[i] != '\0')
	{
		_putchar(msg[i]);
		i++;
	}
	return (0);
}
