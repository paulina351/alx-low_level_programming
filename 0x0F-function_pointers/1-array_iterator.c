#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: element
 * @size: size of an array
 * @action: pointer to the function
 * Return: 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
