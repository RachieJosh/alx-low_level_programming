#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char lowercase;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');
	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
