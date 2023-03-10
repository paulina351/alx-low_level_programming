#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of argument passed into it
 * @argc: count arguments
 * @argv: vector arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
