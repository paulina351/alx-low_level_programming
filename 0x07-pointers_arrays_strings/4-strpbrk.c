#include "main.h"

/**
 * _strpbrk - function that search a string for any set of bytes
 * @accept: string
 * @s: string
 * Return: pointing to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return ('\0');
}
