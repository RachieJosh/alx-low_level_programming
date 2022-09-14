#include "main.h"

/**
  * _abs - A function that computes the absolute value of an integer
  * @n: Integer to be computed
  *
  * Return: The absolute value of integer argument
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
