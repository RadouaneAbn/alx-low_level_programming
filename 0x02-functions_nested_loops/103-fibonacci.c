#include <stdio.h>

/**
 * main - sum all even valued terms below 4000000
 * Return: always return 0
 */

int main(void)
{
	int n[3] = {1, 2, 3}, sum = 2;

	while (n[2] < 4000000)
	{
		n[2] = n[0] + n[1];

		if (n[2] % 2 == 0)
			sum += n[2];

		n[0] = n[1], n[1] = n[2];
	}
	printf("The sum of even-valued terms bellow 4M is: %d\n", sum);
	return (0);
}
