#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @separator: to be printed in between the strings
 * @n: no of strings passed to a function
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a = 0;
	char *string;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		string = va_arg(valist, char *);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (n < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
