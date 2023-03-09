#include "main.h"

/**
 * _pow_recursion - return the value of x raised by the power of y
 * @x: value of x
 * @y: power of y
 * Return: the value after the return of x n y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
