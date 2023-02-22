#include "main.h"

/**
 * print_sign - check the sign of the number n
 * @n: to be checked
 * Return: 1 if n is greater than 0,0 if n is equal to n,-1 if n is less than n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
