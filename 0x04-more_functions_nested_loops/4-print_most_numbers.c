#include <stdio.h>
#include "main.h"

/**
  * print_most_numbers - A function that prints the numbers except 2 and 4
  *
  * Return: nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		putchar(n);
	}
	_putchar(10);
}
