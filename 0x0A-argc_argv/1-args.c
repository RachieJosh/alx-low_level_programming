#include <stdio.h>

/**
 * main - It prints the number of arguments paased into it.
 * @argc: The number of arguments
 * @argv: The argument vector of pointers to strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
