#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: head
 * Return: the number of node
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *elements = h;
	size_t all = 0;

	while (elements != NULL)
	{
		printf("%d\n", elements->n);
		all++;
		elements = elements->next;
	}

	return (all);
}
