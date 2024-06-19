#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from i to 98
 * @i: The starting number
 *
 * Description: This function prints
 *all natural numbers from the starting
 *number i to 98, followed by a new line.
 *Numbers are separated by a comma
 *and a space. The first printed number
 *is the number passed to the function
 * and the last printed number is 98.
 */
void print_to_98(int i)
{
	if (i <= 98)
	{
		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
			i--;
		}
	}
}
