#include "main.h"

/**
  * read_textfile - A function that reads a text file and prints it
  *                 to the POSIX standard output.
  * @filename: The file to read.
  * @letters: The bytes to be counted.
  *
  * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, printed, written;
	char *buf;

	buf malloc(letters);
	if (buf == NULL)
		return (0);
	if (filename == -1)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	printed = read(fd, buf, letters);
	if (printed == -1)
		return (0);
	written = write(STDOUT_FILEN0, buf, printed);
	if (written == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buf);
	return (printed);
