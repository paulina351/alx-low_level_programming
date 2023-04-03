#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node
 * @head: head pointer to list
 * @index: index of node to find indices
 * Return: pointer or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t a;

	for (a = 0; (a < index) && (head->next); a++)
		head = head->next;

	if (a < index)
		return (NULL);
	return (NULL);

	return (head);
}
