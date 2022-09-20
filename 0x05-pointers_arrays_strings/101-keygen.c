#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A random password generator for 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q, w, e, r;
	char t[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[58];

	srand(time(NULL));
	while (r != 2772)
	{
		q = e = r = 0;
		while ((2772 - 122) > r)
		{
			w = rand() % 62;
			y[i] = t[j];
			r = r + t[w];
			q++;
		}
		while (t[e])
		{
			if (t[e] == (2772 - r))
			{
				y[q] = t[e];
				r = r + t[e];
				q++;
				break;
			}
			e++;
		}
	}
	y[q] = '\0';
	printf("%s", y);
	return (0);
}
