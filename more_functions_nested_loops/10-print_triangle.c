#include "main.h"

/**
* print_triangle - Prints a triangle made of '#' characters of a specified size
* @size: Size of the triangle to be printed
*
* Description: If size is 0 or negative, prints a newline.
*              Otherwise, prints a triangle with each row containing
*              incrementally more '#' characters, aligned to the right.
*/
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = 0 ; j < size - i ; j++)
			{
				_putchar(' ');
			}
			for (j = size - i ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
