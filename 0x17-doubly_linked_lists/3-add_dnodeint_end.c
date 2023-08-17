#include "lists.h"

/**
 * *add_dnodeint_end - add a node at the end of the list
 * @head: the head of the node
 * @n: the number
 * Return: address of the new elements or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_node, last;

	add_node = malloc(sizeof(dlistint_t));

	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	if (*head == NULL)
	{
		add_node->prev = NULL;
		*head = add_node;
		return (add_node);
	}
	last  = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = add_node;
	add_node->prev = last;

	return (add_node);
}
