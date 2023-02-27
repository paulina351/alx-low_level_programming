#include "main.h"

/**
 * swap_int - write a function that swap the value of two integer
 * @a: 1
 * @b: 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
