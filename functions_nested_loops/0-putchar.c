#include "main.h"

/**
 * x - Prints "_putchar" followed by a new line
 *
 * Description: This function prints the string "_putchar"
 * followed by a new line character to the standard output.
 */
void x(void)
{
	char text[] = "_putchar\n";
	int i;

	for (i = 0 ; text[i] != '\0' ; i++)
	{
		_putchar(text[i]);
	}
}

/**
 * main - Entry point
 *
 * Description: Calls the function x to print "_putchar\n"
 * This is a simple program to demonstrate how to use a custom
 * function to print text to the console.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	x();
	return (0);
}
