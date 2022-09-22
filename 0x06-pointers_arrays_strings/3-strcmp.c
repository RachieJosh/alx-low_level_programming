#include "main.h"

/**
  * _strcmp - A function that compares two strings
  * @s1: Parameter one
  * @s2: Parameter two
  *
  * Return: 0 if s1 and s2 are equal,
  *         negative value id s1 is less than s2,
  *         positive value if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int w = 0, diff = 0;

	while (1)
	{
		if (s1[w] == '\0' && s2[w] == '\0')
			break;
		else if (s1[w] == '\0')
		{
			diff = s2[w];
			break;
		}
		else if (s2[w] == '\0')
		{
			diff = s1[w];
			break;
		}
		else if (s1[w] != s2[w])
		{
			diff = s1[w] - s2[w];
			break;
		}
		else
			w++;
	}

	return (diff);
}
