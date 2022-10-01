#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: The number of arguments
 * @argv: The argument vector of pointers to strings
 *
 * Return: 0 if successful,
 *         1 otherwise.
 */

int main(int argc, char *argv[])
{
	int w = 0, e, r;

	for (e = 1; e < argc; e++)
	{
		for (r = 0; argv[e][r]; r++)
		{
			if (isdigit(argv[e][r]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (e = 1; e < argc; e++)
	{
		w = w + atoi(argv[e]);
	}
	printf("%d\n", w);

	return (0);
}
