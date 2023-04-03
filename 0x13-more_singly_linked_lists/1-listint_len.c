#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: head
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *elements = h;
	size_t all = 0;

	while (elements != NULL)
	{
		all++;
		elements = elements->next;
	}
	return (all);
}
