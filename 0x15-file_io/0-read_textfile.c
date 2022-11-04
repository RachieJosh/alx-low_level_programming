#include "main.h"
#include <stdio.h>

#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

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
	char *buff;

	buff 
