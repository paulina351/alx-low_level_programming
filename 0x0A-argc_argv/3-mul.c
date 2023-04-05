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
	int x, mul = 1;

	if (mul == 3)
	{
		for (x = 1; x < argc; x++)
		{
			mul *= atoi(argv[x]);
		}

		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
