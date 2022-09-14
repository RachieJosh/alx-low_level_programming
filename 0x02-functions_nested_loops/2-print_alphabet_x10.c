#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet 10 times
  *
 */
void print_alphabet_x10(void)
{
	char b = 'a';
	char a = 0;

	for (; a <= 9; a++)
	{
		for (; b >= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
