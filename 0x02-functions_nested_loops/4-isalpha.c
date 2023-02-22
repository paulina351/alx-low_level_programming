#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c:to be checked
 * Return: 1 if c is l,lc,uc otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
