#include "lists.h"

/**
 * sum_dlistint - sum of all the data of a linked list
 * @head: the head of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
