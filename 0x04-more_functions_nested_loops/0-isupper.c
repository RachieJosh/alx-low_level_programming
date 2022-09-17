#include <stdio.h>

/**
  * _isupper - A function that checks for uppercase character
  *@c: Character to be checked
  *
  * Return: 1 if character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
