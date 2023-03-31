#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - function that prints
 * Return: nothing
 */
void first(void)
{
	printf("You're best! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
