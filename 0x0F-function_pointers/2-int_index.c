#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the element
 * @size: number of element of array
 * @cmp: pointer to function to compare values
 * Return: negative.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

				a++;
			}
		}
	}

	return (-1);
}
