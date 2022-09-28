#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of two diagonals,
 *                  of a square matrix of integers.
 * @a: Parameter one
 * @size: Parameter two
 */

void print_diagsums(int *a, int size)
{
	int q;
	int w = 0;
	int e = 0;

	for (q = 0; q < size; q++)
	{
		w = w + a[(q * size) + q];
		e = e + a[(size - 1) + ((size - 1) * q)];
	}
	printf("%d, %d\n", w, e);
}
