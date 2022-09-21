#include "main.h"
#include <stdio.h>

/**
  * _strcat - A function that appends the src string to the dest string,
  *            overwrites the terminating null byte (\0) at,
  *            the end of dest, and then adds a terminating null byte.
  * @dest: The string destination
  * @src: The string source
  *
  * Return: It returns a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int slen = 0, i;

	while (dest[slen])
	{
		slen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[slen] = src[i];
		slen++;
	}

	dest[slen] = '\0';
	return (dest);
}
