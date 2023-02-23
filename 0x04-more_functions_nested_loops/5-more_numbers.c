#include "main.h"

/**
 * more_numbers - print 1 to 14 * 10
 *
 * Return: no return.
 */

void more_numbers(void)
{
	int y, z;

	for (y = 1; y <= 10; y++)
	{
		for (z = 0; z < 15; z++)
		{
			if (z >= 10)
				_putchar('1');
			_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}
