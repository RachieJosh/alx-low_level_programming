#include "main.h"

/**
 * create_file - A function creates a file.
 * @filename: The filename to create.
 * @text_content: The content to add.
 *
 * Return: 1 on success, 0 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	int written;
	int rwr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		text_context = "";
	for (written = 0; text_contex[written]; written++)
		;
	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
