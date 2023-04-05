#include "main.h"

/**
 * _strstr - function that locates a substring
 * @needle: substring
 * @haystack: string
 * Return: beginning of substring of NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *ahaystack;
	char *bneedle;

	while (*haystack != '\0')
	{
		ahaystack = haystack;
		bneedle = needle;

		while (*haystack != '\0' && *bneedle != '\0' && *haystack == *bneedle)
		{
			haystack++;
			bneedle++;
		}
		if (!*bneedle)
			return (ahaystack);
		haystack = ahaystack + 1;
	}
	return (0);
}
