#include "search_algos.h"
/**
 * jump_list - a function that searches for a value
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: if value not present in head or head is NULL, return NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t s, s_s;
	listint_t *nd, *j;

	if (list == NULL || size == 0)
		return (NULL);

	s = 0;
	s_s = sqrt(size);
	for (nd = j = list; j->index + 1 < size && j->n < value;)
	{
		nd = j;
		for (s += s_s; j->index < s; j = j->next)
		{
			if (j->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, j->index);

	for (; nd->index < j->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);

	return (nd->n == value ? nd : NULL);
}

