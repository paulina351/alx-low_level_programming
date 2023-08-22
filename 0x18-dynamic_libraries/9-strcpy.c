#include "main.h"

/**
 * char *_strcpy - copies the string pointer
 * @src: copy from
 * @dest: copy to
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
