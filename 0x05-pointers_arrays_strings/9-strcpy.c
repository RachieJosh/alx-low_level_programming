#include "main.h"

/**
  * *_strcpy - It copies the string pointed to by src,
  *            including the terminating null byte(\0),
  *            to the buffer pointed to by dest.
  * @src: Where string pointed to is copied
  * @dest: Where string copied is directed
  *
  * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int c;
	int v = 0;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[v] = src[c];
		v++;
	}
	dest[v] = '\0';

	return (dest);
}
