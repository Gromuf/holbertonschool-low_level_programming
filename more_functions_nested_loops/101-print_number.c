#include "main.h"

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
