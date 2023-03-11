#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the result of multiplication
 * @argc: count arguments
 * @argv: vector argument
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}
