#include <stdio.h>

/**
 * main - This function prints the name of the program, followed by a new line.
 * @argc: number of arguments
 * @argv: argument vector of pointers to strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
