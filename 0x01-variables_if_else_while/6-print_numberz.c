#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
 */
int main(void)
{
	int numberz;

	for (numberz = 0; numberz < 10; numberz++)
		putchar(numberz + '0');
	putchar('\n');
	return (0);
}
