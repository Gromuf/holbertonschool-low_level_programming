#include "main.h"

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
