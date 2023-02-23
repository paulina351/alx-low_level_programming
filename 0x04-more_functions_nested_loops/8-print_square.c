#include "main.h"

/**
 * print_square - print a quare followed by a number
 * @size: to be printed
 *
 * Return: void.
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size); b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
