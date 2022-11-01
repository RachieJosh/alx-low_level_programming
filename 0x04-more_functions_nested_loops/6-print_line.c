#include "main.h"
#include <stdio.h>

/**
  * print_line - A function that draws a straight line in the terminal.
  * @n: Character to be checked.
  *
  * Return: nothing.
 */

void print_line(int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
