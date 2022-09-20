#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _strlen - Returns the length of a string
  * @str: Character to be checked
  *
  * Return: The length of the string
 */

int _strlen(char *str)
{
	int w; 

	for (w = 0; str[w] != '\0'; w++)
	{}
	return (w);
}
