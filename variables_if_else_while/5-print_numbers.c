#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the numbers from 0 to 9, each followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
