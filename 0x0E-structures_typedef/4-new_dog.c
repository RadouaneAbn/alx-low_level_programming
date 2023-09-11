#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - this function creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to new dog
 *	or NULL in case of a failure
 *
 * Description: this function creates a new dog
 *	with a given name, age and owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *A;

	A = malloc(sizeof(dog_t));
	if (A == NULL)
		return (NULL);

	A->name = malloc(_strlen(name) + 1);
	A->owner = malloc(_strlen(owner) + 1);

	if (A->name == NULL || A->owner == NULL)
	{
		free(A->name);
		free(A->owner);
		free(A);
		return (NULL);
	}

	_strcpy(A->name, name);
	A->age = age;
	_strcpy(A->owner, owner);

	return (A);
}

/**
 * _strlen - this function compute the lenght of a string
 * @s: pointer to the string
 * Return: return the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - this function will copy a string from 'src' to 'dest'
 * @dest: the destination
 * @src: The source
 * Return: return the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
