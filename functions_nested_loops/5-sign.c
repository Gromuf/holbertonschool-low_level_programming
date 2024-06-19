#include "main.h"
#include <stdio.h>

/**
 * print_sign - Determines and prints the sign of a number
 * @i: The number to be checked
 *
 * Description: This function prints '+' if the number is positive,
 * '0' if the number is zero, and '-' if the number is negative.
 *
 * Return: 1 if the number is positive, 0 if the number is zero,
 * -1 if the number is negative
 */
int print_sign(int i)
{
	if (i > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	else if (i == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else
	{
		write(1, "-", 1);
		return (-1);
	}
}
