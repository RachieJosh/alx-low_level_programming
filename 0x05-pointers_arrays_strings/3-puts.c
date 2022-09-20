#include "main.h"
#include <stdio.h>

/**
  * _puts - It prints a string, followed by a new line,
  *         to stdout.
  *@str: String to be checked
  *
  * Return: a non negative number on success,
  *         or EOF on error
 */

void _puts(char *str)
{
	while (*str)
		_puts(*str++);

	_putchar('\n');
}
