#include "main.h"

/**
 * get_endianness - function that check the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int x;
	char *y;

	x = 1;
	y = (char *) &x;

	return ((int)*y);
}
