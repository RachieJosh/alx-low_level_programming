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
		if (lowercase == 'q' || lowercase == 'e')
		{
			continue;
		}
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}

