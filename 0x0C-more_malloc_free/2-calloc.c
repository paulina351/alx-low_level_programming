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
	char *alloc;
	int a = 0, b = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	alloc = malloc(b);

	if (alloc == NULL)
		return (NULL);

	while (a < b)
	{
		alloc[a] = 0;
		a++;
	}

	return (alloc);
}
