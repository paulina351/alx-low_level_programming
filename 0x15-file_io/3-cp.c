#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: if the number of argument is not the correct one,
 * exit with code 97
 * if file_from does not exist, or if you can not read it,
 * exit with code 98
 * if you can not create or if write to file_to fails,
 * exit with code 99
 * f you can not close a file descriptor , exit with code 100
 */

int main(int argc, char *argv[])
{
	int fl_fro, fl_to, error_end;
	int d_fro, d_to;
	char buf[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fl_fro = open(argv[1], O_RDONLY);
	if (fl_fro < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	fl_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((error_end = read(fl_fro, buf, 1024)) > 0)
	{
	if (fl_to < 0 || (write(fl_to, buf, error_end) != error_end))
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	}
	if (error_end < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	d_fro = close(fl_fro);
	if (d_fro < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fl_fro);
		exit(100);
	}
	d_to = close(fl_to);
	if (d_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fl_to);
		exit(100);
	}
	return (0);
}
