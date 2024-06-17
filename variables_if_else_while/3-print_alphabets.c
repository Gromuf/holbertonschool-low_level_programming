#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet from 'a' to 'z',
 *              then prints the uppercase alphabet from 'A' to 'Z',
 *              followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char c;
        for (c = 'a' ; c<= 'z' ; c++)
                putchar(c);
	for (c = 'A' ; c<= 'Z' ; c++)
                putchar(c);
        putchar('\n');
        return (0);     
}  
