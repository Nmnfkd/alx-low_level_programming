#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_a  -singly linked list
 *
 * @n: Interger
 * @index: Index of the node in the  list
 * @next: pointer to the next node
 */
typedef struct listint_a
{
	         int n;
		 size_t index;
		 struct listint_a *next;
} listint_t;

/**
 * struct skiplist_a -singly linked list with an express lane
 *
 * @n: Integer 
 * @index: Index of the node in the list
 * @next: pointer to the next node
 * @express: pointer to the next node in the express lane
 *
*/
typedef struct skiplist_a
{
                 int n;
                 size_t index;
                 struct skiplist_a *next;
		 struct skiplist_a *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
