#include "main.h"

/**
 * _memcpy - A function that copies n bytes from memory area src,
 *           to memory area dest.
 * @dest: Parameter one
 * @src: Parameter two
 * @n: Parameter three
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
	{
		dest[w] = src[w];
	}

	return (dest);
}
