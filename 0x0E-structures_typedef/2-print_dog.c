#include "dog.h"

/**
 * print_dog - this is function prints a structure struct dog
 * @d: pointer to struct dog
 *
 * Description: this function prints the name, age and owner of the dog
 *	if any element of d is NULL the function print (nil) instead
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
