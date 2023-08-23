#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this program will generate random valid passwords for 101-ckrackme
 * Return: always return (0)
 */

int main(void)
{
	int i, sum = 0, n, passwd[64];

	srand(time(NULL));
	for (i = 0; i < 64; i++)
	{
		passwd[i] = rand() % 78;
		sum += passwd[i] + '0';
		putchar(passwd[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
