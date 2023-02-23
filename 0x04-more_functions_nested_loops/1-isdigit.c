#include "main.h"

/**
 * _isdigit - check for a digit 0 to 0
 * @c: to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
