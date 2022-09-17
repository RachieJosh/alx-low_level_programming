#include "main.h"

/**
  * print_numbers - A function that prints numbers 0 to 9 followed by a newline
 */

void print_numbers(void)
{
	int w;

	for (w = 0; w <= 9; w++)
		_putchar((w % 10) + 0);

	_putchar('\n');
}
