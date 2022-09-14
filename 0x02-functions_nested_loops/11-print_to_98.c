#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers from input to 98
  * @n: Character to be checked
  *
  * Return: Always 0 (Success)
  */
void print_to_98(int n)
{
	int w;

	if (n > 98)
	{
		for (w = n; w >= 98; w--)
		{
			printf("%d", w);
			if (w != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (w = n; w <= 98; w++)
		{
			printf("%d", w);
			if (w != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
