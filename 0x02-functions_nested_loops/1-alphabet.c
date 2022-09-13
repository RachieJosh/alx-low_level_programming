#include "main.h"

/**
  * print_alphabet - prints alphabet a-z
  *
  * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
