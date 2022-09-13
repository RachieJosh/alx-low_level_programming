#include "main.h"

/**
  * print_alphabet_x10 - Prints the alphabet ten times in lowercase
  *
  * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char times = 0;
	char alphabet = 'a';

	for (; times <= 9; times++)
	{
		for (; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
