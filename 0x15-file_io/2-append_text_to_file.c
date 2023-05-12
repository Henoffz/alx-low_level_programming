#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: file name
 * @text_content: content of the file.
 *
 * Return: -1 if file does noth exist. Otherwise 1.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
		bytes_written = write(fd, text_content, len);
		if (bytes_written != len)
			return (-1);
	}
	close(fd);
	return (1);
}
