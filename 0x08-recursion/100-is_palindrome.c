#include "main.h"

/**
 * _strlen - A function that prints the length of string
 * @str: Paramter
 *
 * Return: length of character
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * checker - checks strings to find a palindrome
 * @f: Paramter one
 * @g: Parameter two
 * @h: Parameter three
 *
 * Return: 1 if palindrome,
 *         0 otherwise
 */

int checker(int f, int g, char *h)
{
	if (f >= g)
		return (1);
	else if (h[f] != h[g])
		return (0);
	else
		return (checker(f + 1, g - 1, h));
}

/**
 * is_palindrome - A function that prints if a string is a palindrome
 * @s: Paramter one
 *
 * Return: 1 if palindrome,
 *         0 otherwise
 */

int is_palindrome(char *s)
{
	int w;

	w = _strlen(s) - 1;

	return (checker(0, w, s));
}
