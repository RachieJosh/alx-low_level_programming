#include "main.h"
#include <stdio.h>

/**
  * _strlen - Returns the length of a string
  * @str: Character to be checked
  *
  * Return: The length of the string
 */

int _strlen(char *str)
{
	int len;

	while (*str != '\0')
	{
		len = len + 1;
		*str = *str + 1;
	}
	return (len);
}
