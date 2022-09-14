#include "main.h"

/**
  * jack_bauer - A function that prints every minute of Jack Bauer,
  *               starting from 00:00 to 23:59
  *
  * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int s, r;

	for (s = 0; s <= 23; s++)
	{
		for (r = 0; r <= 59; r++)
		{
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar(':');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar('\n');
		}
	}
}
