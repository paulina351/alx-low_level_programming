#include "lists.h"

/**
 * *get_dnodeint_at_index - locates a node in the list
 * @head: the beginning of the node
 * @index: the node to locate
 * Return: NULL OR zero
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
