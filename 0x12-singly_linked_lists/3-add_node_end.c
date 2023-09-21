#include "lists.h"

/**
 * add_node_end - this function adds a new node at the end of a list_t list
 * @head: the head of the list
 * @str: the string to be stored in the new node
 *
 * Return: the address of the new node
 *      NULL in case of failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL || str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new;

	return (new);
}
