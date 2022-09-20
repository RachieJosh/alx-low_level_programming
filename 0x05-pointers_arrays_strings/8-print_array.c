#include "main.h"
#include <stdio.h>

/**
  * print_array - It prints character elements of an array of integers
  * @a: Character to be checked
  * @n: Character to be checked
  *
  * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		printf("%d, ", a[q]);
		if (q != n - 1)
			printf(", ");
	}
	printf("\n");
}
