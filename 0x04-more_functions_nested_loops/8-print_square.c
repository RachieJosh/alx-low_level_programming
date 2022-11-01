#include "main.h"
#include <stdio.h>

/**
 * print_square - A function that prints a square followed by new line.
 * @size: integer to set square size
 *
 * Return: nothing.
 */

void print_square(int size)
{
	int w;
	int e;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (w = 0; w < size; w++)
		{
			for (e = 0; e < size; e++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
