#include "search_algos.h"
#include <math.h>

/**
 * jump_list - This function searches for a value in sorted linked list
 *	using Jump search algorithm
 * @list: Pointer to the head of the linked list
 * @size: The size of teh linked list
 * @value: The wanted value
 *
 * Return: Pointer to the node with wanted value
 *	or NULL if the value id not in the list
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *left, *right;
	size_t jump, tmp_i;

	if (!list)
		return (NULL);

	jump = sqrt(size);
	left = right = list;

	while (right->index != jump && right->next)
		right = right->next;

	while (right && left->n != value)
	{
		printf("Value checked at index [%ld] = [%d]\n", right->index, right->n);
		if (!right->next || value <= right->n)
			break;
		for (tmp_i = jump; tmp_i > 0; tmp_i--)
		{
			if (right->next)
				right = right->next;
			if (left->next)
				left = left->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			left->index, right->index);

	while (left->index <= right->index)
	{
		printf("Value checked array[%ld] = [%d]\n", left->index, left->n);
		if (value == left->n || !left->next)
			break;
		left = left->next;
	}

	if (left && value == left->n)
		return (left);

	return (NULL);
}
