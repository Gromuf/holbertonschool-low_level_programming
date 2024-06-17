#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet in reverse from 'z' to 'a',
 *              followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
