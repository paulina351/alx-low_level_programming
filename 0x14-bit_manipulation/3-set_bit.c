#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: value of bit
 * @index: is the index setarting from 0 of the bit you want to set
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
