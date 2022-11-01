#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * @n: Character to be checked.
 *
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int w;
	int e;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (w = 0; w < n; w++)
		{
			for (e = 0; e < w; e++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
