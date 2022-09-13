#include "main.h"

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
