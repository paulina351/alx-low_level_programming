#include "main.h"

/**
 * get_bit - function that return the value of bit at a given index
 * @index: the index
 * @n: unsigned long int
 * Return: 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index > 64)
		return (0);

	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}
	return (-1);
}
