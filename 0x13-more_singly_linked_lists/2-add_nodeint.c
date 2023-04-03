#include "lists.h"

/**
 * *add_nodeint - adds a node to the beginning of the list
 * @head: pointer to the list head
 * @n: integer
 * Return: NULL or address of the new elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node != NULL)
	{
		add_node->n = n;
		add_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		add_node->next = *head;
	*head = add_node;
	return (add_node);
}
