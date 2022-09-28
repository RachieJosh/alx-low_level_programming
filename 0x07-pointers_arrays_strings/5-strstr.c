#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: Paramter one
 * @needle: Parameter two
 *
 * Return: a pointer to the start of substring,
 *         or NUL if substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int w;
	int e;

	if (needle[0] == '\0')
		return (haystack);

	for (w = 0; haystack[w] != '\0'; w++)
	{
		if (haystack[w] == needle[0])
		{
			for (e = 0; needle[e] != '\0'; e++)
			{
				if (haystack[w + e] != needle[e])
					break;
			}
			if (needle[e] == '\0')
				return (haystack + w);
		}

	}

	return ('\0');
}
