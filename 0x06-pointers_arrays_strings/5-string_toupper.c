#include "main.h"

/**
  * string_toupper - A function that changes all lowercase
  *                  of a string to uppercase
  * @y: Parameter
  *
  * Return: Always 0 (Success)
 */

char *string_toupper(char *y)
{
	int w = 0;

	while (y[w])
	{
		if (y[w] >= 97 && y[w] <= 122)
			y[w] = y[w] - 32;
		w++;
	}

	return (y);
}
