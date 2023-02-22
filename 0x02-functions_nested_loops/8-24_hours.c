#include "main.h"

/**
 * jack_bauer - prints all minutes in a day from 00:00 to 23:59
 *
 * Return: 0.
 */

void jack_bauer(void)
{
	int u, x;

	i = 0;

	while (u < 24)
	{
		x = 0;
		while (x < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((x /
