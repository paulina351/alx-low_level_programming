#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: if not present or NULL  return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t a, b, f;

	if (array == NULL)
		return (-1);

	for (b = 0, f = size - 1; f >= b;)
	{
		a = b + (((double)(f - b) / (array[f] - array[b])) * (value - array[b]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			f = a - 1;
		else
			b = a + 1;
	}

	return (-1);
}
