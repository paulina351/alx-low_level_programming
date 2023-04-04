#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: the first array
 * @max: the last array
 * Return: NULL OR POINTER
 */
int *array_range(int min, int max)
{
	int *a, b, c;

	if (min > max)
		return (NULL);

	c = max - min + 1;
	a = malloc(sizeof(int) * c);

	if (a  == NULL)
		return (NULL);

	for (b = 0; b < c; b++)
		a[b] = min++;

	return (a);
}
