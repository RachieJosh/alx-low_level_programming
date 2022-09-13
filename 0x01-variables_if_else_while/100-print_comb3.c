#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0;
	int num2 = num1 + 1;

	for (; num1 < 199; num1++)
	{
		for (; num2 < 19; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
