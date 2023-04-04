#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: head pointer to list
 * @index: index of the node to be deleted
 * Return: 1 0r -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *select = *head;
	unsigned int list;

	if (select == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(select);
		return (1);
	}

	for (list = 0; list < (index - 1); list++)
	{
		if (select->next == NULL)
		return (-1);

		select = select->next;
	}

	delete = select->next;
	select->next = delete->next;
	free(delete);
	return (1);
}
