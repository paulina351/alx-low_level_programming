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
		exit(98);
	}
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy the content of a file to another file
 * @argc: number of argument
 * @argv: vector of argument
 * Return: success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t ntext, abc;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_close(file_from, file_to, argv);

	ntext = 1024;
	while (ntext == 1024)
	{
		ntext = read(file_from, buf, 1024);
		if (ntext < 0)
			error_close(-1, 0, argv);
		abc = write(file_to, buf, ntext);
		if (abc < 0)
			error_close(0, -1, argv);
	}
	error_close = close(file_from);
	if (error_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close < 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
