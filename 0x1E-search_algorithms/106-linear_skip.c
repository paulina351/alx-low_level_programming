#include "search_algos.h"

/**
 * linear_skip - a function that searches for a
 *               value in a sorted skip list of integers
 * @list: is a pointer to the head of the skip list to search in
 * @value: is the value to search for
 * Return: NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *nd, *j;

	if (list == NULL)
		return (NULL);

	for (nd = j = list; j->next != NULL && j->n < value;)
	{
		nd = j;
		if (j->express != NULL)
		{
			j = j->express;
			printf("Value checked at index [%ld] = %d]\n",
					j->index, j->n);
		}
		else
		{
			while (j->next != NULL)
				j = j->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, j->index);

	for (; nd->index < j->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("value checked at index [%ld] = [%d]\n", nd->index, nd->n);

	return (nd->n == value ? nd : NULL);
}
