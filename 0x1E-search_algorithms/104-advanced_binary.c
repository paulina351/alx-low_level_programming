#include "search_algos.h"

/**
 * advanced_binary_recursive - searches recursive for a value i
 * @array: a pointer to the first element of the [sub]array to search
 * @l: the beginning index
 * @r: the ending index
 * @value: the value to search for
 * Return: if the value is not present or NULL return -1
 */

int advanced_binary_recursive(int *array, size_t l, size_t r, int value)
{
	size_t a;

	if (r < l)
		return (-1);

	printf("Searching in array: ");
	for (a = l; a < r; a++)
		printf("%d, ", array[a]);
	printf("%d\n", array[a]);

	a = l + (r - l) / 2;
	if (array[a] == value && (a == l || array[a - 1] != value))
		return (a);
	if (array[a] >= value)
		return (advanced_binary_recursive(array, l, a, value));
	return (advanced_binary_recursive(array, a + 1, r, value));
}

/**
 * advanced_binary - a function that searches for a value
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: if value not present or NULL return -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
