#include "main.h"
#include "stdlib.h"

/**
 * create_array - create an array of chars and initialize it to a specific char
 * @c: specific char
 * @size: allocation of byte
 * Return: a pointer to NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);

	while (size--)
		array[size] = c;

	return (array);
}
