#include <stdio.h>

/**
 * main - It prints all arguments a program recieves.
 * @argc: The number of arguments
 * @*argv: The argument vector of pointers to strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int w = 0;

	for (; w < argc; w++)
	{
		printf("%s\n", argv[w]);
	}

	return (0);
}
