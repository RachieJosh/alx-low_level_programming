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

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}

	_putchar('\n');
}
