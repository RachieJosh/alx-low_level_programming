#include "main.h"

/**
  * leet - A function that encode a string into 1337
  * @j: Parameter
  *
  * Return: Always 0 (Success)
 */

char *leet(char *j)
{
	int q = 0, w, e = 5;
	char ying[5] = {'A', 'E', 'O', 'T', 'L'};
	char yang[5] = {'4', '3', '0', '7', '1'};

	while (j[q])
	{
		w = 0;

		while (w < e)
		{
			if (j[q] == ying[w] || j[q] - 32 == ying[w])
				j[q] = yang[w];
			w++;
		}
		q++;
	}

	return (j);
}
