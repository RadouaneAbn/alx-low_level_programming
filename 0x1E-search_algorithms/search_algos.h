#ifndef SEARCH_H
#define SEARCH_H

/* Libraries */
#include <stdlib.h>
#include <stdio.h>

/* Macros */
#define NOT_FOUND -1

/* Data Structures */

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* Linear search */
int linear_search(int *array, size_t size, int value);

/* Binary search */
int binary_search(int *array, size_t size, int value);

/* Jump search */
int jump_search(int *array, size_t size, int value);

/* Interpolation search */
int interpolation_search(int *array, size_t size, int value);

/* Exponential search */
int exponential_search(int *array, size_t size, int value);

/* Advanced binary search */
int advanced_binary(int *array, size_t size, int value);
int recursion_binary_search(int *array, size_t left, size_t right, int value);

/* Jump search in a singly linked list */
listint_t *jump_list(listint_t *list, size_t size, int value);

/* Linear search in a skip list */
skiplist_t *linear_skip(skiplist_t *list, int value);

/* Print Array */
void print_array(int *array, size_t l, size_t r);

#endif /* SEARCH_H */
