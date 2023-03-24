#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @seperator: to be printed in between the strings
 * @n: no of strings passed to a function
 * Return: 0
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (a > n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", seperator);

			a++;
		}

		va_end(args);
	}

	printf("\n");
}
