#include "main.h"

/**
 * _atoi - It converts a string to an integer
 * @s: The string to be checked
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int symbol = 1;
	unsigned int number = 0;

	do {
		if (*s == '-')
			symbol *= -1;

		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');

		else if (number > 0)
			break;

	} while (*s++);

	return (number * symbol);
}
