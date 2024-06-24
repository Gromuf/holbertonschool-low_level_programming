#include "main.h"

/**
* _puts - Outputs a string followed by a newline character.
* @str: Pointer to the null-terminated string to be output.
*
* Description:
* This function outputs the string pointed to by @str to the standard output,
* character by character, using the _putchar function. It appends a newline
* character '\n' after printing the entire string.
*/
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
