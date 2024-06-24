#include "main.h"
#include "2-strlen.c"

void print_rev(char *s)
{
	int length = _strlen(*s);
	int i;

	for (i = length ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
