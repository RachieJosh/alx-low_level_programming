#include "main.h"

/**
 * _strchr - A function that in a string, locates a character.
 * @s: Parameter one
 * @c: Paramter two
 *
 * Return: a pointer to the matched character,
 *         or NULL if character not found.
 */

char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; s[num] >= '\0'; num++)
	{
		if (s[num] == c)
			return (s + num);
	}

	return ('\0');
}
