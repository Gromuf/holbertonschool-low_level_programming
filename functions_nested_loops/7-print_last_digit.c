#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: The number to be checked
 *
 * Description: This function returns the last digit of an integer.
 * If the last digit is negative, it converts it to positive before returning.
 *
 * Return: The last digit of the number
 */
int print_last_digit(int i)
{
	int lastDigit = i % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}

	_putchar('0' + lastDigit);
	return (lastDigit);
}
