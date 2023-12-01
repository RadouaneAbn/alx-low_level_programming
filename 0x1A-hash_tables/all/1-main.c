#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "Hel";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Cau";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today rega rerga erga er ger graer opjaro gor r ;r;roj gorjag org";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "646845416 165 4654 68 4 65 16 51 651 6496 84946 541  ";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}
