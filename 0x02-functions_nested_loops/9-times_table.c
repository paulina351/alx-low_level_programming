#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int f, a, n;

	for (f = 0; a < 9; a++)
	{
		for (a = 0; a < 10; a++)
		{
			n = a * f;
			if (a == 0)
			{
				_putchar(n + '0');
			}

			if (n < 10 && a != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}

		}
		_putchar('\n');
	}
}

