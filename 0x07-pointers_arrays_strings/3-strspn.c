#include "main.h"

/**
 * _strspn - A function that calculates the length of initial segment s,
 *           which consists of bytes in accept.
 * @s: Parameter one
 * @accept: Parameter two
 *
 * Return: number of bytes in initial segment s,
 *         whuch consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bt = 0;
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
			{
				bt++;
				break;
			}

			else if (accept[num + 1] == '\0')
				return (bt);
		}

		s++;
	}

	return (bt);
}
