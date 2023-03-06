#include "main.h"

/**
 * _strchr - function that locates a character in  string
 * @s: string
 * @c: character
 * Return: character c.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	return ('\0');
}
