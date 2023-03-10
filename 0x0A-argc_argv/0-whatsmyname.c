#include <stdio.h>
#include "main.h"

/**
 * main - prints its name followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
