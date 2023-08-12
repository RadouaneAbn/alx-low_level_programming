#include <stdio.h>

/**
 * main - prints different combination of wzo digits
 * Return: always return 0 (success)
 */

int main(void)
{
	int n1 = '0', n2 = '0';

	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			if (!(n1 > n2 || n1 == n2))
			{
				putchar(n1);
				putchar(n2);
				if (n1 == '8' && n2 == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n2 = '0';
		n1++;
	}
	return (0);
}
