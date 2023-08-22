#include "main.h"

/**
 * _islower- check for lowercase character
 * @c: is to checked
 * Return: 1 if char is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
