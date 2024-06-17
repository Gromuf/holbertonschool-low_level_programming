#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible single-digit numbers separated by ', '
 *              and followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
