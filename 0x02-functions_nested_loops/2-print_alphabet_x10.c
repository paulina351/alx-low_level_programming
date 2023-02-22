#include "main.h"

/**
 *print_alphabet_x10- print 10 times the alphabet in lowercase\new line
 *
 * Return: 1;
 */
void print_alphabet_x10(void)
{
	char ch;
	int k;

	k = 0;

	while (k < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		k++;
	}
}
