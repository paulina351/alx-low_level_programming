#include <stdio.h>

void tortoise(void) __attribute__ ((constructor));

/**
 * tortoise - function that prints
 * Return: nothing
 */
void tortoise(void)
{
	printf("You're best! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
