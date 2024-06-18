#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times, followed by a newline each time.
 *
 * Description:
 * Uses nested loops to print each letter of the alphabet ('a' to 'z')
 * 10 times in total, each set followed by a newline character.
 * Uses the _putchar function to output characters.
 *
 * Return: void (no return value)
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0 ; i < 10 ; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
