#include "main.h"

/**
  * print_last_digit - A function that prints the last digit of a number
  * @n: Character to be checked
  *
  * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 10)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
