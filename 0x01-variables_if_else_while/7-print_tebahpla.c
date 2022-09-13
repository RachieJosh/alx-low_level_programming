#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet_reversed;

	for (alphabet_reversed = 'z'; alphabet_reversed >= 'a'; alphabet_reversed--)
		putchar(alphabet_reversed);
	putchar('\n');
	return (0);
}
