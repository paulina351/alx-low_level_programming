#include "lists.h"

/**
 * add_nodeint_end - adds a node to the linked list
 * @head: head pointer
 * @n: number
 * Return: address to be used or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;
	listint_t *node = *head;

	add_node = malloc(sizeof(listint_t));
	if (add_node != NULL)
	{
		add_node->n = n;
		add_node->next = NULL;
	}
	else
		return (NULL);
	if (node != NULL)
	{
		while (node->next != NULL)
			node = node->next;
		node->next = add_node;
	}
	else
		*head = add_node;
	return (add_node);
}
