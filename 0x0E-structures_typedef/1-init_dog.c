#include "dog.h"

/**
 * init_dog - this function initializes a struct dog with given values
 * @d: pointer to the struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: this function initializes a struct dog with given
 *	name, age and owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
