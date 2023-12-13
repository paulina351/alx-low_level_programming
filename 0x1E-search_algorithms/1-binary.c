#include "search_algos.h"

/**
 * binary_search - a function that searches for a value
 *                 in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: if not present or NULL return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t a, back, forward;

	if (array == NULL)
		return (-1);

	for (back = 0, forward = size - 1; forward >= back;)
	{
		printf("Searching in array: ");
		for (a = back; a < forward; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = back + (forward - back) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			forward = a - 1;
		else
			back = a + 1;
	}

	return (-1);
}
