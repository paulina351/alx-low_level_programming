#include "main.h"

/**
 * _isalpha - check the alphabetic character
 * @c: ...
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
