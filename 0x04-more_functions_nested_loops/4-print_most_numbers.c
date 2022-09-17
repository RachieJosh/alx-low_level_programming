#include <stdio.h>
#include "main.h"

/**
  * print_most_numbers - A function that prints the numbers except 2 and 4
  *
  * Return: Always 0. (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
		putchar(i);
	}
	_putchar(10);
}
