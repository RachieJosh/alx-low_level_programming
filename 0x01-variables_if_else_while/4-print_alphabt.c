#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
		if (lowercase == 'q' || lowercase == 'e')
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}

