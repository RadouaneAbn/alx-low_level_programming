#include "dog.h"

/**
 * free_dog - this function frees memory allocated for dog structure
 * @d: pointer to dog structure
 *
 * Description: this function takes a pointer to a dog structure and frees
 *	the memory allocated for its name, owner and the structure it self
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
