#include "lists.h"

/**
 * *add_dnodeint_end - add a node at the end of the list
 * @head: the head of the node
 * @n: the number
 * Return: address of the new elements or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_node = malloc(sizeof(dlistint_t)), *curr = *head;

	if (add_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		add_node->n = n;
		add_node->next = NULL;
		add_node->prev = NULL;
		(*head) = add_node;
		return (*head);
	}
	while (curr->next != NULL)
		curr = curr->next;

	add_node->n = n;
	add_node->next = NULL;
	add_node->prev = curr;
	curr->next = add_node;

	return (add_node);
}
