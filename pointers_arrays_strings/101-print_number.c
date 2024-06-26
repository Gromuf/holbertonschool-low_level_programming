#include "main.h"

/**
* print_number - Prints an integer.
* @n: The integer to print.
*
* Description: This function prints an integer using only the _putchar
* function. It handles negative numbers by printing a '-' sign and then
* recursively prints each digit of the number.
*/
void print_number(int n)
{
	unsigned int res = n;

	if (n < 0)
	{
		_putchar('-');
		res = -res;
	}
	if ((res / 10) > 0)
		print_number(res / 10);
	_putchar((res % 10) + '0');
}
