#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diag of sqr matrix
 * @a: input pointer
 * @size: matrix
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int x, sumA = 0, sumB = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			sumA += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			sumB += *(a + x);
	}
	printf("%d, %d\n", sumA, sumB);
}
