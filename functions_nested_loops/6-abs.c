#include "main.h"


/**
 * _abs - Computes the absolute value of an integer
 * @i: The integer to be checked
 *
 * Description: This function returns the absolute value of an integer.
 *
 * Return: The absolute value of the integer
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * i);
	}
}
