#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description - a function that prints the alphabet
 *
 * Return: 1 success.
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
	_putchar(k);
	}

	_putchar('\n');
}
