#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: input
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	unsigned int y, z = 0;

	for (y = 0; y < 64; y++)
	{
		if (y % 8 == 0 && y != 0)
		{
			z = y;
			_putchar('\0');
		}
		_putchar(a[y / 8][y - z]);
	}
	_putchar('\n');
}
