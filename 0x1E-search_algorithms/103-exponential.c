#include "search_algos.h"
/**
 * _binary_search - Searches for a value in a sorted array
 * @array: is a pointer to the first element of the array to search in
 * @l: beginning index
 * @r: the finishing index
 * @value: the value to search for
 * Return: if not present of NULL, return -1
 */

int _binary_search(int *array, size_t l, size_t r, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	while (r >= l)
	{
		printf("Searching in array: ");
		for (a = l; a < r; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = l + (r - l) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			r = a - 1;
		else
			l = a + 1;
	}

	return (-1);
}

/**
 * exponential_search - a function that searches for a value in a sorted array
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: if not present or NULL return -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, r;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] <= value; a = a * 2)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	r = a < size ? a : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, r);
	return (_binary_search(array, a / 2, r, value));
}
