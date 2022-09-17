#include "main.h"

/**
  * print_numbers - A function that prints numbers 0 to 9 followed by a newline
  *
  * Return: Nothing
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
