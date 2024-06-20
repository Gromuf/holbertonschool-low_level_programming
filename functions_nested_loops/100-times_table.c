#include "main.h"

void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;
	int i;
	int j;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			  if (j != 0)
			  {
				_putchar(',');
				_putchar(' ');
			  }
			  if (i * j < 10)
			  {
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + i * j);
			  }
			  else if (i * j < 100)
			  {
				_putchar(' ');
				_putchar('0' + i * j / 10);
				_putchar('0' + i * j % 10);
			  }
			  else
			  {
				_putchar('0' + i * j / 100);
				_putchar('0' + (i * j / 10) % 10);
				_putchar('0' + i * j % 10);
			  }
		}
		_putchar('\n');
	}
}
