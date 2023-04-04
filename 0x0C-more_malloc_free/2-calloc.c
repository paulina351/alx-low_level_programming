#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: byte size
 * Return: 0 or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *alloc;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	alloc = ptr;

	for (index = 0; index < (size = nmemb); index++)
		alloc[index] = '\0';

	return (ptr);
}
