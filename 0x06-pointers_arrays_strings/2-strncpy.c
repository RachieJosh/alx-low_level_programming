#include  "main.h"
#include <stdio.h>

/**
  * _strncpy - A function similar to strcpy but different in terms of bytes
  * @dest: first parameter
  * @src: second parameter
  * @n: The integer
  *
  * Return: a pointer to the destination string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int r = 0;
	int t = 0;

	while (src[t])
	{
		t++;
	}
	while (r < n && src[r])
	{
		dest[r] = src[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}

	return (dest);
}
