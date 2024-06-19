#include "main.h"

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
