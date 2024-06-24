#include "main.h"


/**
* print_rev - Prints a string in reverse followed by a newline.
* @s: Pointer to the null-terminated string to be printed.
*
* Description:
* This function prints the characters
* of the string pointed to by @s in reverse order,
* followed by a newline character '\n'.
*/
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
