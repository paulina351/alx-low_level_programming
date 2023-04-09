#include "main.h"

/**
 * create_file - function that create a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated strings
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, a, ntext;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (ntext = 0; text_content[ntext]; ntext++)
		;
	a = write(fd, text_content, ntext);
	if (a < 0)
		return (-1);
	close(fd);
	return (1);
}
