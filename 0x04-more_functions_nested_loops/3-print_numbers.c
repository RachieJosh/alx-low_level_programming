#include <stdio.h>
#include "main.h"

/**
  * print_numbers - A function that prints numbers 0 to 9 followed by a newline
  *
  * Return: nothing
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}

	putchar(10);
}
