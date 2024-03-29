#include "main.h"

/**
 * read_textfile - read a text file and prints 1 to the posix
 * @filename: pointer to char
 * @letters: to allocate memory and read
 * Return: 0 or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, a, b;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	a = read(fd, buf, letters);
	b = write(STDOUT_FILENO, buf, a);

	free(buf);
	close(fd);
	return (b);
}
