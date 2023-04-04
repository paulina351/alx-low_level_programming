#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to list
 * @head: head pointer to list
 * @idx: index of the list where new node will be added
 * @n: value for the new node
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert, *node = *head;
	unsigned int new;

	insert = malloc(sizeof(listint_t));

	if (insert == NULL)
		return (NULL);

	insert->n = n;

	if (idx == 0)
	{
		insert->next = node;
		*head = insert;
		return (insert);
	}

	for (new = 0; new < (idx - 1); new++)
	{
		if (node == NULL || node->next == NULL)
			return (NULL);

		node = node->next;

	}

	insert->next = node->next;
	node->next = insert;

	return (insert);
}
