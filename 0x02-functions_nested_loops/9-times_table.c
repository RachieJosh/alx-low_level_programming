#include "main.h"

/**
  * times_table - A function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num1 = 0;
	int num2 = 0;

	for (; num1 <= 9; num1++)
	{
		for (; num2 <=  9; num2++)
		{
			int multi = num2 * num1;

			if (num2 == 0)
			{
				_putchar('0');
			} else if (multi <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
