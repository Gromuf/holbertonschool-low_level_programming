#include "main.h"

/**
 * _sqrt_recursion - Calculates the integer square
 * root of a number recursively.
 * @n: The number for which to calculate the square root.
 *
 * Return: The integer square root of n,
 * or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	static int i = 1;
	int result;

	if (n == 0)
		return (0);
	if (i * i > n)
	{
		i = 1;
		return (-1);
	}
	if (i * i == n)
	{
		result = i;
		i = 1;
		return (result);
	}
	i++;
	return (_sqrt_recursion(n));
}
