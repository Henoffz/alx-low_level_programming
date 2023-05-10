#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string entered in the file.
 *
 * Return: 1 if successful. Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len_t, read_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY |O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len_t = 0; text_content[len_t];)
			len_t++;
	}

	read_write = write(fd, text_content, len_t);
	if (read_write == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
