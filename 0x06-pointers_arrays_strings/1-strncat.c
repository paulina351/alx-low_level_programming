#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: the destination
 *
 * @n: limit
 * Return: a pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';
	return (dest);
}
