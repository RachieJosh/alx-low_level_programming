#include "main.h"

/**
 * print_number - A function that prints an integer
 * @n: the digit
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int digit = n;

	if (n < 0)
	{
		_putchar('-');
		digit = -digit;
	}

	if ((digit / 10) > 0)
		print_number(digit / 10);

	_putchar((digit % 10) + '0');
}
