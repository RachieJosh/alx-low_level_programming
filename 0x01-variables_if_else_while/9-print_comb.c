#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	for (; digit < 10; digit++)
	{
		putchar(digit + '0');
		if (digit == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
