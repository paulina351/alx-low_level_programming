#include "lists.h"

/**
 * dlistint_len - number of elements
 * @h: head of node
 * Return: the number of number
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *elements = h;
	size_t prall = 0;

	while (elements)
	{
		prall++;
		elements = elements->next;
	}
	return (prall);
}
