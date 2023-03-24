#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print number
 * @seperator: to be printed
 * @n: number of integers passed to the function
 *
 * Return: 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (a < n)
		{
			printf("%d", va_arg(args, int));

			if (a != n - 1 && seperator != NULL)
				printf("%s", seperator);

			a++;
		}
		va_end(args);
	}
	printf("\n");
}
