#include "main.h"

/**
  * cap_string - A function that capitalizes all words of a string
  * @x: Parameter
  *
  * Return: Always 0 (Success)
 */

char *cap_string(char *x)
{
	char aspc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int slen = 13;
	int c = 0, v;

	while (x[c])
	{
		v = 0;
		while (v < slen)
		{
			if ((c == 0 || x[c - 1] == aspc[v]) && (x[c] >= 97 && x[c] <= 122))
				x[c] = x[c] - 32;
			v++;
		}
		c++;
	}
	return (x);
}
