#include "main.h"

/**
 * clear_bit - function that set the value of a bit of 0 at a given index
 * @n: number
 * @index: is the index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
