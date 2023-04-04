#include "lists.h"

/**
 * find_listint_loop - finds the loop in the list
 * @head: head pointer to the linked list
 * Return: pointer to node or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *addr1, *addr2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	addr1 = head->next;
	addr2 = (head->next)->next;

	while (addr2)
	{
		if (addr1 == addr2)
		{
			addr1 = head;

			while (addr1 != addr2)
			{
				addr1 = addr1->next;
				addr2 = addr2->next;
			}

			return (addr1);

		}

		addr1 = addr1->next;
		addr2 = (addr2->next)->next;
	}

	return (NULL);
}
