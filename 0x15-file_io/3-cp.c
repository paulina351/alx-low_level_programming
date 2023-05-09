#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened
 * @file_from: copy from
 * @file_to: copy to
 * @argv: vector of argument
 * Return: no return
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}
	if (file_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
