#include "main.h"

void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			if (i * j == 0 && j > 0)
			{
				_putchar(' ');
			}
			if (i * j == 0 && j < n)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			if (i * j == 0 && j == n)
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
			if (j < n && i * j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
