#include "main.h"

/**
 * _strpbrk - A function that serches a string for any set of bytes
 * @s: Parameter one
 * @accept: Parameter two
 *
 * Return: a pointer to the bytes s that matches one byte of accept,
 *         or NULL if no bytes in found.
 */

char *_strpbrk(char *s, char *accept)
{
	int w;
	int e;

	for (w = 0; s[w] != '\0'; w++)
	{
		for (e = 0; accept[e] != '\0'; e++)
		{
			if (s[w] == accept[e])
			{
				return (s + w);
			}
		}
	}

	return (0);
}
