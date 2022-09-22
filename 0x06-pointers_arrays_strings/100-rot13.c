#include "main.h"

/**
 * rot13 - A function that encodes a string
 * @s: string
 *
 * Return: Always 0 (Success)
*/

char *rot13(char *s)
{
	char fig1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char fig2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int x;
	int c = 0;

	for (x = 0; s[x] != '\0'; x++)
	{

		for (c = 0; fig1[c] != '\0'; c++)
		{
			if (s[x] == fig1[c])
			{
				s[x] = fig2[c];
				break;
			}
		}
	}
	return (s);
}
