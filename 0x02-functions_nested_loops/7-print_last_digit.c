#include "main.h"

/**
  * print_last_digit - A function that prints the last digit of a number
  * @n: Character to be checked
  *
  * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int finaln = n % 10;

	if (finaln < 10)
		finaln = finaln * -1;
	_putchar(finaln + '0');

	return (finaln);
}
