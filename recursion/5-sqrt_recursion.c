#include "main.h"

/**
 * sqrt_rec - Helper function to find the natural square root of a number.
 * @n: The number to find the square root of.
 * @res: The current guess for the square root.
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */
int sqrt_rec(int n, int res)
{
	if ((res * res) == n)
		return (res);
	if (res == n / 2)
		return (-1);
	return (sqrt_rec(n, res + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	int result = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_rec(n, result));
}
