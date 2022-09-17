#include "main.h"

/**
  * print_numbers - A function that prints numbers 0 to 9 followed by a newline
  *
  * Return: Always 0. (Success)
 */

void print_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
