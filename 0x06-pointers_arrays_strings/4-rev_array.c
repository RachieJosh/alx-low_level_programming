#include "main.h"
#include <stdio.h>

/**
  * reverse_array - A function that reverses the content of an array of int
  * @a: Parameter one
  * @n: Parameter two
  *
  * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int *v, b, aux, c;

	v = a;

	for (b = 1; b < n; b++)
	{
		v++;
	}
	for (c = 0; c < b / 2; c++)
	{
		aux = a[c];
		a[c] = *v;
		*v = aux;
		v--;
	}
}
