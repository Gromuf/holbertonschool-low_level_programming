#include "main.h"

/**
* puts2 - Prints every other character of a string,
* starting with the first character.
* @str: Pointer to the null-terminated string to be printed.
*
* Description:
* This function prints every other character of the string pointed to by @str,
* starting with the first character, followed by a newline character '\n'.
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
