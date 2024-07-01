#include "main.h"

/**
 * _puts_recursion - Prints a string recursively followed by a new line
 * @s: Pointer to the string to be printed
 *
 * This function prints the string @s recursively, character by character,
 * using the _putchar function, until it reaches the null terminator '\0'.
 * After printing the entire string, it prints a new line character '\n'.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
