#include "main.h"

/**
 * checker - A function that checks for the square root of number
 * @q: Paramter one
 * @w: Parameter two
 *
 * Return: squarer root of number
 */

int checker(int q, int w)
{
	if (q * q == w)
		return (q);
	if (q * q > w)
		return (-1);

	return (checker(q + 1, w));
}

/**
 * _sqrt_recursion - A function that returns the natural square root,
 *                   of a number.
 * @n: Paramter one
 *
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (checker(1, n));
}
