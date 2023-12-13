#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: if not present or NULL return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}

	return (-1);
}
