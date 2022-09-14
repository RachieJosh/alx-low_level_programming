#include "main.h"

/**
  * jack_bauer - A function that prints every minute of Jack Bauer,
  *               starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int min, hour;

	for (min = 0; min < 24; min++)
	{
		for (hour = 0; hour < 59; hour++)
		{
			if (min < 10)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			else if (min >= 10)
			{
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}
			if (hour < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(hour + '0');
			}
			else if (hour >= 10)
			{
				_putchar(':');
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) = '0');
			}
			_putchar('\n');
		}
	}
}
