#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Description: This function prints the 9 times table, from 0x0 to 9x9.
 * Each number is followed by a comma and space, except for the last number
 * in each row. Each row ends with a newline character.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (i * j == 0 && j > 0)
			{
				_putchar(' ');
			}
			if (i * j == 0 && j < 9)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			if (i * j == 0 && j == 9)
			{
				_putchar('0');
			}
			else if (i * j < 10 && i * j > 0)
			{
				_putchar(' ');
				_putchar('0' + i * j);
			}
			else if (i * j >= 10)
			{
				_putchar('0' + i * j / 10);
				_putchar('0' + i * j % 10);
			}
			if (j < 9 && i * j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
