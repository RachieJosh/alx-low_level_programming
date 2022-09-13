#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int finaln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	finaln = n % 10;

	if (finaln > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, finaln);
	} else if (finaln == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, finaln);
	} else if (finaln < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, finaln);
	}
	return (0);
}
