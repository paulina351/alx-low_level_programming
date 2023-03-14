#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concacenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: success or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < len1)
		{
			s3[x] = s1[x];
			x++;
		}
	}
	if (s2)
	{
		while (x < (len1 + len2))
		{
			s3[x] = s2[y];
			x++;
			y++;
		}
	}
	s3[x] = '\0';

	return (s3);
}

