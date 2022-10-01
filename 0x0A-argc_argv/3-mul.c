#include <stdio.h>
#include <stdlib.h>

/**
 * main - It writes a prgram that multiplies two numbers
 * @argc: The number of arguments
 * @argv: The argument vector of pointers to strings
 *
 * Return: 0 if successful,
 *         1 otherwise.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);

	return (0);
}
