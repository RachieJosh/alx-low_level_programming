#include "main.h"
#include <string.h>

/**
  * puts_half - It prints half of the string
  * @str: The string to be checked
  *
  * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int f, g, h;

	f = strlen(str);
	if (f % 2 == 1)
	{
		g = f / 2 + 1;
	}
	else
	{
		g = f / 2;
	}
	for (h = g; h < f; h++)
		_putchar(str[h]);
	_putchar('\n');
}

