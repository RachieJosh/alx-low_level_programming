#include "main.h"

/**
 * _memset - A function that fills n bytes of the meomory area,
 *           pointed to by s with the constant byte b.
 * @s: Parameter one
 * @b: Parameter two
 * @n: Parameter  three
 *
 * Return: a pointer to the s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
	{
		s[w] = b;
	}

	return (s);
}
