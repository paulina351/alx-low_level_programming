#include "main.h"

/**
* flip_bits - function that returns the number of bits
* @n: number of bits
* @m: needs of flip
* Return: 0
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
