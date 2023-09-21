#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - this function prints a string before the main fucntion is executed
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
