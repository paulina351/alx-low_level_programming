#include "main.h"

/**
 * clear_bit - function that sets value of a bit to 0 at a given index
 * @n: value of bit
 * @index: the index starting from 0 of the bit you want to get
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
