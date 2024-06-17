#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the digits from 0 to 9
 *		and the letters from 'a' to 'f',
 *		followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0 ; i <= 9 ; i++)
	{
		putchar('0' + i);
	}
	for (char c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
