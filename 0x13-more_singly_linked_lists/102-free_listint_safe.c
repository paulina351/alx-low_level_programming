#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head pointer of the linked list
 * Return: 0
 */
void free_listp2(listp_t **head)
{
	listp_t *samp;
	listp_t *present;

	if (head != NULL)
	{
		samp = *head;
		while ((samp = present) != NULL)
		{
			present = present->next;
			free(samp);
		}
		*head = NULL;

	}
}

/**
 * free_listint_safe - frees a linked list
 * @h: head pointer of the linked list
 * Return: freed size
 */
size_t free_listint_safe(listint_t **h)
{
size_t num = 0;
listp_t *height, *add, *sum;
listint_t *present;

height = NULL;
while (*h != NULL)
{
	add = malloc(sizeof(listp_t));

	if (add == NULL)
		exit(98);

	add->p = (void *)*h;
	add->next = height;
	height = add;

	sum = height;

	while (sum->next != NULL)
	{
		sum = sum->next;
		if (*h == sum->p)
		{
			*h = NULL;
			free_listp(&height);
			return (num);
		}
	}
	present = *h;
	*h = (*h)->next;
	free(present);
	num++;
}
*h = NULL;
free_listp(&height);
return (num);
}
