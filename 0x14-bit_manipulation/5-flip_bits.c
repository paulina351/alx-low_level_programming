#include "main.h"

/**
 * flip_bits - function that return the number of bits
 * @n: number of bit
 * @m: number of bit
 * Return: success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for (x = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			x++;
	}
	return (x);
}
