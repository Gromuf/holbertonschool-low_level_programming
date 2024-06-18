#include "main.h"
#include <stdio.h>

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
