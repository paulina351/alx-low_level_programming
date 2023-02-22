#include "main.h"

/**
 * jack_bauer - prints all minutes in a day from 00:00 to 23:59
 *
 * Return: 0.
 */

void jack_bauer(void)
{
	int u, v, w, x;

	for (u = 0; u <= 2; u++)
	{
		for (v = 0; v <= 9; v++)
		{
			for (w = 0; w <= 5; w++)
			{
				for (x = 0; <= 9; x++)
				{
					if (u == 2; &&v > 3)
					{
						break;
					}
					_putchar(u + '0');
					_putchar(v + '0');
					_putchar(':');
					_putchar(w + '0');
					_putchar(x + '0');
					_putchar('\n');
				}
			}
		}
	}
}
