#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns he sum of all data
 * @head: head pointer of the list
 * Return: sum of all the data or 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
