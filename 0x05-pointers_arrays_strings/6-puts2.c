#include "main.h"
#include <stdio.h>

/**
  * puts2 - It prints every other character of a string,
  *         starting with first character, then new line.
  * @str: String to be checked
  *
  * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int len, a;

	len = strlen(str);
	for (a = 0; a < len; a++)
		_putchar(str[a]);
	_putchar('\n');
}
