#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 10; num1 <= 19; num1++)
	{
		for (num2 = 10; num2 <= 19; num2++)
		{
			if ((num2 % 10) > (num1 % 10))
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				if (num1 != 18 || num2 != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
