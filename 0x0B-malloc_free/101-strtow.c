#include "main.h"
#include <stdlib.h>

/**
 * **strtow - splits a word into two
 * @str: pointer to an arrays of strings
 * Return: success or NULL
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, z = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[z] = tmp - c;
				z++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = x;
	}
	matrix[z] = NULL;

	return (matrix);
}
