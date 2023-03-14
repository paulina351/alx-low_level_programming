#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: to dublicate
 * Return: to a pointer or null
 */

char *_strdup(char *str)
{
	char *dublicate;
	unsigned int x, len;

	x = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	dublicate = malloc(sizeof(char) * (len + 1));

	if (dublicate == NULL)
		return (NULL);

	while ((dublicate[x] = str[x]) != '\0')
		x++;

	return (dublicate);
}
