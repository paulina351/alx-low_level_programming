#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to the end of the file 
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a, ntext;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (ntext = 0; text_content[ntext]; ntext++)
			;
		a = write(fd, text_content, ntext);

		if (a < 0)
			return (-1);
	}

	close(fd);

	return (1);
}
