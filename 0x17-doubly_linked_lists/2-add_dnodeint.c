#include "lists.h"

/**
 * *add_dnodeint - add a new node at the beginning
 * @n: new node
 * @head: the head of the node
 * Return: the address or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_node;

	add_node = malloc(sizeof(dlistint_t));

	if (add_node)
	{
		add_node->n = n;
		add_node->next = *head;
	}
	else
		return (NULL);
	if (*head)
		add_node->next = *head;
	*head = add_node;
	return (add_node);
}
