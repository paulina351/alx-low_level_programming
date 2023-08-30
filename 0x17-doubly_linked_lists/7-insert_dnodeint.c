#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 *  position
 *  @h: the head of the dlinked list
 *  @idx: the index
 *  @n: the node
 *  Return: dlistint
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *pemt;
	dlistint_t *add_node;
	unsigned int a;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	pemt = *h;

	a = 0;
	while (a < idx - 1)
	{
		if (pemt == NULL)
			return (NULL);
		a++;
		pemt = pemt->next;
	}

	if (pemt->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		add_node = malloc(sizeof(dlistint_t));
		if (add_node == NULL)
			return (NULL);
		add_node->n = n;
		add_node->next = pemt->next;
		pemt->next->prev = add_node;
		pemt->next = add_node;
		add_node->prev = pemt;
	}
	return (add_node);
}
