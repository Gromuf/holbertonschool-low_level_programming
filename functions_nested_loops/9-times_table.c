#include "main.h"

void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (j < 9)
			{
				_putchar(' ');
				if (i * j <= 9)
				{
					_putchar(' ');
				}
			}
			_putchar('0' + i * j);
			_putchar(',');
		}
		_putchar('\n');
	}
}
