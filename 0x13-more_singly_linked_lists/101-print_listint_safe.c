#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head point of the linked list
 * Return: 0
 */
void free_listp(listp_t **head)
{
	listp_t *samp;
	listp_t *present;

	if (head != NULL)
	{
		present = *head;
		while ((samp = present) != NULL)
		{
			present = present->next;
			free(samp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: head pointer of the linked list
 * Return: node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	listp_t *height, *add, *sum;

	height = NULL;
	while (head != NULL)
	{
		add = malloc(sizeof(listp_t));

		if (add == NULL)
			exit(98);

		add->p = (void *)head;
		add->next = height;
		height = add;

		sum = height;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free_listp(&height);
				return (num);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}

	free_listp(&height);
	return (num);
}
