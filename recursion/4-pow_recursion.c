#include "main.h"

/**
 * _pow_recursion - Computes the power of a number.
 * @x: The base integer.
 * @y: The exponent integer.
 *
 * Return: The result of x raised to the power of y.
 *         If y is less than 0, returns -1 to indicate an error.
 *         If y is 0, returns 1 as any number raised to the power of 0 is 1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
