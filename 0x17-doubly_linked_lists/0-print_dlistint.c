#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *elements = h;
size_t prall = 0;

while (elements)
{
printf("%d\n", elements->n);
prall++;
elements = elements->next;
}

return (prall);
}
