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
	va_list args;
	unsigned int a = 0, start = 0;
        char *b;

	va_start(args, format);
	while (format && format[a] != '\0')
	{
		switch (format[a])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(args, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(args, double));
			break;
		case 's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			b = va_arg(args, char*);
			if (b)
			{ printf("%s", b);
			break; }
			printf("%p", b);
			break; }
		a++;
	}
	printf("\n");
	va_end(args);
}
