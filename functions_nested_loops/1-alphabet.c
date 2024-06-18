#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Description:
 * This function prints each character of the alphabet from 'a' to 'z'
 * using the _putchar function. It ends by printing a newline character.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

