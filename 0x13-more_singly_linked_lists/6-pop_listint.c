#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head pointer of the list
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	node = *head;

	if (node == NULL)
		return (0);

	*head = node->next;
	n = node->n;
	free(node);
	return (n);
}
