#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet from 'a' to 'z',
 *              excluding 'e' and 'q', followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
