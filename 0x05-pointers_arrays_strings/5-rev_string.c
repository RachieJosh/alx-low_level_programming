#include "main.h"
#include <stdio.h>

/**
  * rev_string - It reverses a string
  * @s: String to be checked
  *
  * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int r;
	char e;

	for (r = 0; r < _strlen(s) / 2; r++)
	{
		e = s[r];
		s[r] = s[_strlen(s) - r - 1];
		s[_strlen(s) - r - 1] = e;
	}
}
