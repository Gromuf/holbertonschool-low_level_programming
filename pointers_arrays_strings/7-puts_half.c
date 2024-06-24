#include "main.h"

void puts_half(char *str)
{
	int length = 0;
	int midLength;
	int i;

	while (str[length] != 0)
	{
		length++;
	}
	if (length % 2 == 0)
		midLength = length / 2;
	else
		midLength = (length + 1) / 2;
	for (i = midLength ; i < length ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
