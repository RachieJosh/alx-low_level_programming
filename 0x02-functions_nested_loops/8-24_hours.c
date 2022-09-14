#include "main.h"

/**
  * jack_bauer - A function that prints every minute of Jack Bauer,
  *               starting from 00:00 to 23:59
  *
  * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min / 10) + '0');
			_putchar('\n');
		}
	}
}
