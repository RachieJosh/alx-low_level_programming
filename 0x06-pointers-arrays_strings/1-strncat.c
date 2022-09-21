#include "main.h"
#include <string.h>

/**
  * _strncat - A function similar to strcat but differenr in terms of bytes.
  * @dest: The destination
  * @src: The location
  * @n: The bytes
  *
  * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
