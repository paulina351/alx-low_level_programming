#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - show the number of elements of a list
 * @h: a linked list
 * Return: the number of element of a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
