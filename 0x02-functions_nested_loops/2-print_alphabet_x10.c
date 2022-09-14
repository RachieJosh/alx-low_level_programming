#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet 10 times
  *
 */
void print_alphabet_x10(void)
{
	int b;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
