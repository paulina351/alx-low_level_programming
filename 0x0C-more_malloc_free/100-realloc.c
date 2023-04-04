#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to a memory
 * @old_size: size of the allocated space
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *ptr1, *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);

	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < old_size; a++)
			ptr1[a] = old_ptr[a];
	}
	free(ptr);
	return (ptr1);
}
