#include "main.h"

/**
* puts_half - Prints the second half of a string.
* @str: Pointer to the null-terminated string to be printed.
*
* Description:
* This function prints the second half of the string pointed to by @str,
* followed by a newline character '\n'.
*/
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
