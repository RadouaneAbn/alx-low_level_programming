#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - this is a structure that contains information about a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: this structure contains information about a dog
 *	its name, age and its owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
