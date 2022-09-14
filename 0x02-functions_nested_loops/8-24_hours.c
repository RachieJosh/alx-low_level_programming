#include "main.h"

/**
  * jack_bauer - A function that prints every minute of Jack Bauer,
  *               starting from 00:00 to 23:59
  *
 */
void jack_bauer(void)
{
	int min = 0;
	int hour = 0;

	for (; hour <= 23; hour++)
	{
		for (; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
