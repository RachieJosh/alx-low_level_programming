#include "main.h"

/**
  * times_table - A function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int k;
	int z;

	for (k = 0; k <= 9; k++)
	{
		for (z = 0; z <= 9; z++)
		{
			int prod = z * k;

			if (z == 0)
			{
				_putchar('0');
			} else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
