#include "main.h"

/**
  * print_last_digit - A function that prints the last digit of a number
  * @n: Character to be checked
  *
  * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
