#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int x, num = 0;
	unsigned long int curr;

	for (x = 63; x >= 0; x--)
	{
		curr = n >> x;

		if (curr & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
