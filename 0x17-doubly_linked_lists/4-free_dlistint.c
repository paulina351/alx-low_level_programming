#include "lists.h"

/**
 * free_dlistint - frees dlistint
 * @head: the head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pemt;

	while (head)
	{
		pemt = head->next;
		free(head);
		head = pemt;
	}
}
