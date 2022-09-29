#include "main.h"

/**
 * checker - checks which is prime or not.
 * @r: Paramter one
 * @n: Parameter two
 *
 * Return: 1 if prime number,
 *         0 otherwise
 */

int checker(int r, int n)
{
	if (n % r == 0 && n != r)
		return (0);
	if (n % r != 0 && r < n)
		return (checker(r + 1, n));

	return (1);
}

/**
 * is_prime_number - A function that prints prime number.
 * @n: Parameter one
 *
 * Return: 1 if prime number,
 *         0 otherwise
 */

int is_prime_number(int n)
{
	int r = 2;

	if (n < 2)
		return (0);

	return (checker(r, n));
}
