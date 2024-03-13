#include "search_algos.h"

/**
 * linear_skip - This function searches for a value
 *	in a sorted skip list of integers
 * @list: The head of the list
 * @value: The wanted value
 *
 * Return: Pointer the node containing the value
 *	or NULL if the value is not found in the list
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *next;

	if (!list)
		return (NULL);

	current = list;
	while (current)
	{
		if (!current->express)
		{
			next = current;
			while (next->next)
				next = next->next;
			break;
		}
		next = current->express;
		printf("Value checked at index [%ld] = [%d]\n", next->index, next->n);
		if (next->n > value)
			break;

		current = current->express;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", current->index,
			next->index);

	while (current && current->index <= next->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
