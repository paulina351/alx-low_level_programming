#include "main.h"

/**
 * print_diagonal - draws a line
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int b, c;

	if (n <= 1)
	{
		_putchar('\n');
	}
	else
	{
	for (b = 1; b <= n; b++)
	{
		for (c = 1; c < b; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
