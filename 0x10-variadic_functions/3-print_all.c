#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: the conversation specifier to prints
 *
 * Return: 0.
 */
void print_all(const char * const format, ...)
{
	va_valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 1:
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 2:
				printf("%d", va_arg(valist, int)), c = 2;
				break;
			case 3:
				printf("%f", va_arg(valist, double)), c = 3;
				break;
			case 4:
				str = va_arg(valist, char *), c = 4;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}printf("\n"), va_end(valist);
}
