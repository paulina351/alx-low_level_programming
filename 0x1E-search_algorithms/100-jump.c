#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted array
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: if not present or NULL return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a, hoped, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (a = hoped = 0; hoped < size && array[hoped] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", hoped, array[hoped]);
		a = hoped;
		hoped += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, hoped);

	hoped = hoped < size - 1 ? hoped : size - 1;
	for (; a < hoped && array[a] < value; a++)
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	return (array[a] == value ? (int)a : -1);
}
