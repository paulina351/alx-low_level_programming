#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: memory area
 * @src: source
 * @n: filled with bytes
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
