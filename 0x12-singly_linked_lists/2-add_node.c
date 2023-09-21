#include "lists.h"

/**
 * add_node - this function adds a new node at the beginning of a list_t list
 * @head: the head of the list
 * @str: the string to be stored in the new node
 *
 * Return: the address of the new node
 *	NULL in case of failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
