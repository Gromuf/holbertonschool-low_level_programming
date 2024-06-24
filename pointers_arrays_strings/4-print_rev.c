#include "main.h"

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\n')
	{
		length++;
	}

	for (i = length ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
