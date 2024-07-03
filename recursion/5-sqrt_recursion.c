#include "main.h"

/**
 * _sqrt_recursion - Calculates the integer square
 * root of a number recursively.
 * @n: The number for which to calculate the square root.
 *
 * Return: The integer square root of n,
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

int _sqrt_recursion(int n)
{
	int result;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_rec(n, result));
}
