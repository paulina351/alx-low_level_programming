#include "main.h"

/**
 * _abs - print the absolute value of integer
 *@a: to add value
 * Return: the absolute value
 */
int _abs(int a)
{
	int k = a;
	int absval;

	if (k < 0)
	{
		k = k * (-1);
	}
	absval = k;
	return (absval);
}
