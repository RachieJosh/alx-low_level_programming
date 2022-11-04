#include "main.h"

/**
  * read_textfile - A function that reads a text file and prints it
  *                 to the POSIX standard output.
  * @filename: The file to read.
  * @letters: The bytes to be counted.
  *
  * Return: The printed numbers count.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, printed, written;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	printed = read(fd, buff, letters);
	if (printed == -1)
		return (0);
	written = write(STDOUT_FILENO, buff, printed);
	if (written == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buff);
	return (printed);
}
